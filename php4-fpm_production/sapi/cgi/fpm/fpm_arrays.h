
	/* $Id: fpm_arrays.h,v 1.2 2008/05/24 17:38:47 anight Exp $ */
	/* (c) 2007,2008 Andrei Nigmatulin */

#ifndef FPM_ARRAYS_H
#define FPM_ARRAYS_H 1

#include <stdlib.h>
#include <string.h>

struct fpm_array_s {
	void *data;
	size_t sz;
	size_t used;
	size_t allocated;
};

struct fpm_array_s *fpm_array_init(struct fpm_array_s *a, unsigned int sz, unsigned int initial_num);
void *fpm_array_item(struct fpm_array_s *a, unsigned int n);
void *fpm_array_item_last(struct fpm_array_s *a);
int fpm_array_item_remove(struct fpm_array_s *a, unsigned int n);
void *fpm_array_push(struct fpm_array_s *a);
void fpm_array_free(struct fpm_array_s *a);

#endif
