/*                                                                -*- C -*-
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
   | Author: Stig Sæther Bakken <ssb@fast.no>                             |
   +----------------------------------------------------------------------+
*/

/* $Id: build-defs.h.in,v 1.11.14.1 2006/01/01 13:46:59 sniper Exp $ */

#define CONFIGURE_COMMAND " './configure' '--prefix=/usr/local/php4' '--without-mysql' '--enable-fastcgi' '--enable-fpm' '--with-fpm-log=/var/log/php4/php-fpm.log' '--with-fpm-pid=/run/php4/php-fpm.pid' '--with-pear' '--with-openssl' '--with-curl' '--with-mod_charset' '--with-bz2' '--with-pgsql=/usr/local/pgsql' '--with-mcrypt' '--with-mhash' '--with-pdflib=/usr/local' '--with-iconv' '--with-gd' '--with-mime-magic' '--with-xmlrpc' '--with-jpeg-dir=/usr' '--with-png-dir=/usr' '--with-freetype-dir=/usr' '--with-tiff-dir=/usr' '--with-tsrm-pthreads' '--with-gnu-ld' '--with-zlib-dir' '--with-kerberos' '--with-pcre-regex=/usr' '--enable-track-vars' '--enable-exif' '--enable-dio' '--enable-mbstring' '--enable-bcmath' '--enable-calendar' '--enable-ftp' '--enable-shmop' '--enable-sockets' '--enable-inline-optimization' '--enable-zend-multibyte' '--enable-yp' '--enable-wddx' '--enable-dbx' '--enable-gd-jis-conv' '--enable-gd-native-ttf' '--enable-mbregex' '--enable-amf' '--enable-sysvsem' '--enable-sysvshm' '--enable-sysvmsg' '--enable-versioning' '--enable-pcntl' '--enable-zip' '--enable-experimental-zts' '--enable-libgcc'"
#define PHP_ADA_INCLUDE		""
#define PHP_ADA_LFLAGS		""
#define PHP_ADA_LIBS		""
#define PHP_APACHE_INCLUDE	""
#define PHP_APACHE_TARGET	""
#define PHP_FHTTPD_INCLUDE      ""
#define PHP_FHTTPD_LIB          ""
#define PHP_FHTTPD_TARGET       ""
#define PHP_CFLAGS		"$(CFLAGS_CLEAN) -prefer-non-pic -static"
#define PHP_DBASE_LIB		""
#define PHP_BUILD_DEBUG		""
#define PHP_GDBM_INCLUDE	""
#define PHP_HSREGEX		""
#define PHP_IBASE_INCLUDE	""
#define PHP_IBASE_LFLAGS	""
#define PHP_IBASE_LIBS		""
#define PHP_IFX_INCLUDE		""
#define PHP_IFX_LFLAGS		""
#define PHP_IFX_LIBS		""
#define PHP_INSTALL_IT		"@echo "Installing PHP FPM CGI binary: $(INSTALL_ROOT)$(bindir)/"; $(INSTALL) -m 0755 $(SAPI_CGI_PATH) $(INSTALL_ROOT)$(bindir)/$(program_prefix)php-cgi$(program_suffix)$(EXEEXT)"
#define PHP_IODBC_INCLUDE	""
#define PHP_IODBC_LFLAGS	""
#define PHP_IODBC_LIBS		""
#define PHP_MSQL_INCLUDE	""
#define PHP_MSQL_LFLAGS		""
#define PHP_MSQL_LIBS		""
#define PHP_MYSQL_INCLUDE	""
#define PHP_MYSQL_LIBS		""
#define PHP_MYSQL_TYPE		"none"
#define PHP_ODBC_INCLUDE	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_SHARED_LIBADD 	""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_VERSION		""
#define PHP_ORACLE_SHARED_LIBADD 	""
#define PHP_ORACLE_DIR				""
#define PHP_ORACLE_VERSION			""
#define PHP_PGSQL_INCLUDE	""
#define PHP_PGSQL_LFLAGS	""
#define PHP_PGSQL_LIBS		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PHP_REGEX_LIB		""
#define PHP_SOLID_INCLUDE	""
#define PHP_SOLID_LIBS		""
#define PHP_EMPRESS_INCLUDE	""
#define PHP_EMPRESS_LIBS	""
#define PHP_SYBASE_INCLUDE	""
#define PHP_SYBASE_LFLAGS	""
#define PHP_SYBASE_LIBS		""
#define PHP_DBM_TYPE		""
#define PHP_DBM_LIB		""
#define PHP_LDAP_LFLAGS		""
#define PHP_LDAP_INCLUDE	""
#define PHP_LDAP_LIBS		""
#define PHP_BIRDSTEP_INCLUDE     ""
#define PHP_BIRDSTEP_LIBS        ""
#define PEAR_INSTALLDIR         "/usr/local/php4/lib/php"
#define PHP_INCLUDE_PATH	".:/usr/local/php4/lib/php"
#define PHP_EXTENSION_DIR       "/usr/local/php4/lib/php/extensions/no-debug-zts-20020429"
#define PHP_PREFIX              "/usr/local/php4"
#define PHP_BINDIR              "/usr/local/php4/bin"
#define PHP_LIBDIR              "/usr/local/php4/lib/php"
#define PHP_DATADIR             "/usr/local/php4/share/php"
#define PHP_SYSCONFDIR          "/usr/local/php4/etc"
#define PHP_LOCALSTATEDIR       "/usr/local/php4/var"
#define PHP_CONFIG_FILE_PATH    "/usr/local/php4/lib"
#define PHP_CONFIG_FILE_SCAN_DIR    ""
#define PHP_SHLIB_SUFFIX        "so"
