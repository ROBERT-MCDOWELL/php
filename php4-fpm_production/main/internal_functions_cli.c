/* -*- C -*-
   +----------------------------------------------------------------------+
   | PHP Version 4                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2006 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
 */


/* $Id: internal_functions.c.in,v 1.22.4.2.4.1 2006/01/01 13:46:59 sniper Exp $ */

#include "php.h"
#include "php_main.h"
#include "zend_modules.h"
#include "internal_functions_registry.h"
#include "zend_compile.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#include "ext/openssl/php_openssl.h"
#include "ext/pcre/php_pcre.h"
#include "ext/zlib/php_zlib.h"
#include "ext/bcmath/php_bcmath.h"
#include "ext/bz2/php_bz2.h"
#include "ext/calendar/php_calendar.h"
#include "ext/ctype/php_ctype.h"
#include "ext/curl/php_curl.h"
#include "ext/dbx/php_dbx.h"
#include "ext/dio/php_dio.h"
#include "ext/exif/php_exif.h"
#include "ext/ftp/php_ftp.h"
#include "ext/gd/php_gd.h"
#include "ext/iconv/php_iconv.h"
#include "ext/mbstring/mbstring.h"
#include "ext/mcrypt/php_mcrypt.h"
#include "ext/mhash/php_mhash.h"
#include "ext/mime_magic/php_mime_magic.h"
#include "ext/overload/php_overload.h"
#include "ext/pcntl/php_pcntl.h"
#include "ext/pdf/php_pdf.h"
#include "ext/pgsql/php_pgsql.h"
#include "ext/posix/php_posix.h"
#include "ext/session/php_session.h"
#include "ext/shmop/php_shmop.h"
#include "ext/sockets/php_sockets.h"
#include "ext/standard/php_standard.h"
#include "ext/sysvmsg/php_sysvmsg.h"
#include "ext/sysvsem/php_sysvsem.h"
#include "ext/sysvshm/php_sysvshm.h"
#include "ext/tokenizer/php_tokenizer.h"
#include "ext/wddx/php_wddx.h"
#include "ext/xml/php_xml.h"
#include "ext/xmlrpc/php_xmlrpc.h"
#include "ext/yp/php_yp.h"


zend_module_entry *php_builtin_extensions[] = {
	phpext_yp_ptr,
	phpext_xmlrpc_ptr,
	phpext_xml_ptr,
	phpext_wddx_ptr,
	phpext_tokenizer_ptr,
	phpext_sysvshm_ptr,
	phpext_sysvsem_ptr,
	phpext_sysvmsg_ptr,
	phpext_standard_ptr,
	phpext_sockets_ptr,
	phpext_shmop_ptr,
	phpext_session_ptr,
	phpext_posix_ptr,
	phpext_pgsql_ptr,
	phpext_pdf_ptr,
	phpext_pcntl_ptr,
	phpext_overload_ptr,
	phpext_mime_magic_ptr,
	phpext_mhash_ptr,
	phpext_mcrypt_ptr,
	phpext_mbstring_ptr,
	phpext_iconv_ptr,
	phpext_gd_ptr,
	phpext_ftp_ptr,
	phpext_exif_ptr,
	phpext_dio_ptr,
	phpext_dbx_ptr,
	phpext_curl_ptr,
	phpext_ctype_ptr,
	phpext_calendar_ptr,
	phpext_bz2_ptr,
	phpext_bcmath_ptr,
	phpext_zlib_ptr,
	phpext_pcre_ptr,
	phpext_openssl_ptr,

};

#define EXTCOUNT (sizeof(php_builtin_extensions)/sizeof(zend_module_entry *))
	

int php_startup_internal_extensions(void)
{
	return php_startup_extensions(php_builtin_extensions, EXTCOUNT);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 */
