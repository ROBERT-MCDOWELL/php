
	/* $Id: fpm_worker_pool.c,v 1.15.2.1 2008/12/13 03:21:18 anight Exp $ */
	/* (c) 2007,2008 Andrei Nigmatulin */

#include "fpm_config.h"

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include "fpm_arrays.h"
#include "fpm_worker_pool.h"
#include "fpm_cleanup.h"
#include "fpm_children.h"
#include "fpm_shm.h"
#include "fpm_shm_slots.h"
#include "fpm_conf.h"

struct fpm_worker_pool_s *fpm_worker_all_pools;

static void fpm_worker_pool_cleanup(int which, void *arg)
{
	struct fpm_worker_pool_s *wp, *wp_next;

	for (wp = fpm_worker_all_pools; wp; wp = wp_next) {
		wp_next = wp->next;
		fpm_worker_pool_config_free(wp->config);
		fpm_children_free(wp->children);
		fpm_array_free(&wp->slots_used);
		fpm_array_free(&wp->slots_free);
		fpm_shm_free_list(wp->shm_list, which == FPM_CLEANUP_CHILD ? fpm_shm_slots_mem() : 0);
		free(wp->config);
		free(wp->user);
		free(wp->home);
		free(wp);
	}

	fpm_worker_all_pools = 0;
}

struct fpm_worker_pool_s *fpm_worker_pool_alloc()
{
	struct fpm_worker_pool_s *ret;

	ret = malloc(sizeof(struct fpm_worker_pool_s));

	if (!ret) {
		return 0;
	}

	memset(ret, 0, sizeof(struct fpm_worker_pool_s));

	if (!fpm_worker_all_pools) {
		fpm_worker_all_pools = ret;
	}

	fpm_array_init(&ret->slots_used, sizeof(struct fpm_shm_slot_ptr_s), 50);
	fpm_array_init(&ret->slots_free, sizeof(struct fpm_shm_slot_ptr_s), 50);

	return ret;
}

int fpm_worker_pool_init_main()
{
	if (0 > fpm_cleanup_add(FPM_CLEANUP_ALL, fpm_worker_pool_cleanup, 0)) {
		return -1;
	}

	return 0;
}

struct atomic_int_t *atomic_fetch_add(atomic_t *value, atomic_int_t add)
{
	__asm__ volatile ( "lock;" "xaddq %0, %1;" : "+r" (add) : "m" (*value) : "memory");
	return (struct atomic_int_t *)add;
}

struct atomic_uint_t *atomic_cmp_set(atomic_t *lock, atomic_uint_t old, atomic_uint_t set) {
	unsigned char res;
	__asm__ volatile ("lock; cmpxchgq %3, %1; sete %0;" : "=a" (res) : "m" (*lock), "a" (old), "r" (set) : "memory");
	if (res) {
		return (struct atomic_uint_t *)lock;
	} else {
		return NULL;
	}
}

int fpm_spinlock(atomic_t *lock, int try_once)
{
	if (try_once) {
		return atomic_cmp_set(lock, 0, 1) ? 0 : -1;
	}

	for (;;) {

		if (atomic_cmp_set(lock, 0, 1)) {
			break;
		}

		sched_yield();
	}

	return 0;
}
