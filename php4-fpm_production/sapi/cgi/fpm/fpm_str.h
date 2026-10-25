
	/* $Id: fpm_str.h,v 1.3 2008/05/24 17:38:47 anight Exp $ */
	/* (c) 2007,2008 Andrei Nigmatulin */

#ifndef FPM_STR_H
#define FPM_STR_H 1

char *cpystrn(char *dst, const char *src, size_t dst_size);
char *str_purify_filename(char *dst, char *src, size_t size);

#endif
