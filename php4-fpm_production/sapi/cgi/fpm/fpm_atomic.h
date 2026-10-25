
	/* $Id: fpm_atomic.h,v 1.3 2008/09/18 23:34:11 anight Exp $ */
	/* (c) 2007,2008 Andrei Nigmatulin */

#ifndef FPM_ATOMIC_H
#define FPM_ATOMIC_H 1

#include <stdint.h>
#include <sched.h>

typedef int64_t                     atomic_int_t;
typedef uint64_t                    atomic_uint_t;
typedef volatile atomic_uint_t      atomic_t;

struct atomic_int_t *atomic_fetch_add(atomic_t *value, atomic_int_t add);
struct atomic_uint_t *atomic_cmp_set(atomic_t *lock, atomic_uint_t old, atomic_uint_t set);
int fpm_spinlock(atomic_t *lock, int try_once);

#endif

