srcdir = /home/src/php4-fpm_production
builddir = /home/src/php4-fpm_production
top_srcdir = /home/src/php4-fpm_production
top_builddir = /home/src/php4-fpm_production
EGREP = grep -E
SED = /usr/bin/sed
CONFIGURE_COMMAND = './configure' '--prefix=/usr/local/php4' '--without-mysql' '--enable-fastcgi' '--enable-fpm' '--with-fpm-log=/var/log/php4/php-fpm.log' '--with-fpm-pid=/run/php4/php-fpm.pid' '--with-pear' '--with-openssl' '--with-curl' '--with-mod_charset' '--with-bz2' '--with-pgsql=/usr/local/pgsql' '--with-mcrypt' '--with-mhash' '--with-pdflib=/usr/local' '--with-iconv' '--with-gd' '--with-mime-magic' '--with-xmlrpc' '--with-jpeg-dir=/usr' '--with-png-dir=/usr' '--with-freetype-dir=/usr' '--with-tiff-dir=/usr' '--with-tsrm-pthreads' '--with-gnu-ld' '--with-zlib-dir' '--with-kerberos' '--with-pcre-regex=/usr' '--enable-track-vars' '--enable-exif' '--enable-dio' '--enable-mbstring' '--enable-bcmath' '--enable-calendar' '--enable-ftp' '--enable-shmop' '--enable-sockets' '--enable-inline-optimization' '--enable-zend-multibyte' '--enable-yp' '--enable-wddx' '--enable-dbx' '--enable-gd-jis-conv' '--enable-gd-native-ttf' '--enable-mbregex' '--enable-amf' '--enable-sysvsem' '--enable-sysvshm' '--enable-sysvmsg' '--enable-versioning' '--enable-pcntl' '--enable-zip' '--enable-experimental-zts' '--enable-libgcc'
SHLIB_SUFFIX_NAME = so
SAPI_CLI_PATH = sapi/cli/php
BUILD_CLI = $(LIBTOOL) --mode=link $(CC) -export-dynamic $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(EXTRA_LDFLAGS_PROGRAM) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS) $(PHP_CLI_OBJS) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $(SAPI_CLI_PATH)
INSTALL_CLI = $(mkinstalldirs) $(INSTALL_ROOT)$(bindir); $(INSTALL) -m 0755 $(SAPI_CLI_PATH) $(INSTALL_ROOT)$(bindir)/$(program_prefix)php$(program_suffix)
SERVLET_CLASSPATH =
SAPI_CGI_PATH = sapi/cgi/php-cgi
BUILD_CGI = $(LIBTOOL) --mode=link $(CC) -export-dynamic $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(EXTRA_LDFLAGS_PROGRAM) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS) $(EXTRA_LIBS) $(SAPI_EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $(SAPI_CGI_PATH)
php_fpm_conf_path = /usr/local/php4/etc/php-fpm.conf
php_fpm_log_path = /var/log/php4/php-fpm.log
php_fpm_pid_path = /run/php4/php-fpm.pid
php_fpm_group = nobody
FPM_VERSION = 0.5.10
OPENSSL_SHARED_LIBADD =
PCRE_SHARED_LIBADD =
ZLIB_SHARED_LIBADD =
BZ2_SHARED_LIBADD =
CURL_SHARED_LIBADD =
GDLIB_CFLAGS = -I/home/src/php4-fpm_production/ext/gd/libgd -DHAVE_LIBPNG -DHAVE_LIBJPEG -DHAVE_LIBFREETYPE -DJISX0208
GD_SHARED_LIBADD =
ICONV_SHARED_LIBADD =
MBSTRING_SHARED_LIBADD =
MCRYPT_SHARED_LIBADD =
MHASH_SHARED_LIBADD =
MYSQL_SHARED_LIBADD =
MYSQL_MODULE_TYPE = none
MYSQL_LIBS =
MYSQL_INCLUDE =
PDF_SHARED_LIBADD =
PGSQL_SHARED_LIBADD =
SESSION_SHARED_LIBADD =
XMLRPC_SHARED_LIBADD =
YP_SHARED_LIBADD =
PHP_CLI_TARGET = $(SAPI_CLI_PATH)
PHP_SAPI_OBJS = sapi/cgi/fastcgi.lo sapi/cgi/cgi_main.lo sapi/cgi/getopt.lo sapi/cgi/fpm/fpm.lo sapi/cgi/fpm/fpm_conf.lo sapi/cgi/fpm/fpm_signals.lo sapi/cgi/fpm/fpm_children.lo sapi/cgi/fpm/fpm_worker_pool.lo sapi/cgi/fpm/fpm_unix.lo sapi/cgi/fpm/fpm_cleanup.lo sapi/cgi/fpm/fpm_sockets.lo sapi/cgi/fpm/fpm_stdio.lo sapi/cgi/fpm/fpm_env.lo sapi/cgi/fpm/fpm_events.lo sapi/cgi/fpm/fpm_php.lo sapi/cgi/fpm/fpm_php_trace.lo sapi/cgi/fpm/fpm_process_ctl.lo sapi/cgi/fpm/fpm_request.lo sapi/cgi/fpm/fpm_clock.lo sapi/cgi/fpm/fpm_shm.lo sapi/cgi/fpm/fpm_shm_slots.lo sapi/cgi/fpm/xml_config.lo sapi/cgi/fpm/zlog.lo sapi/cgi/fpm/fpm_trace.lo sapi/cgi/fpm/fpm_trace_ptrace.lo main/internal_functions.lo
PHP_CLI_OBJS = sapi/cli/php_cli.lo sapi/cli/getopt.lo main/internal_functions_cli.lo
PHP_GLOBAL_OBJS = ext/openssl/openssl.lo ext/pcre/php_pcre.lo ext/zlib/zlib.lo ext/zlib/zlib_fopen_wrapper.lo ext/bcmath/bcmath.lo ext/bcmath/libbcmath/src/add.lo ext/bcmath/libbcmath/src/div.lo ext/bcmath/libbcmath/src/init.lo ext/bcmath/libbcmath/src/neg.lo ext/bcmath/libbcmath/src/outofmem.lo ext/bcmath/libbcmath/src/raisemod.lo ext/bcmath/libbcmath/src/rt.lo ext/bcmath/libbcmath/src/sub.lo ext/bcmath/libbcmath/src/compare.lo ext/bcmath/libbcmath/src/divmod.lo ext/bcmath/libbcmath/src/int2num.lo ext/bcmath/libbcmath/src/num2long.lo ext/bcmath/libbcmath/src/output.lo ext/bcmath/libbcmath/src/recmul.lo ext/bcmath/libbcmath/src/sqrt.lo ext/bcmath/libbcmath/src/zero.lo ext/bcmath/libbcmath/src/debug.lo ext/bcmath/libbcmath/src/doaddsub.lo ext/bcmath/libbcmath/src/nearzero.lo ext/bcmath/libbcmath/src/num2str.lo ext/bcmath/libbcmath/src/raise.lo ext/bcmath/libbcmath/src/rmzero.lo ext/bcmath/libbcmath/src/str2num.lo ext/bz2/bz2.lo ext/calendar/calendar.lo ext/calendar/dow.lo ext/calendar/french.lo ext/calendar/gregor.lo ext/calendar/jewish.lo ext/calendar/julian.lo ext/calendar/easter.lo ext/calendar/cal_unix.lo ext/ctype/ctype.lo ext/curl/curl.lo ext/curl/curlstreams.lo ext/dbx/dbx.lo ext/dbx/dbx_mysql.lo ext/dbx/dbx_odbc.lo ext/dbx/dbx_pgsql.lo ext/dbx/dbx_mssql.lo ext/dbx/dbx_fbsql.lo ext/dbx/dbx_oci8.lo ext/dbx/dbx_sybasect.lo ext/dio/dio.lo ext/exif/exif.lo ext/ftp/php_ftp.lo ext/ftp/ftp.lo ext/gd/gd.lo ext/gd/gdttf.lo ext/gd/libgd/gd.lo ext/gd/libgd/gd_gd.lo ext/gd/libgd/gd_gd2.lo ext/gd/libgd/gd_io.lo ext/gd/libgd/gd_io_dp.lo ext/gd/libgd/gd_io_file.lo ext/gd/libgd/gd_ss.lo ext/gd/libgd/gd_io_ss.lo ext/gd/libgd/gd_png.lo ext/gd/libgd/gd_jpeg.lo ext/gd/libgd/gdxpm.lo ext/gd/libgd/gdfontt.lo ext/gd/libgd/gdfonts.lo ext/gd/libgd/gdfontmb.lo ext/gd/libgd/gdfontl.lo ext/gd/libgd/gdfontg.lo ext/gd/libgd/gdtables.lo ext/gd/libgd/gdft.lo ext/gd/libgd/gdcache.lo ext/gd/libgd/gdkanji.lo ext/gd/libgd/wbmp.lo ext/gd/libgd/gd_wbmp.lo ext/gd/libgd/gdhelpers.lo ext/gd/libgd/gd_topal.lo ext/gd/libgd/gd_gif_in.lo ext/gd/libgd/xbm.lo ext/gd/libgd/gd_gif_out.lo ext/gd/libgd/gd_security.lo ext/iconv/iconv.lo ext/mbstring/mbstring.lo ext/mbstring/php_unicode.lo ext/mbstring/php_mbregex.lo ext/mbstring/mbregex/mbregex.lo ext/mbstring/libmbfl/filters/html_entities.lo ext/mbstring/libmbfl/filters/mbfilter_7bit.lo ext/mbstring/libmbfl/filters/mbfilter_ascii.lo ext/mbstring/libmbfl/filters/mbfilter_base64.lo ext/mbstring/libmbfl/filters/mbfilter_big5.lo ext/mbstring/libmbfl/filters/mbfilter_byte2.lo ext/mbstring/libmbfl/filters/mbfilter_byte4.lo ext/mbstring/libmbfl/filters/mbfilter_cp1251.lo ext/mbstring/libmbfl/filters/mbfilter_cp1252.lo ext/mbstring/libmbfl/filters/mbfilter_cp866.lo ext/mbstring/libmbfl/filters/mbfilter_cp932.lo ext/mbstring/libmbfl/filters/mbfilter_cp936.lo ext/mbstring/libmbfl/filters/mbfilter_euc_cn.lo ext/mbstring/libmbfl/filters/mbfilter_euc_jp.lo ext/mbstring/libmbfl/filters/mbfilter_euc_jp_win.lo ext/mbstring/libmbfl/filters/mbfilter_euc_kr.lo ext/mbstring/libmbfl/filters/mbfilter_euc_tw.lo ext/mbstring/libmbfl/filters/mbfilter_htmlent.lo ext/mbstring/libmbfl/filters/mbfilter_hz.lo ext/mbstring/libmbfl/filters/mbfilter_iso2022_kr.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_1.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_10.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_13.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_14.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_15.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_16.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_2.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_3.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_4.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_5.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_6.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_7.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_8.lo ext/mbstring/libmbfl/filters/mbfilter_iso8859_9.lo ext/mbstring/libmbfl/filters/mbfilter_jis.lo ext/mbstring/libmbfl/filters/mbfilter_koi8r.lo ext/mbstring/libmbfl/filters/mbfilter_qprint.lo ext/mbstring/libmbfl/filters/mbfilter_armscii8.lo ext/mbstring/libmbfl/filters/mbfilter_sjis.lo ext/mbstring/libmbfl/filters/mbfilter_ucs2.lo ext/mbstring/libmbfl/filters/mbfilter_ucs4.lo ext/mbstring/libmbfl/filters/mbfilter_uhc.lo ext/mbstring/libmbfl/filters/mbfilter_utf16.lo ext/mbstring/libmbfl/filters/mbfilter_utf32.lo ext/mbstring/libmbfl/filters/mbfilter_utf7.lo ext/mbstring/libmbfl/filters/mbfilter_utf7imap.lo ext/mbstring/libmbfl/filters/mbfilter_utf8.lo ext/mbstring/libmbfl/filters/mbfilter_uuencode.lo ext/mbstring/libmbfl/mbfl/mbfilter.lo ext/mbstring/libmbfl/mbfl/mbfilter_8bit.lo ext/mbstring/libmbfl/mbfl/mbfilter_pass.lo ext/mbstring/libmbfl/mbfl/mbfilter_wchar.lo ext/mbstring/libmbfl/mbfl/mbfl_convert.lo ext/mbstring/libmbfl/mbfl/mbfl_encoding.lo ext/mbstring/libmbfl/mbfl/mbfl_filter_output.lo ext/mbstring/libmbfl/mbfl/mbfl_ident.lo ext/mbstring/libmbfl/mbfl/mbfl_language.lo ext/mbstring/libmbfl/mbfl/mbfl_memory_device.lo ext/mbstring/libmbfl/mbfl/mbfl_string.lo ext/mbstring/libmbfl/mbfl/mbfl_allocators.lo ext/mbstring/libmbfl/nls/nls_de.lo ext/mbstring/libmbfl/nls/nls_en.lo ext/mbstring/libmbfl/nls/nls_ja.lo ext/mbstring/libmbfl/nls/nls_kr.lo ext/mbstring/libmbfl/nls/nls_neutral.lo ext/mbstring/libmbfl/nls/nls_ru.lo ext/mbstring/libmbfl/nls/nls_uni.lo ext/mbstring/libmbfl/nls/nls_zh.lo ext/mbstring/libmbfl/nls/nls_hy.lo ext/mbstring/libmbfl/nls/nls_tr.lo ext/mcrypt/mcrypt.lo ext/mhash/mhash.lo ext/mime_magic/mime_magic.lo ext/overload/overload.lo ext/pcntl/pcntl.lo ext/pcntl/php_signal.lo ext/pdf/pdf.lo ext/pgsql/pgsql.lo ext/posix/posix.lo ext/session/session.lo ext/session/mod_files.lo ext/session/mod_mm.lo ext/session/mod_user.lo ext/shmop/shmop.lo ext/sockets/sockets.lo regex/regcomp.lo regex/regexec.lo regex/regerror.lo regex/regfree.lo ext/standard/array.lo ext/standard/base64.lo ext/standard/basic_functions.lo ext/standard/browscap.lo ext/standard/crc32.lo ext/standard/crypt.lo ext/standard/cyr_convert.lo ext/standard/datetime.lo ext/standard/dir.lo ext/standard/dl.lo ext/standard/dns.lo ext/standard/exec.lo ext/standard/file.lo ext/standard/filestat.lo ext/standard/flock_compat.lo ext/standard/formatted_print.lo ext/standard/fsock.lo ext/standard/head.lo ext/standard/html.lo ext/standard/image.lo ext/standard/info.lo ext/standard/iptc.lo ext/standard/lcg.lo ext/standard/link.lo ext/standard/mail.lo ext/standard/math.lo ext/standard/md5.lo ext/standard/metaphone.lo ext/standard/microtime.lo ext/standard/pack.lo ext/standard/pageinfo.lo ext/standard/parsedate.lo ext/standard/quot_print.lo ext/standard/rand.lo ext/standard/reg.lo ext/standard/soundex.lo ext/standard/string.lo ext/standard/scanf.lo ext/standard/syslog.lo ext/standard/type.lo ext/standard/uniqid.lo ext/standard/url.lo ext/standard/url_scanner.lo ext/standard/var.lo ext/standard/versioning.lo ext/standard/assert.lo ext/standard/strnatcmp.lo ext/standard/levenshtein.lo ext/standard/incomplete_class.lo ext/standard/url_scanner_ex.lo ext/standard/ftp_fopen_wrapper.lo ext/standard/http_fopen_wrapper.lo ext/standard/php_fopen_wrapper.lo ext/standard/credits.lo ext/standard/css.lo ext/standard/var_unserializer.lo ext/standard/ftok.lo ext/standard/aggregation.lo ext/standard/sha1.lo ext/sysvmsg/sysvmsg.lo ext/sysvsem/sysvsem.lo ext/sysvshm/sysvshm.lo ext/tokenizer/tokenizer.lo ext/wddx/wddx.lo ext/xml/xml.lo ext/xml/expat/xmlparse.lo ext/xml/expat/xmlrole.lo ext/xml/expat/xmltok.lo ext/xmlrpc/xmlrpc-epi-php.lo ext/xmlrpc/libxmlrpc/base64.lo ext/xmlrpc/libxmlrpc/simplestring.lo ext/xmlrpc/libxmlrpc/xml_to_dandarpc.lo ext/xmlrpc/libxmlrpc/xmlrpc_introspection.lo ext/xmlrpc/libxmlrpc/encodings.lo ext/xmlrpc/libxmlrpc/system_methods.lo ext/xmlrpc/libxmlrpc/xml_to_xmlrpc.lo ext/xmlrpc/libxmlrpc/queue.lo ext/xmlrpc/libxmlrpc/xml_element.lo ext/xmlrpc/libxmlrpc/xmlrpc.lo ext/xmlrpc/libxmlrpc/xml_to_soap.lo ext/yp/yp.lo TSRM/TSRM.lo TSRM/tsrm_strtok_r.lo TSRM/tsrm_virtual_cwd.lo main/main.lo main/snprintf.lo main/spprintf.lo main/php_sprintf.lo main/safe_mode.lo main/fopen_wrappers.lo main/alloca.lo main/php_scandir.lo main/php_ini.lo main/SAPI.lo main/rfc1867.lo main/php_content_types.lo main/strlcpy.lo main/strlcat.lo main/mergesort.lo main/reentrancy.lo main/php_variables.lo main/php_ticks.lo main/streams.lo main/network.lo main/php_open_temporary_file.lo main/php_logos.lo main/output.lo main/memory_streams.lo main/user_streams.lo main/suhosin_patch.lo Zend/zend_language_parser.lo Zend/zend_language_scanner.lo Zend/zend_ini_parser.lo Zend/zend_ini_scanner.lo Zend/zend_alloc.lo Zend/zend_compile.lo Zend/zend_constants.lo Zend/zend_dynamic_array.lo Zend/zend_execute_API.lo Zend/zend_highlight.lo Zend/zend_llist.lo Zend/zend_opcode.lo Zend/zend_operators.lo Zend/zend_ptr_stack.lo Zend/zend_stack.lo Zend/zend_variables.lo Zend/zend.lo Zend/zend_API.lo Zend/zend_extensions.lo Zend/zend_hash.lo Zend/zend_list.lo Zend/zend_indent.lo Zend/zend_builtin_functions.lo Zend/zend_sprintf.lo Zend/zend_ini.lo Zend/zend_qsort.lo Zend/zend_multibyte.lo Zend/zend_strtod.lo Zend/zend_canary.lo Zend/zend_execute.lo
PHP_MODULES =
EXT_LIBS =
abs_builddir = /home/src/php4-fpm_production
abs_srcdir = /home/src/php4-fpm_production
php_abs_top_builddir = /home/src/php4-fpm_production
php_abs_top_srcdir = /home/src/php4-fpm_production
bindir = ${exec_prefix}/bin
exec_prefix = ${prefix}
program_prefix =
program_suffix =
includedir = ${prefix}/include
libdir = ${exec_prefix}/lib/php
mandir = ${prefix}/man
phplibdir = /home/src/php4-fpm_production/modules
phptempdir = /home/src/php4-fpm_production/libs
prefix = /usr/local/php4
localstatedir = ${prefix}/var
datadir = ${prefix}/share/php
datarootdir = /usr/local/php4/php
sysconfdir = ${prefix}/etc
AWK = gawk
CC = /home/src/php4-fpm_production/meta_ccld
CFLAGS = $(CFLAGS_CLEAN) -prefer-non-pic -static
CFLAGS_CLEAN = -g -O2 -pthread -DZTS
CONFIGURE_COMMAND = './configure' '--prefix=/usr/local/php4' '--without-mysql' '--enable-fastcgi' '--enable-fpm' '--with-fpm-log=/var/log/php4/php-fpm.log' '--with-fpm-pid=/run/php4/php-fpm.pid' '--with-pear' '--with-openssl' '--with-curl' '--with-mod_charset' '--with-bz2' '--with-pgsql=/usr/local/pgsql' '--with-mcrypt' '--with-mhash' '--with-pdflib=/usr/local' '--with-iconv' '--with-gd' '--with-mime-magic' '--with-xmlrpc' '--with-jpeg-dir=/usr' '--with-png-dir=/usr' '--with-freetype-dir=/usr' '--with-tiff-dir=/usr' '--with-tsrm-pthreads' '--with-gnu-ld' '--with-zlib-dir' '--with-kerberos' '--with-pcre-regex=/usr' '--enable-track-vars' '--enable-exif' '--enable-dio' '--enable-mbstring' '--enable-bcmath' '--enable-calendar' '--enable-ftp' '--enable-shmop' '--enable-sockets' '--enable-inline-optimization' '--enable-zend-multibyte' '--enable-yp' '--enable-wddx' '--enable-dbx' '--enable-gd-jis-conv' '--enable-gd-native-ttf' '--enable-mbregex' '--enable-amf' '--enable-sysvsem' '--enable-sysvshm' '--enable-sysvmsg' '--enable-versioning' '--enable-pcntl' '--enable-zip' '--enable-experimental-zts' '--enable-libgcc'
CPP = gcc -E
CPPFLAGS = -D_REENTRANT
CXX =
CXXFLAGS = -pthread -prefer-non-pic -static
CXXFLAGS_CLEAN = -pthread
CXX_PHP_COMPILE = $(LIBTOOL) --mode=compile $(CXX_COMPILE) -c $<
DEBUG_CFLAGS =
EXTENSION_DIR = /usr/local/php4/lib/php/extensions/no-debug-zts-20020429
EXTRA_LDFLAGS = -L/usr/lib/gcc/x86_64-redhat-linux/16 -L/usr/local/lib -L/usr/local/pgsql/lib
EXTRA_LDFLAGS_PROGRAM = -L/usr/lib/gcc/x86_64-redhat-linux/16 -L/usr/local/lib -L/usr/local/pgsql/lib
EXTRA_LIBS = -lssl -lcrypto -lcrypt -lresolv -lnsl -lexpat -lcrypt -lpq -lpdf -lz -ltiff -lpng -ljpeg -lmhash -lmcrypt -lltdl -lfreetype -lpng -lz -ljpeg -lcurl -lbz2 -lz -lpcre -lm -lgcc -lcrypt
SAPI_EXTRA_LIBS = /home/src/php4-fpm_production/libevent/libevent.a -lnsl -lrt -lresolv -lxml2 -lz -llzma -lm
SAPI_EXTRA_DEPS = /home/src/php4-fpm_production/libevent/libevent.a
ZEND_EXTRA_LIBS =
INCLUDES = -I/usr/include/freetype2 -I/home/src/php4-fpm_production/ext/mbstring/mbregex -I/home/src/php4-fpm_production/ext/mbstring/libmbfl -I/home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl -I/usr/local/include -I/usr/local/pgsql/include -I/home/src/php4-fpm_production/ext/xml/expat -I$(top_builddir)/TSRM -I$(top_builddir)/Zend
EXTRA_INCLUDES =
INCLUDE_PATH = .:/usr/local/php4/lib/php
INSTALL_IT = @echo "Installing PHP FPM CGI binary: $(INSTALL_ROOT)$(bindir)/"; $(INSTALL) -m 0755 $(SAPI_CGI_PATH) $(INSTALL_ROOT)$(bindir)/$(program_prefix)php-cgi$(program_suffix)$(EXEEXT)
LEX = flex
LEX_OUTPUT_ROOT = lex.yy
LFLAGS =
LIBTOOL = $(SHELL) $(top_builddir)/libtool --silent --preserve-dup-deps
LN_S = ln -s
NATIVE_RPATHS = -Wl,-rpath,/usr/lib/gcc/x86_64-redhat-linux/16 -Wl,-rpath,/usr/local/lib -Wl,-rpath,/usr/local/pgsql/lib
PEAR_INSTALLDIR = ${exec_prefix}/lib/php
PHP_BUILD_DATE = 2026-10-21
PHP_COMPILE = $(LIBTOOL) --mode=compile $(COMPILE) -c $<
PHP_LDFLAGS = -L/usr/lib/gcc/x86_64-redhat-linux/16 -L/usr/local/lib -L/usr/local/pgsql/lib
PHP_LIBS =
OVERALL_TARGET = $(SAPI_CGI_PATH)
PHP_RPATHS = -R /usr/lib/gcc/x86_64-redhat-linux/16 -R /usr/local/lib -R /usr/local/pgsql/lib
PHP_SAPI = cgi
PHP_VERSION = 4.4.9
PROG_SENDMAIL = /usr/sbin/sendmail
RE2C = exit 0;
SHELL = /bin/sh
SHARED_LIBTOOL = $(LIBTOOL)
WARNING_LEVEL =
PHP_FRAMEWORKS =
PHP_FRAMEWORKPATH =
YACC = bison -y
SHLIB_SUFFIX_NAME = so
all_targets = $(OVERALL_TARGET) $(PHP_MODULES) $(PHP_CLI_TARGET)
install_targets = install-sapi install-fpm install-cli install-pear install-build install-headers install-programs
mkinstalldirs = $(top_srcdir)/build/shtool mkdir -p
INSTALL = $(top_srcdir)/build/shtool install -c
INSTALL_DATA = $(INSTALL) -m 644

DEFS = -DPHP_ATOM_INC -I$(top_builddir)/include -I$(top_builddir)/main -I$(top_srcdir)
COMMON_FLAGS = $(DEFS) $(INCLUDES) $(EXTRA_INCLUDES) $(CPPFLAGS) $(PHP_FRAMEWORKPATH)


all: $(all_targets) 
	@echo
	@echo "Build complete."
	@echo "(It is safe to ignore warnings about tempnam and tmpnam)."
	@echo
	
build-modules: $(PHP_MODULES)

libphp4.la: $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS)
	$(LIBTOOL) --mode=link $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -rpath $(phptempdir) $(EXTRA_LDFLAGS) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $@
	-@$(LIBTOOL) --silent --mode=install cp libphp4.la $(phptempdir)/libphp4.la >/dev/null 2>&1

libs/libphp4.bundle: $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS)
	$(CC) $(MH_BUNDLE_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(LDFLAGS) $(EXTRA_LDFLAGS) $(PHP_GLOBAL_OBJS:.lo=.o) $(PHP_SAPI_OBJS:.lo=.o) $(PHP_FRAMEWORKS) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $@ && cp $@ libs/libphp4.so

install: $(all_targets) $(install_targets)

install-sapi: $(OVERALL_TARGET)
	@echo "Installing PHP SAPI module:       $(PHP_SAPI)"
	-@$(mkinstalldirs) $(INSTALL_ROOT)$(bindir)
	-@if test ! -r $(phptempdir)/libphp4.$(SHLIB_SUFFIX_NAME); then \
		for i in 0.0.0 0.0 0; do \
			if test -r $(phptempdir)/libphp4.$(SHLIB_SUFFIX_NAME).$$i; then \
				$(LN_S) $(phptempdir)/libphp4.$(SHLIB_SUFFIX_NAME).$$i $(phptempdir)/libphp4.$(SHLIB_SUFFIX_NAME); \
				break; \
			fi; \
		done; \
	fi
	@$(INSTALL_IT)

install-modules: build-modules
	@test -d modules && \
	$(mkinstalldirs) $(INSTALL_ROOT)$(EXTENSION_DIR)
	@echo "Installing shared extensions:     $(INSTALL_ROOT)$(EXTENSION_DIR)/"
	@rm -f modules/*.la >/dev/null 2>&1
	@$(INSTALL) modules/* $(INSTALL_ROOT)$(EXTENSION_DIR)

install-tester:
	@echo "Installing regression tester:     $(INSTALL_ROOT)$(PEAR_INSTALLDIR)/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(PEAR_INSTALLDIR)
	@$(INSTALL) -m 755 $(top_srcdir)/run-tests.php $(INSTALL_ROOT)$(PEAR_INSTALLDIR)

install-su: install-pear install-tester

test: 
	-@if test -x $(SAPI_CLI_PATH) && test ! -z $(SAPI_CLI_PATH); then \
		TEST_PHP_EXECUTABLE=$(top_builddir)/$(SAPI_CLI_PATH) \
		TEST_PHP_SRCDIR=$(top_srcdir) \
		CC="$(CC)" \
			$(top_builddir)/$(SAPI_CLI_PATH) -d 'open_basedir=' -d 'safe_mode=0' -d 'output_buffering=0' $(top_srcdir)/run-tests.php $(TESTS); \
	else \
		echo "ERROR: Cannot run tests without CLI sapi."; \
	fi

clean:
	find . -name \*.lo | xargs rm -f
	find . -name \*.o | xargs rm -f
	find . -name \*.la | xargs rm -f
	find . -name \*.a | xargs rm -f
	find . -name \*.so | xargs rm -f
	find . -name .libs -a -type d|xargs rm -rf
	rm -f libphp4.la $(SAPI_CLI_PATH) $(OVERALL_TARGET) modules/* libs/*

distclean: clean
	rm -f config.cache config.log config.status Makefile.objects Makefile.fragments libtool main/php_config.h stamp-h php4.spec sapi/apache/libphp4.module buildmk.stamp
	egrep define'.*include/php' $(top_srcdir)/configure|sed 's/.*>//'|xargs rm -f
	find . -name Makefile | xargs rm -f

.PHONY: all clean install distclean test
.NOEXPORT:
$(SAPI_CLI_PATH): $(PHP_GLOBAL_OBJS) $(PHP_CLI_OBJS)
	$(BUILD_CLI)

install-cli: $(SAPI_CLI_PATH)
	@echo "Installing PHP CLI binary:        $(INSTALL_ROOT)$(bindir)/"
	@$(INSTALL_CLI)
	@echo "Installing PHP CLI man page:      $(INSTALL_ROOT)$(mandir)/man1/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(mandir)/man1
	@$(INSTALL_DATA) sapi/cli/php.1 $(INSTALL_ROOT)$(mandir)/man1/$(program_prefix)php$(program_suffix).1
$(SAPI_CGI_PATH): $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS) $(SAPI_EXTRA_DEPS)
	$(BUILD_CGI)

install-fpm: sapi/cgi/fpm/php-fpm.conf sapi/cgi/fpm/php-fpm
	@echo "Installing FPM config:            $(INSTALL_ROOT)$(php_fpm_conf_path)"
	-@$(mkinstalldirs) \
		$(INSTALL_ROOT)$(prefix)/sbin \
		`dirname "$(INSTALL_ROOT)$(php_fpm_conf_path)"` \
		`dirname "$(INSTALL_ROOT)$(php_fpm_log_path)"` \
		`dirname "$(INSTALL_ROOT)$(php_fpm_pid_path)"`
	-@if test -r "$(INSTALL_ROOT)$(php_fpm_conf_path)" ; then \
		dest=`basename "$(php_fpm_conf_path)"`.default ; \
		echo "                                  (installing as $$dest)" ; \
	else \
		dest=`basename "$(php_fpm_conf_path)"` ; \
	fi ; \
	$(INSTALL_DATA) $(top_builddir)/sapi/cgi/fpm/php-fpm.conf $(INSTALL_ROOT)`dirname "$(php_fpm_conf_path)"`/$$dest
	@echo "Installing init.d script:         $(INSTALL_ROOT)$(prefix)/sbin/php-fpm"
	-@$(INSTALL) -m 0755 $(top_builddir)/sapi/cgi/fpm/php-fpm $(INSTALL_ROOT)$(prefix)/sbin/php-fpm

$(top_builddir)/libevent/libevent.a: $(top_builddir)/libevent/Makefile
	cd $(top_builddir)/libevent && $(MAKE) libevent.a


/home/src/php4-fpm_production/ext/standard/parsedate.c: /home/src/php4-fpm_production/ext/standard/parsedate.y
	$(YACC) -v -d /home/src/php4-fpm_production/ext/standard/parsedate.y -o /home/src/php4-fpm_production/ext/standard/parsedate.c

/home/src/php4-fpm_production/ext/standard/var_unserializer.c: /home/src/php4-fpm_production/ext/standard/var_unserializer.re
	@(cd $(top_srcdir); $(RE2C) -b -o ext/standard/var_unserializer.c ext/standard/var_unserializer.re)

/home/src/php4-fpm_production/ext/standard/url_scanner_ex.c: /home/src/php4-fpm_production/ext/standard/url_scanner_ex.re
	@(cd $(top_srcdir); $(RE2C) -b -o ext/standard/url_scanner_ex.c	ext/standard/url_scanner_ex.re)

ext/standard/info.lo: ext/standard/../../main/build-defs.h
Zend/zend_language_parser.h:
ext/tokenizer/tokenizer.lo: Zend/zend_language_parser.h
# -*- makefile -*-

peardir=$(PEAR_INSTALLDIR)

# Skip all php.ini files altogether
PEAR_INSTALL_FLAGS = -n -dshort_open_tag=0 -dopen_basedir= -dsafe_mode=0 -dmemory_limit=-1

install-pear-packages: $(top_builddir)/sapi/cli/php
	@$(top_builddir)/sapi/cli/php $(PEAR_INSTALL_FLAGS) /home/src/php4-fpm_production/pear/install-pear.php -d "$(peardir)" -b "$(bindir)" /home/src/php4-fpm_production/pear/packages/*.tar

install-pear:
	@echo "Installing PEAR environment:      $(INSTALL_ROOT)$(peardir)/"
	@if $(mkinstalldirs) $(INSTALL_ROOT)$(peardir); then \
		$(MAKE) -s install-pear-packages; \
	else \
		cat /home/src/php4-fpm_production/pear/install-pear.txt; \
		exit 5; \
	fi


#
# Build environment install
#

phpincludedir = $(includedir)/php
phpbuilddir = $(libdir)/build

BUILD_FILES = \
	scripts/phpize.m4 \
	build/mkdep.awk \
	build/scan_makefile_in.awk \
	build/libtool.m4 \
	Makefile.global \
	acinclude.m4 \
	ltmain.sh

BUILD_FILES_EXEC = \
	build/shtool \
	config.guess \
	config.sub

bin_SCRIPTS = phpize php-config
man_PAGES = phpize php-config

install-build:
	@echo "Installing build environment:     $(INSTALL_ROOT)$(phpbuilddir)/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(phpbuilddir) $(INSTALL_ROOT)$(bindir) && \
	(cd $(top_srcdir) && \
	$(INSTALL) $(BUILD_FILES_EXEC) $(INSTALL_ROOT)$(phpbuilddir) && \
	$(INSTALL_DATA) $(BUILD_FILES) $(INSTALL_ROOT)$(phpbuilddir))

HEADER_DIRS = \
	/ \
	Zend/ \
	TSRM/ \
	include/ \
	main/ \
	regex/ \
	ext/iconv/ \
	ext/pgsql/ \
	ext/standard/ \
	ext/session/ \
	ext/xml/ \
	ext/xml/expat/ \
	ext/mbstring/ \
	ext/mbstring/libmbfl/ \
	ext/mbstring/libmbfl/mbfl/

install-headers:
	-@for i in $(HEADER_DIRS); do \
		i=`$(top_srcdir)/build/shtool path -d $$i`; \
		paths="$$paths $(INSTALL_ROOT)$(phpincludedir)/$$i"; \
	done; \
	$(mkinstalldirs) $$paths && \
	echo "Installing header files:          $(INSTALL_ROOT)$(phpincludedir)/" && \
	for i in $(HEADER_DIRS); do \
		if test -f "$(top_srcdir)/$$i"; then \
			$(INSTALL_DATA) $(top_srcdir)/$$i $(INSTALL_ROOT)$(phpincludedir)/$$i; \
		elif test -f "$(top_builddir)/$$i"; then \
			$(INSTALL_DATA) $(top_builddir)/$$i $(INSTALL_ROOT)$(phpincludedir)/$$i; \
		else \
			(cd $(top_srcdir)/$$i && $(INSTALL_DATA) *.h $(INSTALL_ROOT)$(phpincludedir)/$$i; \
			cd $(top_builddir)/$$i && $(INSTALL_DATA) *.h $(INSTALL_ROOT)$(phpincludedir)/$$i) 2>/dev/null || true; \
		fi \
	done; \
	cd $(top_srcdir)/sapi/embed && $(INSTALL_DATA) *.h $(INSTALL_ROOT)$(phpincludedir)/main

install-programs: scripts/phpize scripts/php-config
	@echo "Installing helper programs:       $(INSTALL_ROOT)$(bindir)/"
	@for prog in $(bin_SCRIPTS); do \
		echo "  program: $(program_prefix)$${prog}$(program_suffix)"; \
		$(INSTALL) -m 755 scripts/$${prog} $(INSTALL_ROOT)$(bindir)/$(program_prefix)$${prog}$(program_suffix); \
	done
	@echo "Installing man pages:             $(INSTALL_ROOT)$(mandir)/man1/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(mandir)/man1
	@for page in $(man_PAGES); do \
		echo "  page: $(program_prefix)$${page}$(program_suffix).1"; \
		$(INSTALL_DATA) scripts/man1/$${page}.1 $(INSTALL_ROOT)$(mandir)/man1/$(program_prefix)$${page}$(program_suffix).1; \
	done
	
scripts/phpize: /home/src/php4-fpm_production/scripts/phpize.in $(top_builddir)/config.status
	(CONFIG_FILES=$@ CONFIG_HEADERS= $(top_builddir)/config.status)

scripts/php-config: /home/src/php4-fpm_production/scripts/php-config.in $(top_builddir)/config.status
	(CONFIG_FILES=$@ CONFIG_HEADERS= $(top_builddir)/config.status)

#
# Zend
#

Zend/zend_language_scanner.lo: Zend/zend_language_parser.h
Zend/zend_ini_scanner.lo: Zend/zend_ini_parser.h

Zend/zend_language_scanner.c: /home/src/php4-fpm_production/Zend/zend_language_scanner.l
	$(LEX) -Pzend -S/home/src/php4-fpm_production/Zend/flex.skl -o$@ -i /home/src/php4-fpm_production/Zend/zend_language_scanner.l

Zend/zend_language_parser.h: Zend/zend_language_parser.c
Zend/zend_language_parser.c: /home/src/php4-fpm_production/Zend/zend_language_parser.y
	$(YACC) -p zend -v -d /home/src/php4-fpm_production/Zend/zend_language_parser.y -o $@

Zend/zend_ini_parser.h: Zend/zend_ini_parser.c
Zend/zend_ini_parser.c: /home/src/php4-fpm_production/Zend/zend_ini_parser.y
	$(YACC) -p ini_ -v -d /home/src/php4-fpm_production/Zend/zend_ini_parser.y -o $@

Zend/zend_ini_scanner.c: /home/src/php4-fpm_production/Zend/zend_ini_scanner.l
	$(LEX) -Pini_ -S/home/src/php4-fpm_production/Zend/flex.skl -o$@ -i /home/src/php4-fpm_production/Zend/zend_ini_scanner.l

Zend/zend_indent.lo Zend/zend_highlight.lo Zend/zend_compile.lo: Zend/zend_language_parser.h
sapi/cgi/fastcgi.lo: /home/src/php4-fpm_production/sapi/cgi/fastcgi.c
	$(CC)  -Isapi/cgi/ -I/home/src/php4-fpm_production/sapi/cgi/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fastcgi.c -o sapi/cgi/fastcgi.o  && echo > $@
sapi/cgi/cgi_main.lo: /home/src/php4-fpm_production/sapi/cgi/cgi_main.c
	$(CC)  -Isapi/cgi/ -I/home/src/php4-fpm_production/sapi/cgi/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/cgi_main.c -o sapi/cgi/cgi_main.o  && echo > $@
sapi/cgi/getopt.lo: /home/src/php4-fpm_production/sapi/cgi/getopt.c
	$(CC)  -Isapi/cgi/ -I/home/src/php4-fpm_production/sapi/cgi/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/getopt.c -o sapi/cgi/getopt.o  && echo > $@
sapi/cgi/fpm/fpm.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm.c -o sapi/cgi/fpm/fpm.o  && echo > $@
sapi/cgi/fpm/fpm_conf.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_conf.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_conf.c -o sapi/cgi/fpm/fpm_conf.o  && echo > $@
sapi/cgi/fpm/fpm_signals.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_signals.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_signals.c -o sapi/cgi/fpm/fpm_signals.o  && echo > $@
sapi/cgi/fpm/fpm_children.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_children.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_children.c -o sapi/cgi/fpm/fpm_children.o  && echo > $@
sapi/cgi/fpm/fpm_worker_pool.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_worker_pool.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_worker_pool.c -o sapi/cgi/fpm/fpm_worker_pool.o  && echo > $@
sapi/cgi/fpm/fpm_unix.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_unix.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_unix.c -o sapi/cgi/fpm/fpm_unix.o  && echo > $@
sapi/cgi/fpm/fpm_cleanup.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_cleanup.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_cleanup.c -o sapi/cgi/fpm/fpm_cleanup.o  && echo > $@
sapi/cgi/fpm/fpm_sockets.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_sockets.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_sockets.c -o sapi/cgi/fpm/fpm_sockets.o  && echo > $@
sapi/cgi/fpm/fpm_stdio.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_stdio.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_stdio.c -o sapi/cgi/fpm/fpm_stdio.o  && echo > $@
sapi/cgi/fpm/fpm_env.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_env.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_env.c -o sapi/cgi/fpm/fpm_env.o  && echo > $@
sapi/cgi/fpm/fpm_events.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_events.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_events.c -o sapi/cgi/fpm/fpm_events.o  && echo > $@
sapi/cgi/fpm/fpm_php.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_php.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_php.c -o sapi/cgi/fpm/fpm_php.o  && echo > $@
sapi/cgi/fpm/fpm_php_trace.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_php_trace.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_php_trace.c -o sapi/cgi/fpm/fpm_php_trace.o  && echo > $@
sapi/cgi/fpm/fpm_process_ctl.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_process_ctl.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_process_ctl.c -o sapi/cgi/fpm/fpm_process_ctl.o  && echo > $@
sapi/cgi/fpm/fpm_request.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_request.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_request.c -o sapi/cgi/fpm/fpm_request.o  && echo > $@
sapi/cgi/fpm/fpm_clock.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_clock.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_clock.c -o sapi/cgi/fpm/fpm_clock.o  && echo > $@
sapi/cgi/fpm/fpm_shm.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_shm.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_shm.c -o sapi/cgi/fpm/fpm_shm.o  && echo > $@
sapi/cgi/fpm/fpm_shm_slots.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_shm_slots.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_shm_slots.c -o sapi/cgi/fpm/fpm_shm_slots.o  && echo > $@
sapi/cgi/fpm/xml_config.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/xml_config.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/xml_config.c -o sapi/cgi/fpm/xml_config.o  && echo > $@
sapi/cgi/fpm/zlog.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/zlog.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/zlog.c -o sapi/cgi/fpm/zlog.o  && echo > $@
sapi/cgi/fpm/fpm_trace.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_trace.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_trace.c -o sapi/cgi/fpm/fpm_trace.o  && echo > $@
sapi/cgi/fpm/fpm_trace_ptrace.lo: /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_trace_ptrace.c
	$(CC) -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing -I/home/src/php4-fpm_production/libevent -I/usr/include/libxml2  -I/home/src/php4-fpm_production/sapi/cgi -Isapi/cgi/fpm/ -I/home/src/php4-fpm_production/sapi/cgi/fpm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cgi/fpm/fpm_trace_ptrace.c -o sapi/cgi/fpm/fpm_trace_ptrace.o  && echo > $@
ext/openssl/openssl.lo: /home/src/php4-fpm_production/ext/openssl/openssl.c
	$(CC)  -Iext/openssl/ -I/home/src/php4-fpm_production/ext/openssl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/openssl/openssl.c -o ext/openssl/openssl.o  && echo > $@
ext/pcre/php_pcre.lo: /home/src/php4-fpm_production/ext/pcre/php_pcre.c
	$(CC)  -Iext/pcre/ -I/home/src/php4-fpm_production/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/pcre/php_pcre.c -o ext/pcre/php_pcre.o  && echo > $@
ext/zlib/zlib.lo: /home/src/php4-fpm_production/ext/zlib/zlib.c
	$(CC)  -Iext/zlib/ -I/home/src/php4-fpm_production/ext/zlib/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/zlib/zlib.c -o ext/zlib/zlib.o  && echo > $@
ext/zlib/zlib_fopen_wrapper.lo: /home/src/php4-fpm_production/ext/zlib/zlib_fopen_wrapper.c
	$(CC)  -Iext/zlib/ -I/home/src/php4-fpm_production/ext/zlib/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/zlib/zlib_fopen_wrapper.c -o ext/zlib/zlib_fopen_wrapper.o  && echo > $@
ext/bcmath/bcmath.lo: /home/src/php4-fpm_production/ext/bcmath/bcmath.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/bcmath.c -o ext/bcmath/bcmath.o  && echo > $@
ext/bcmath/libbcmath/src/add.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/add.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/add.c -o ext/bcmath/libbcmath/src/add.o  && echo > $@
ext/bcmath/libbcmath/src/div.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/div.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/div.c -o ext/bcmath/libbcmath/src/div.o  && echo > $@
ext/bcmath/libbcmath/src/init.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/init.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/init.c -o ext/bcmath/libbcmath/src/init.o  && echo > $@
ext/bcmath/libbcmath/src/neg.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/neg.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/neg.c -o ext/bcmath/libbcmath/src/neg.o  && echo > $@
ext/bcmath/libbcmath/src/outofmem.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/outofmem.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/outofmem.c -o ext/bcmath/libbcmath/src/outofmem.o  && echo > $@
ext/bcmath/libbcmath/src/raisemod.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/raisemod.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/raisemod.c -o ext/bcmath/libbcmath/src/raisemod.o  && echo > $@
ext/bcmath/libbcmath/src/rt.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/rt.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/rt.c -o ext/bcmath/libbcmath/src/rt.o  && echo > $@
ext/bcmath/libbcmath/src/sub.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/sub.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/sub.c -o ext/bcmath/libbcmath/src/sub.o  && echo > $@
ext/bcmath/libbcmath/src/compare.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/compare.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/compare.c -o ext/bcmath/libbcmath/src/compare.o  && echo > $@
ext/bcmath/libbcmath/src/divmod.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/divmod.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/divmod.c -o ext/bcmath/libbcmath/src/divmod.o  && echo > $@
ext/bcmath/libbcmath/src/int2num.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/int2num.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/int2num.c -o ext/bcmath/libbcmath/src/int2num.o  && echo > $@
ext/bcmath/libbcmath/src/num2long.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/num2long.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/num2long.c -o ext/bcmath/libbcmath/src/num2long.o  && echo > $@
ext/bcmath/libbcmath/src/output.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/output.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/output.c -o ext/bcmath/libbcmath/src/output.o  && echo > $@
ext/bcmath/libbcmath/src/recmul.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/recmul.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/recmul.c -o ext/bcmath/libbcmath/src/recmul.o  && echo > $@
ext/bcmath/libbcmath/src/sqrt.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/sqrt.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/sqrt.c -o ext/bcmath/libbcmath/src/sqrt.o  && echo > $@
ext/bcmath/libbcmath/src/zero.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/zero.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/zero.c -o ext/bcmath/libbcmath/src/zero.o  && echo > $@
ext/bcmath/libbcmath/src/debug.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/debug.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/debug.c -o ext/bcmath/libbcmath/src/debug.o  && echo > $@
ext/bcmath/libbcmath/src/doaddsub.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/doaddsub.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/doaddsub.c -o ext/bcmath/libbcmath/src/doaddsub.o  && echo > $@
ext/bcmath/libbcmath/src/nearzero.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/nearzero.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/nearzero.c -o ext/bcmath/libbcmath/src/nearzero.o  && echo > $@
ext/bcmath/libbcmath/src/num2str.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/num2str.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/num2str.c -o ext/bcmath/libbcmath/src/num2str.o  && echo > $@
ext/bcmath/libbcmath/src/raise.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/raise.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/raise.c -o ext/bcmath/libbcmath/src/raise.o  && echo > $@
ext/bcmath/libbcmath/src/rmzero.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/rmzero.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/rmzero.c -o ext/bcmath/libbcmath/src/rmzero.o  && echo > $@
ext/bcmath/libbcmath/src/str2num.lo: /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/str2num.c
	$(CC) -I/home/src/php4-fpm_production/ext/bcmath/libbcmath/src -Iext/bcmath/ -I/home/src/php4-fpm_production/ext/bcmath/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bcmath/libbcmath/src/str2num.c -o ext/bcmath/libbcmath/src/str2num.o  && echo > $@
ext/bz2/bz2.lo: /home/src/php4-fpm_production/ext/bz2/bz2.c
	$(CC)  -Iext/bz2/ -I/home/src/php4-fpm_production/ext/bz2/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/bz2/bz2.c -o ext/bz2/bz2.o  && echo > $@
ext/calendar/calendar.lo: /home/src/php4-fpm_production/ext/calendar/calendar.c
	$(CC)  -Iext/calendar/ -I/home/src/php4-fpm_production/ext/calendar/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/calendar/calendar.c -o ext/calendar/calendar.o  && echo > $@
ext/calendar/dow.lo: /home/src/php4-fpm_production/ext/calendar/dow.c
	$(CC)  -Iext/calendar/ -I/home/src/php4-fpm_production/ext/calendar/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/calendar/dow.c -o ext/calendar/dow.o  && echo > $@
ext/calendar/french.lo: /home/src/php4-fpm_production/ext/calendar/french.c
	$(CC)  -Iext/calendar/ -I/home/src/php4-fpm_production/ext/calendar/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/calendar/french.c -o ext/calendar/french.o  && echo > $@
ext/calendar/gregor.lo: /home/src/php4-fpm_production/ext/calendar/gregor.c
	$(CC)  -Iext/calendar/ -I/home/src/php4-fpm_production/ext/calendar/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/calendar/gregor.c -o ext/calendar/gregor.o  && echo > $@
ext/calendar/jewish.lo: /home/src/php4-fpm_production/ext/calendar/jewish.c
	$(CC)  -Iext/calendar/ -I/home/src/php4-fpm_production/ext/calendar/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/calendar/jewish.c -o ext/calendar/jewish.o  && echo > $@
ext/calendar/julian.lo: /home/src/php4-fpm_production/ext/calendar/julian.c
	$(CC)  -Iext/calendar/ -I/home/src/php4-fpm_production/ext/calendar/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/calendar/julian.c -o ext/calendar/julian.o  && echo > $@
ext/calendar/easter.lo: /home/src/php4-fpm_production/ext/calendar/easter.c
	$(CC)  -Iext/calendar/ -I/home/src/php4-fpm_production/ext/calendar/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/calendar/easter.c -o ext/calendar/easter.o  && echo > $@
ext/calendar/cal_unix.lo: /home/src/php4-fpm_production/ext/calendar/cal_unix.c
	$(CC)  -Iext/calendar/ -I/home/src/php4-fpm_production/ext/calendar/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/calendar/cal_unix.c -o ext/calendar/cal_unix.o  && echo > $@
ext/ctype/ctype.lo: /home/src/php4-fpm_production/ext/ctype/ctype.c
	$(CC)  -Iext/ctype/ -I/home/src/php4-fpm_production/ext/ctype/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/ctype/ctype.c -o ext/ctype/ctype.o  && echo > $@
ext/curl/curl.lo: /home/src/php4-fpm_production/ext/curl/curl.c
	$(CC)  -Iext/curl/ -I/home/src/php4-fpm_production/ext/curl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/curl/curl.c -o ext/curl/curl.o  && echo > $@
ext/curl/curlstreams.lo: /home/src/php4-fpm_production/ext/curl/curlstreams.c
	$(CC)  -Iext/curl/ -I/home/src/php4-fpm_production/ext/curl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/curl/curlstreams.c -o ext/curl/curlstreams.o  && echo > $@
ext/dbx/dbx.lo: /home/src/php4-fpm_production/ext/dbx/dbx.c
	$(CC)  -Iext/dbx/ -I/home/src/php4-fpm_production/ext/dbx/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/dbx/dbx.c -o ext/dbx/dbx.o  && echo > $@
ext/dbx/dbx_mysql.lo: /home/src/php4-fpm_production/ext/dbx/dbx_mysql.c
	$(CC)  -Iext/dbx/ -I/home/src/php4-fpm_production/ext/dbx/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/dbx/dbx_mysql.c -o ext/dbx/dbx_mysql.o  && echo > $@
ext/dbx/dbx_odbc.lo: /home/src/php4-fpm_production/ext/dbx/dbx_odbc.c
	$(CC)  -Iext/dbx/ -I/home/src/php4-fpm_production/ext/dbx/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/dbx/dbx_odbc.c -o ext/dbx/dbx_odbc.o  && echo > $@
ext/dbx/dbx_pgsql.lo: /home/src/php4-fpm_production/ext/dbx/dbx_pgsql.c
	$(CC)  -Iext/dbx/ -I/home/src/php4-fpm_production/ext/dbx/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/dbx/dbx_pgsql.c -o ext/dbx/dbx_pgsql.o  && echo > $@
ext/dbx/dbx_mssql.lo: /home/src/php4-fpm_production/ext/dbx/dbx_mssql.c
	$(CC)  -Iext/dbx/ -I/home/src/php4-fpm_production/ext/dbx/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/dbx/dbx_mssql.c -o ext/dbx/dbx_mssql.o  && echo > $@
ext/dbx/dbx_fbsql.lo: /home/src/php4-fpm_production/ext/dbx/dbx_fbsql.c
	$(CC)  -Iext/dbx/ -I/home/src/php4-fpm_production/ext/dbx/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/dbx/dbx_fbsql.c -o ext/dbx/dbx_fbsql.o  && echo > $@
ext/dbx/dbx_oci8.lo: /home/src/php4-fpm_production/ext/dbx/dbx_oci8.c
	$(CC)  -Iext/dbx/ -I/home/src/php4-fpm_production/ext/dbx/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/dbx/dbx_oci8.c -o ext/dbx/dbx_oci8.o  && echo > $@
ext/dbx/dbx_sybasect.lo: /home/src/php4-fpm_production/ext/dbx/dbx_sybasect.c
	$(CC)  -Iext/dbx/ -I/home/src/php4-fpm_production/ext/dbx/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/dbx/dbx_sybasect.c -o ext/dbx/dbx_sybasect.o  && echo > $@
ext/dio/dio.lo: /home/src/php4-fpm_production/ext/dio/dio.c
	$(CC)  -Iext/dio/ -I/home/src/php4-fpm_production/ext/dio/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/dio/dio.c -o ext/dio/dio.o  && echo > $@
ext/exif/exif.lo: /home/src/php4-fpm_production/ext/exif/exif.c
	$(CC)  -Iext/exif/ -I/home/src/php4-fpm_production/ext/exif/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/exif/exif.c -o ext/exif/exif.o  && echo > $@
ext/ftp/php_ftp.lo: /home/src/php4-fpm_production/ext/ftp/php_ftp.c
	$(CC)  -Iext/ftp/ -I/home/src/php4-fpm_production/ext/ftp/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/ftp/php_ftp.c -o ext/ftp/php_ftp.o  && echo > $@
ext/ftp/ftp.lo: /home/src/php4-fpm_production/ext/ftp/ftp.c
	$(CC)  -Iext/ftp/ -I/home/src/php4-fpm_production/ext/ftp/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/ftp/ftp.c -o ext/ftp/ftp.o  && echo > $@
ext/gd/gd.lo: /home/src/php4-fpm_production/ext/gd/gd.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/gd.c -o ext/gd/gd.o  && echo > $@
ext/gd/gdttf.lo: /home/src/php4-fpm_production/ext/gd/gdttf.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/gdttf.c -o ext/gd/gdttf.o  && echo > $@
ext/gd/libgd/gd.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd.c -o ext/gd/libgd/gd.o  && echo > $@
ext/gd/libgd/gd_gd.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_gd.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_gd.c -o ext/gd/libgd/gd_gd.o  && echo > $@
ext/gd/libgd/gd_gd2.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_gd2.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_gd2.c -o ext/gd/libgd/gd_gd2.o  && echo > $@
ext/gd/libgd/gd_io.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_io.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_io.c -o ext/gd/libgd/gd_io.o  && echo > $@
ext/gd/libgd/gd_io_dp.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_io_dp.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_io_dp.c -o ext/gd/libgd/gd_io_dp.o  && echo > $@
ext/gd/libgd/gd_io_file.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_io_file.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_io_file.c -o ext/gd/libgd/gd_io_file.o  && echo > $@
ext/gd/libgd/gd_ss.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_ss.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_ss.c -o ext/gd/libgd/gd_ss.o  && echo > $@
ext/gd/libgd/gd_io_ss.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_io_ss.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_io_ss.c -o ext/gd/libgd/gd_io_ss.o  && echo > $@
ext/gd/libgd/gd_png.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_png.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_png.c -o ext/gd/libgd/gd_png.o  && echo > $@
ext/gd/libgd/gd_jpeg.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_jpeg.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_jpeg.c -o ext/gd/libgd/gd_jpeg.o  && echo > $@
ext/gd/libgd/gdxpm.lo: /home/src/php4-fpm_production/ext/gd/libgd/gdxpm.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gdxpm.c -o ext/gd/libgd/gdxpm.o  && echo > $@
ext/gd/libgd/gdfontt.lo: /home/src/php4-fpm_production/ext/gd/libgd/gdfontt.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gdfontt.c -o ext/gd/libgd/gdfontt.o  && echo > $@
ext/gd/libgd/gdfonts.lo: /home/src/php4-fpm_production/ext/gd/libgd/gdfonts.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gdfonts.c -o ext/gd/libgd/gdfonts.o  && echo > $@
ext/gd/libgd/gdfontmb.lo: /home/src/php4-fpm_production/ext/gd/libgd/gdfontmb.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gdfontmb.c -o ext/gd/libgd/gdfontmb.o  && echo > $@
ext/gd/libgd/gdfontl.lo: /home/src/php4-fpm_production/ext/gd/libgd/gdfontl.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gdfontl.c -o ext/gd/libgd/gdfontl.o  && echo > $@
ext/gd/libgd/gdfontg.lo: /home/src/php4-fpm_production/ext/gd/libgd/gdfontg.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gdfontg.c -o ext/gd/libgd/gdfontg.o  && echo > $@
ext/gd/libgd/gdtables.lo: /home/src/php4-fpm_production/ext/gd/libgd/gdtables.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gdtables.c -o ext/gd/libgd/gdtables.o  && echo > $@
ext/gd/libgd/gdft.lo: /home/src/php4-fpm_production/ext/gd/libgd/gdft.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gdft.c -o ext/gd/libgd/gdft.o  && echo > $@
ext/gd/libgd/gdcache.lo: /home/src/php4-fpm_production/ext/gd/libgd/gdcache.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gdcache.c -o ext/gd/libgd/gdcache.o  && echo > $@
ext/gd/libgd/gdkanji.lo: /home/src/php4-fpm_production/ext/gd/libgd/gdkanji.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gdkanji.c -o ext/gd/libgd/gdkanji.o  && echo > $@
ext/gd/libgd/wbmp.lo: /home/src/php4-fpm_production/ext/gd/libgd/wbmp.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/wbmp.c -o ext/gd/libgd/wbmp.o  && echo > $@
ext/gd/libgd/gd_wbmp.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_wbmp.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_wbmp.c -o ext/gd/libgd/gd_wbmp.o  && echo > $@
ext/gd/libgd/gdhelpers.lo: /home/src/php4-fpm_production/ext/gd/libgd/gdhelpers.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gdhelpers.c -o ext/gd/libgd/gdhelpers.o  && echo > $@
ext/gd/libgd/gd_topal.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_topal.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_topal.c -o ext/gd/libgd/gd_topal.o  && echo > $@
ext/gd/libgd/gd_gif_in.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_gif_in.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_gif_in.c -o ext/gd/libgd/gd_gif_in.o  && echo > $@
ext/gd/libgd/xbm.lo: /home/src/php4-fpm_production/ext/gd/libgd/xbm.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/xbm.c -o ext/gd/libgd/xbm.o  && echo > $@
ext/gd/libgd/gd_gif_out.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_gif_out.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_gif_out.c -o ext/gd/libgd/gd_gif_out.o  && echo > $@
ext/gd/libgd/gd_security.lo: /home/src/php4-fpm_production/ext/gd/libgd/gd_security.c
	$(CC) $(GDLIB_CFLAGS) -Iext/gd/ -I/home/src/php4-fpm_production/ext/gd/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/gd/libgd/gd_security.c -o ext/gd/libgd/gd_security.o  && echo > $@
ext/iconv/iconv.lo: /home/src/php4-fpm_production/ext/iconv/iconv.c
	$(CC) -I"/usr/include" -Iext/iconv/ -I/home/src/php4-fpm_production/ext/iconv/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/iconv/iconv.c -o ext/iconv/iconv.o  && echo > $@
ext/mbstring/mbstring.lo: /home/src/php4-fpm_production/ext/mbstring/mbstring.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/mbstring.c -o ext/mbstring/mbstring.o  && echo > $@
ext/mbstring/php_unicode.lo: /home/src/php4-fpm_production/ext/mbstring/php_unicode.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/php_unicode.c -o ext/mbstring/php_unicode.o  && echo > $@
ext/mbstring/php_mbregex.lo: /home/src/php4-fpm_production/ext/mbstring/php_mbregex.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/php_mbregex.c -o ext/mbstring/php_mbregex.o  && echo > $@
ext/mbstring/mbregex/mbregex.lo: /home/src/php4-fpm_production/ext/mbstring/mbregex/mbregex.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/mbregex/mbregex.c -o ext/mbstring/mbregex/mbregex.o  && echo > $@
ext/mbstring/libmbfl/filters/html_entities.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/html_entities.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/html_entities.c -o ext/mbstring/libmbfl/filters/html_entities.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_7bit.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_7bit.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_7bit.c -o ext/mbstring/libmbfl/filters/mbfilter_7bit.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_ascii.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_ascii.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_ascii.c -o ext/mbstring/libmbfl/filters/mbfilter_ascii.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_base64.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_base64.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_base64.c -o ext/mbstring/libmbfl/filters/mbfilter_base64.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_big5.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_big5.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_big5.c -o ext/mbstring/libmbfl/filters/mbfilter_big5.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_byte2.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_byte2.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_byte2.c -o ext/mbstring/libmbfl/filters/mbfilter_byte2.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_byte4.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_byte4.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_byte4.c -o ext/mbstring/libmbfl/filters/mbfilter_byte4.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_cp1251.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_cp1251.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_cp1251.c -o ext/mbstring/libmbfl/filters/mbfilter_cp1251.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_cp1252.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_cp1252.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_cp1252.c -o ext/mbstring/libmbfl/filters/mbfilter_cp1252.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_cp866.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_cp866.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_cp866.c -o ext/mbstring/libmbfl/filters/mbfilter_cp866.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_cp932.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_cp932.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_cp932.c -o ext/mbstring/libmbfl/filters/mbfilter_cp932.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_cp936.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_cp936.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_cp936.c -o ext/mbstring/libmbfl/filters/mbfilter_cp936.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_euc_cn.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_euc_cn.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_euc_cn.c -o ext/mbstring/libmbfl/filters/mbfilter_euc_cn.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_euc_jp.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_euc_jp.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_euc_jp.c -o ext/mbstring/libmbfl/filters/mbfilter_euc_jp.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_euc_jp_win.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_euc_jp_win.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_euc_jp_win.c -o ext/mbstring/libmbfl/filters/mbfilter_euc_jp_win.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_euc_kr.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_euc_kr.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_euc_kr.c -o ext/mbstring/libmbfl/filters/mbfilter_euc_kr.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_euc_tw.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_euc_tw.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_euc_tw.c -o ext/mbstring/libmbfl/filters/mbfilter_euc_tw.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_htmlent.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_htmlent.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_htmlent.c -o ext/mbstring/libmbfl/filters/mbfilter_htmlent.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_hz.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_hz.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_hz.c -o ext/mbstring/libmbfl/filters/mbfilter_hz.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso2022_kr.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso2022_kr.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso2022_kr.c -o ext/mbstring/libmbfl/filters/mbfilter_iso2022_kr.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_1.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_1.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_1.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_1.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_10.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_10.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_10.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_10.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_13.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_13.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_13.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_13.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_14.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_14.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_14.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_14.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_15.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_15.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_15.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_15.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_16.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_16.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_16.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_16.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_2.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_2.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_2.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_2.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_3.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_3.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_3.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_3.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_4.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_4.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_4.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_4.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_5.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_5.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_5.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_5.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_6.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_6.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_6.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_6.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_7.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_7.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_7.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_7.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_8.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_8.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_8.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_8.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_iso8859_9.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_9.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_iso8859_9.c -o ext/mbstring/libmbfl/filters/mbfilter_iso8859_9.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_jis.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_jis.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_jis.c -o ext/mbstring/libmbfl/filters/mbfilter_jis.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_koi8r.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_koi8r.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_koi8r.c -o ext/mbstring/libmbfl/filters/mbfilter_koi8r.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_qprint.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_qprint.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_qprint.c -o ext/mbstring/libmbfl/filters/mbfilter_qprint.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_armscii8.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_armscii8.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_armscii8.c -o ext/mbstring/libmbfl/filters/mbfilter_armscii8.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_sjis.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_sjis.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_sjis.c -o ext/mbstring/libmbfl/filters/mbfilter_sjis.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_ucs2.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_ucs2.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_ucs2.c -o ext/mbstring/libmbfl/filters/mbfilter_ucs2.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_ucs4.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_ucs4.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_ucs4.c -o ext/mbstring/libmbfl/filters/mbfilter_ucs4.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_uhc.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_uhc.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_uhc.c -o ext/mbstring/libmbfl/filters/mbfilter_uhc.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_utf16.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_utf16.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_utf16.c -o ext/mbstring/libmbfl/filters/mbfilter_utf16.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_utf32.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_utf32.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_utf32.c -o ext/mbstring/libmbfl/filters/mbfilter_utf32.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_utf7.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_utf7.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_utf7.c -o ext/mbstring/libmbfl/filters/mbfilter_utf7.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_utf7imap.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_utf7imap.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_utf7imap.c -o ext/mbstring/libmbfl/filters/mbfilter_utf7imap.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_utf8.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_utf8.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_utf8.c -o ext/mbstring/libmbfl/filters/mbfilter_utf8.o  && echo > $@
ext/mbstring/libmbfl/filters/mbfilter_uuencode.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_uuencode.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/filters/mbfilter_uuencode.c -o ext/mbstring/libmbfl/filters/mbfilter_uuencode.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfilter.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfilter.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfilter.c -o ext/mbstring/libmbfl/mbfl/mbfilter.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfilter_8bit.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfilter_8bit.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfilter_8bit.c -o ext/mbstring/libmbfl/mbfl/mbfilter_8bit.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfilter_pass.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfilter_pass.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfilter_pass.c -o ext/mbstring/libmbfl/mbfl/mbfilter_pass.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfilter_wchar.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfilter_wchar.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfilter_wchar.c -o ext/mbstring/libmbfl/mbfl/mbfilter_wchar.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfl_convert.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_convert.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_convert.c -o ext/mbstring/libmbfl/mbfl/mbfl_convert.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfl_encoding.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_encoding.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_encoding.c -o ext/mbstring/libmbfl/mbfl/mbfl_encoding.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfl_filter_output.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_filter_output.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_filter_output.c -o ext/mbstring/libmbfl/mbfl/mbfl_filter_output.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfl_ident.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_ident.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_ident.c -o ext/mbstring/libmbfl/mbfl/mbfl_ident.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfl_language.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_language.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_language.c -o ext/mbstring/libmbfl/mbfl/mbfl_language.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfl_memory_device.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_memory_device.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_memory_device.c -o ext/mbstring/libmbfl/mbfl/mbfl_memory_device.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfl_string.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_string.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_string.c -o ext/mbstring/libmbfl/mbfl/mbfl_string.o  && echo > $@
ext/mbstring/libmbfl/mbfl/mbfl_allocators.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_allocators.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/mbfl/mbfl_allocators.c -o ext/mbstring/libmbfl/mbfl/mbfl_allocators.o  && echo > $@
ext/mbstring/libmbfl/nls/nls_de.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_de.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_de.c -o ext/mbstring/libmbfl/nls/nls_de.o  && echo > $@
ext/mbstring/libmbfl/nls/nls_en.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_en.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_en.c -o ext/mbstring/libmbfl/nls/nls_en.o  && echo > $@
ext/mbstring/libmbfl/nls/nls_ja.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_ja.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_ja.c -o ext/mbstring/libmbfl/nls/nls_ja.o  && echo > $@
ext/mbstring/libmbfl/nls/nls_kr.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_kr.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_kr.c -o ext/mbstring/libmbfl/nls/nls_kr.o  && echo > $@
ext/mbstring/libmbfl/nls/nls_neutral.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_neutral.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_neutral.c -o ext/mbstring/libmbfl/nls/nls_neutral.o  && echo > $@
ext/mbstring/libmbfl/nls/nls_ru.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_ru.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_ru.c -o ext/mbstring/libmbfl/nls/nls_ru.o  && echo > $@
ext/mbstring/libmbfl/nls/nls_uni.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_uni.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_uni.c -o ext/mbstring/libmbfl/nls/nls_uni.o  && echo > $@
ext/mbstring/libmbfl/nls/nls_zh.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_zh.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_zh.c -o ext/mbstring/libmbfl/nls/nls_zh.o  && echo > $@
ext/mbstring/libmbfl/nls/nls_hy.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_hy.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_hy.c -o ext/mbstring/libmbfl/nls/nls_hy.o  && echo > $@
ext/mbstring/libmbfl/nls/nls_tr.lo: /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_tr.c
	$(CC)  -DHAVE_CONFIG_H -Iext/mbstring/ -I/home/src/php4-fpm_production/ext/mbstring/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mbstring/libmbfl/nls/nls_tr.c -o ext/mbstring/libmbfl/nls/nls_tr.o  && echo > $@
ext/mcrypt/mcrypt.lo: /home/src/php4-fpm_production/ext/mcrypt/mcrypt.c
	$(CC)  -Iext/mcrypt/ -I/home/src/php4-fpm_production/ext/mcrypt/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mcrypt/mcrypt.c -o ext/mcrypt/mcrypt.o  && echo > $@
ext/mhash/mhash.lo: /home/src/php4-fpm_production/ext/mhash/mhash.c
	$(CC)  -Iext/mhash/ -I/home/src/php4-fpm_production/ext/mhash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mhash/mhash.c -o ext/mhash/mhash.o  && echo > $@
ext/mime_magic/mime_magic.lo: /home/src/php4-fpm_production/ext/mime_magic/mime_magic.c
	$(CC)  -Iext/mime_magic/ -I/home/src/php4-fpm_production/ext/mime_magic/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/mime_magic/mime_magic.c -o ext/mime_magic/mime_magic.o  && echo > $@
ext/overload/overload.lo: /home/src/php4-fpm_production/ext/overload/overload.c
	$(CC)  -Iext/overload/ -I/home/src/php4-fpm_production/ext/overload/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/overload/overload.c -o ext/overload/overload.o  && echo > $@
ext/pcntl/pcntl.lo: /home/src/php4-fpm_production/ext/pcntl/pcntl.c
	$(CC)  -Iext/pcntl/ -I/home/src/php4-fpm_production/ext/pcntl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/pcntl/pcntl.c -o ext/pcntl/pcntl.o  && echo > $@
ext/pcntl/php_signal.lo: /home/src/php4-fpm_production/ext/pcntl/php_signal.c
	$(CC)  -Iext/pcntl/ -I/home/src/php4-fpm_production/ext/pcntl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/pcntl/php_signal.c -o ext/pcntl/php_signal.o  && echo > $@
ext/pdf/pdf.lo: /home/src/php4-fpm_production/ext/pdf/pdf.c
	$(CC)  -Iext/pdf/ -I/home/src/php4-fpm_production/ext/pdf/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/pdf/pdf.c -o ext/pdf/pdf.o  && echo > $@
ext/pgsql/pgsql.lo: /home/src/php4-fpm_production/ext/pgsql/pgsql.c
	$(CC)  -Iext/pgsql/ -I/home/src/php4-fpm_production/ext/pgsql/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/pgsql/pgsql.c -o ext/pgsql/pgsql.o  && echo > $@
ext/posix/posix.lo: /home/src/php4-fpm_production/ext/posix/posix.c
	$(CC)  -Iext/posix/ -I/home/src/php4-fpm_production/ext/posix/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/posix/posix.c -o ext/posix/posix.o  && echo > $@
ext/session/session.lo: /home/src/php4-fpm_production/ext/session/session.c
	$(CC)  -Iext/session/ -I/home/src/php4-fpm_production/ext/session/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/session/session.c -o ext/session/session.o  && echo > $@
ext/session/mod_files.lo: /home/src/php4-fpm_production/ext/session/mod_files.c
	$(CC)  -Iext/session/ -I/home/src/php4-fpm_production/ext/session/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/session/mod_files.c -o ext/session/mod_files.o  && echo > $@
ext/session/mod_mm.lo: /home/src/php4-fpm_production/ext/session/mod_mm.c
	$(CC)  -Iext/session/ -I/home/src/php4-fpm_production/ext/session/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/session/mod_mm.c -o ext/session/mod_mm.o  && echo > $@
ext/session/mod_user.lo: /home/src/php4-fpm_production/ext/session/mod_user.c
	$(CC)  -Iext/session/ -I/home/src/php4-fpm_production/ext/session/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/session/mod_user.c -o ext/session/mod_user.o  && echo > $@
ext/shmop/shmop.lo: /home/src/php4-fpm_production/ext/shmop/shmop.c
	$(CC)  -Iext/shmop/ -I/home/src/php4-fpm_production/ext/shmop/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/shmop/shmop.c -o ext/shmop/shmop.o  && echo > $@
ext/sockets/sockets.lo: /home/src/php4-fpm_production/ext/sockets/sockets.c
	$(CC)  -Iext/sockets/ -I/home/src/php4-fpm_production/ext/sockets/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/sockets/sockets.c -o ext/sockets/sockets.o  && echo > $@
regex/regcomp.lo: /home/src/php4-fpm_production/regex/regcomp.c
	$(CC)  -Iregex/ -I/home/src/php4-fpm_production/regex/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/regex/regcomp.c -o regex/regcomp.o  && echo > $@
regex/regexec.lo: /home/src/php4-fpm_production/regex/regexec.c
	$(CC)  -Iregex/ -I/home/src/php4-fpm_production/regex/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/regex/regexec.c -o regex/regexec.o  && echo > $@
regex/regerror.lo: /home/src/php4-fpm_production/regex/regerror.c
	$(CC)  -Iregex/ -I/home/src/php4-fpm_production/regex/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/regex/regerror.c -o regex/regerror.o  && echo > $@
regex/regfree.lo: /home/src/php4-fpm_production/regex/regfree.c
	$(CC)  -Iregex/ -I/home/src/php4-fpm_production/regex/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/regex/regfree.c -o regex/regfree.o  && echo > $@
ext/standard/array.lo: /home/src/php4-fpm_production/ext/standard/array.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/array.c -o ext/standard/array.o  && echo > $@
ext/standard/base64.lo: /home/src/php4-fpm_production/ext/standard/base64.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/base64.c -o ext/standard/base64.o  && echo > $@
ext/standard/basic_functions.lo: /home/src/php4-fpm_production/ext/standard/basic_functions.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/basic_functions.c -o ext/standard/basic_functions.o  && echo > $@
ext/standard/browscap.lo: /home/src/php4-fpm_production/ext/standard/browscap.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/browscap.c -o ext/standard/browscap.o  && echo > $@
ext/standard/crc32.lo: /home/src/php4-fpm_production/ext/standard/crc32.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/crc32.c -o ext/standard/crc32.o  && echo > $@
ext/standard/crypt.lo: /home/src/php4-fpm_production/ext/standard/crypt.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/crypt.c -o ext/standard/crypt.o  && echo > $@
ext/standard/cyr_convert.lo: /home/src/php4-fpm_production/ext/standard/cyr_convert.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/cyr_convert.c -o ext/standard/cyr_convert.o  && echo > $@
ext/standard/datetime.lo: /home/src/php4-fpm_production/ext/standard/datetime.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/datetime.c -o ext/standard/datetime.o  && echo > $@
ext/standard/dir.lo: /home/src/php4-fpm_production/ext/standard/dir.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/dir.c -o ext/standard/dir.o  && echo > $@
ext/standard/dl.lo: /home/src/php4-fpm_production/ext/standard/dl.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/dl.c -o ext/standard/dl.o  && echo > $@
ext/standard/dns.lo: /home/src/php4-fpm_production/ext/standard/dns.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/dns.c -o ext/standard/dns.o  && echo > $@
ext/standard/exec.lo: /home/src/php4-fpm_production/ext/standard/exec.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/exec.c -o ext/standard/exec.o  && echo > $@
ext/standard/file.lo: /home/src/php4-fpm_production/ext/standard/file.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/file.c -o ext/standard/file.o  && echo > $@
ext/standard/filestat.lo: /home/src/php4-fpm_production/ext/standard/filestat.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/filestat.c -o ext/standard/filestat.o  && echo > $@
ext/standard/flock_compat.lo: /home/src/php4-fpm_production/ext/standard/flock_compat.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/flock_compat.c -o ext/standard/flock_compat.o  && echo > $@
ext/standard/formatted_print.lo: /home/src/php4-fpm_production/ext/standard/formatted_print.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/formatted_print.c -o ext/standard/formatted_print.o  && echo > $@
ext/standard/fsock.lo: /home/src/php4-fpm_production/ext/standard/fsock.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/fsock.c -o ext/standard/fsock.o  && echo > $@
ext/standard/head.lo: /home/src/php4-fpm_production/ext/standard/head.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/head.c -o ext/standard/head.o  && echo > $@
ext/standard/html.lo: /home/src/php4-fpm_production/ext/standard/html.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/html.c -o ext/standard/html.o  && echo > $@
ext/standard/image.lo: /home/src/php4-fpm_production/ext/standard/image.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/image.c -o ext/standard/image.o  && echo > $@
ext/standard/info.lo: /home/src/php4-fpm_production/ext/standard/info.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/info.c -o ext/standard/info.o  && echo > $@
ext/standard/iptc.lo: /home/src/php4-fpm_production/ext/standard/iptc.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/iptc.c -o ext/standard/iptc.o  && echo > $@
ext/standard/lcg.lo: /home/src/php4-fpm_production/ext/standard/lcg.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/lcg.c -o ext/standard/lcg.o  && echo > $@
ext/standard/link.lo: /home/src/php4-fpm_production/ext/standard/link.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/link.c -o ext/standard/link.o  && echo > $@
ext/standard/mail.lo: /home/src/php4-fpm_production/ext/standard/mail.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/mail.c -o ext/standard/mail.o  && echo > $@
ext/standard/math.lo: /home/src/php4-fpm_production/ext/standard/math.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/math.c -o ext/standard/math.o  && echo > $@
ext/standard/md5.lo: /home/src/php4-fpm_production/ext/standard/md5.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/md5.c -o ext/standard/md5.o  && echo > $@
ext/standard/metaphone.lo: /home/src/php4-fpm_production/ext/standard/metaphone.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/metaphone.c -o ext/standard/metaphone.o  && echo > $@
ext/standard/microtime.lo: /home/src/php4-fpm_production/ext/standard/microtime.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/microtime.c -o ext/standard/microtime.o  && echo > $@
ext/standard/pack.lo: /home/src/php4-fpm_production/ext/standard/pack.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/pack.c -o ext/standard/pack.o  && echo > $@
ext/standard/pageinfo.lo: /home/src/php4-fpm_production/ext/standard/pageinfo.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/pageinfo.c -o ext/standard/pageinfo.o  && echo > $@
ext/standard/parsedate.lo: /home/src/php4-fpm_production/ext/standard/parsedate.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/parsedate.c -o ext/standard/parsedate.o  && echo > $@
ext/standard/quot_print.lo: /home/src/php4-fpm_production/ext/standard/quot_print.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/quot_print.c -o ext/standard/quot_print.o  && echo > $@
ext/standard/rand.lo: /home/src/php4-fpm_production/ext/standard/rand.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/rand.c -o ext/standard/rand.o  && echo > $@
ext/standard/reg.lo: /home/src/php4-fpm_production/ext/standard/reg.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/reg.c -o ext/standard/reg.o  && echo > $@
ext/standard/soundex.lo: /home/src/php4-fpm_production/ext/standard/soundex.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/soundex.c -o ext/standard/soundex.o  && echo > $@
ext/standard/string.lo: /home/src/php4-fpm_production/ext/standard/string.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/string.c -o ext/standard/string.o  && echo > $@
ext/standard/scanf.lo: /home/src/php4-fpm_production/ext/standard/scanf.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/scanf.c -o ext/standard/scanf.o  && echo > $@
ext/standard/syslog.lo: /home/src/php4-fpm_production/ext/standard/syslog.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/syslog.c -o ext/standard/syslog.o  && echo > $@
ext/standard/type.lo: /home/src/php4-fpm_production/ext/standard/type.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/type.c -o ext/standard/type.o  && echo > $@
ext/standard/uniqid.lo: /home/src/php4-fpm_production/ext/standard/uniqid.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/uniqid.c -o ext/standard/uniqid.o  && echo > $@
ext/standard/url.lo: /home/src/php4-fpm_production/ext/standard/url.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/url.c -o ext/standard/url.o  && echo > $@
ext/standard/url_scanner.lo: /home/src/php4-fpm_production/ext/standard/url_scanner.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/url_scanner.c -o ext/standard/url_scanner.o  && echo > $@
ext/standard/var.lo: /home/src/php4-fpm_production/ext/standard/var.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/var.c -o ext/standard/var.o  && echo > $@
ext/standard/versioning.lo: /home/src/php4-fpm_production/ext/standard/versioning.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/versioning.c -o ext/standard/versioning.o  && echo > $@
ext/standard/assert.lo: /home/src/php4-fpm_production/ext/standard/assert.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/assert.c -o ext/standard/assert.o  && echo > $@
ext/standard/strnatcmp.lo: /home/src/php4-fpm_production/ext/standard/strnatcmp.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/strnatcmp.c -o ext/standard/strnatcmp.o  && echo > $@
ext/standard/levenshtein.lo: /home/src/php4-fpm_production/ext/standard/levenshtein.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/levenshtein.c -o ext/standard/levenshtein.o  && echo > $@
ext/standard/incomplete_class.lo: /home/src/php4-fpm_production/ext/standard/incomplete_class.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/incomplete_class.c -o ext/standard/incomplete_class.o  && echo > $@
ext/standard/url_scanner_ex.lo: /home/src/php4-fpm_production/ext/standard/url_scanner_ex.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/url_scanner_ex.c -o ext/standard/url_scanner_ex.o  && echo > $@
ext/standard/ftp_fopen_wrapper.lo: /home/src/php4-fpm_production/ext/standard/ftp_fopen_wrapper.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/ftp_fopen_wrapper.c -o ext/standard/ftp_fopen_wrapper.o  && echo > $@
ext/standard/http_fopen_wrapper.lo: /home/src/php4-fpm_production/ext/standard/http_fopen_wrapper.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/http_fopen_wrapper.c -o ext/standard/http_fopen_wrapper.o  && echo > $@
ext/standard/php_fopen_wrapper.lo: /home/src/php4-fpm_production/ext/standard/php_fopen_wrapper.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/php_fopen_wrapper.c -o ext/standard/php_fopen_wrapper.o  && echo > $@
ext/standard/credits.lo: /home/src/php4-fpm_production/ext/standard/credits.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/credits.c -o ext/standard/credits.o  && echo > $@
ext/standard/css.lo: /home/src/php4-fpm_production/ext/standard/css.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/css.c -o ext/standard/css.o  && echo > $@
ext/standard/var_unserializer.lo: /home/src/php4-fpm_production/ext/standard/var_unserializer.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/var_unserializer.c -o ext/standard/var_unserializer.o  && echo > $@
ext/standard/ftok.lo: /home/src/php4-fpm_production/ext/standard/ftok.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/ftok.c -o ext/standard/ftok.o  && echo > $@
ext/standard/aggregation.lo: /home/src/php4-fpm_production/ext/standard/aggregation.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/aggregation.c -o ext/standard/aggregation.o  && echo > $@
ext/standard/sha1.lo: /home/src/php4-fpm_production/ext/standard/sha1.c
	$(CC)  -Iext/standard/ -I/home/src/php4-fpm_production/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/standard/sha1.c -o ext/standard/sha1.o  && echo > $@
ext/sysvmsg/sysvmsg.lo: /home/src/php4-fpm_production/ext/sysvmsg/sysvmsg.c
	$(CC)  -Iext/sysvmsg/ -I/home/src/php4-fpm_production/ext/sysvmsg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/sysvmsg/sysvmsg.c -o ext/sysvmsg/sysvmsg.o  && echo > $@
ext/sysvsem/sysvsem.lo: /home/src/php4-fpm_production/ext/sysvsem/sysvsem.c
	$(CC)  -Iext/sysvsem/ -I/home/src/php4-fpm_production/ext/sysvsem/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/sysvsem/sysvsem.c -o ext/sysvsem/sysvsem.o  && echo > $@
ext/sysvshm/sysvshm.lo: /home/src/php4-fpm_production/ext/sysvshm/sysvshm.c
	$(CC)  -Iext/sysvshm/ -I/home/src/php4-fpm_production/ext/sysvshm/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/sysvshm/sysvshm.c -o ext/sysvshm/sysvshm.o  && echo > $@
ext/tokenizer/tokenizer.lo: /home/src/php4-fpm_production/ext/tokenizer/tokenizer.c
	$(CC)  -Iext/tokenizer/ -I/home/src/php4-fpm_production/ext/tokenizer/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/tokenizer/tokenizer.c -o ext/tokenizer/tokenizer.o  && echo > $@
ext/wddx/wddx.lo: /home/src/php4-fpm_production/ext/wddx/wddx.c
	$(CC)  -Iext/wddx/ -I/home/src/php4-fpm_production/ext/wddx/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/wddx/wddx.c -o ext/wddx/wddx.o  && echo > $@
ext/xml/xml.lo: /home/src/php4-fpm_production/ext/xml/xml.c
	$(CC) -DBYTEORDER=1234 -Iext/xml/ -I/home/src/php4-fpm_production/ext/xml/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xml/xml.c -o ext/xml/xml.o  && echo > $@
ext/xml/expat/xmlparse.lo: /home/src/php4-fpm_production/ext/xml/expat/xmlparse.c
	$(CC) -DBYTEORDER=1234 -Iext/xml/ -I/home/src/php4-fpm_production/ext/xml/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xml/expat/xmlparse.c -o ext/xml/expat/xmlparse.o  && echo > $@
ext/xml/expat/xmlrole.lo: /home/src/php4-fpm_production/ext/xml/expat/xmlrole.c
	$(CC) -DBYTEORDER=1234 -Iext/xml/ -I/home/src/php4-fpm_production/ext/xml/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xml/expat/xmlrole.c -o ext/xml/expat/xmlrole.o  && echo > $@
ext/xml/expat/xmltok.lo: /home/src/php4-fpm_production/ext/xml/expat/xmltok.c
	$(CC) -DBYTEORDER=1234 -Iext/xml/ -I/home/src/php4-fpm_production/ext/xml/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xml/expat/xmltok.c -o ext/xml/expat/xmltok.o  && echo > $@
ext/xmlrpc/xmlrpc-epi-php.lo: /home/src/php4-fpm_production/ext/xmlrpc/xmlrpc-epi-php.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/xmlrpc-epi-php.c -o ext/xmlrpc/xmlrpc-epi-php.o  && echo > $@
ext/xmlrpc/libxmlrpc/base64.lo: /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/base64.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/base64.c -o ext/xmlrpc/libxmlrpc/base64.o  && echo > $@
ext/xmlrpc/libxmlrpc/simplestring.lo: /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/simplestring.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/simplestring.c -o ext/xmlrpc/libxmlrpc/simplestring.o  && echo > $@
ext/xmlrpc/libxmlrpc/xml_to_dandarpc.lo: /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xml_to_dandarpc.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xml_to_dandarpc.c -o ext/xmlrpc/libxmlrpc/xml_to_dandarpc.o  && echo > $@
ext/xmlrpc/libxmlrpc/xmlrpc_introspection.lo: /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xmlrpc_introspection.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xmlrpc_introspection.c -o ext/xmlrpc/libxmlrpc/xmlrpc_introspection.o  && echo > $@
ext/xmlrpc/libxmlrpc/encodings.lo: /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/encodings.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/encodings.c -o ext/xmlrpc/libxmlrpc/encodings.o  && echo > $@
ext/xmlrpc/libxmlrpc/system_methods.lo: /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/system_methods.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/system_methods.c -o ext/xmlrpc/libxmlrpc/system_methods.o  && echo > $@
ext/xmlrpc/libxmlrpc/xml_to_xmlrpc.lo: /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xml_to_xmlrpc.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xml_to_xmlrpc.c -o ext/xmlrpc/libxmlrpc/xml_to_xmlrpc.o  && echo > $@
ext/xmlrpc/libxmlrpc/queue.lo: /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/queue.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/queue.c -o ext/xmlrpc/libxmlrpc/queue.o  && echo > $@
ext/xmlrpc/libxmlrpc/xml_element.lo: /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xml_element.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xml_element.c -o ext/xmlrpc/libxmlrpc/xml_element.o  && echo > $@
ext/xmlrpc/libxmlrpc/xmlrpc.lo: /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xmlrpc.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xmlrpc.c -o ext/xmlrpc/libxmlrpc/xmlrpc.o  && echo > $@
ext/xmlrpc/libxmlrpc/xml_to_soap.lo: /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xml_to_soap.c
	$(CC) -I/home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc -DVERSION=0.50 -Iext/xmlrpc/ -I/home/src/php4-fpm_production/ext/xmlrpc/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/xmlrpc/libxmlrpc/xml_to_soap.c -o ext/xmlrpc/libxmlrpc/xml_to_soap.o  && echo > $@
ext/yp/yp.lo: /home/src/php4-fpm_production/ext/yp/yp.c
	$(CC)  -Iext/yp/ -I/home/src/php4-fpm_production/ext/yp/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/ext/yp/yp.c -o ext/yp/yp.o  && echo > $@
sapi/cli/php_cli.lo: /home/src/php4-fpm_production/sapi/cli/php_cli.c
	$(CC)  -Isapi/cli/ -I/home/src/php4-fpm_production/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cli/php_cli.c -o sapi/cli/php_cli.o  && echo > $@
sapi/cli/getopt.lo: /home/src/php4-fpm_production/sapi/cli/getopt.c
	$(CC)  -Isapi/cli/ -I/home/src/php4-fpm_production/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/sapi/cli/getopt.c -o sapi/cli/getopt.o  && echo > $@
TSRM/TSRM.lo: /home/src/php4-fpm_production/TSRM/TSRM.c
	$(CC)  -ITSRM/ -I/home/src/php4-fpm_production/TSRM/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/TSRM/TSRM.c -o TSRM/TSRM.o  && echo > $@
TSRM/tsrm_strtok_r.lo: /home/src/php4-fpm_production/TSRM/tsrm_strtok_r.c
	$(CC)  -ITSRM/ -I/home/src/php4-fpm_production/TSRM/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/TSRM/tsrm_strtok_r.c -o TSRM/tsrm_strtok_r.o  && echo > $@
TSRM/tsrm_virtual_cwd.lo: /home/src/php4-fpm_production/TSRM/tsrm_virtual_cwd.c
	$(CC)  -ITSRM/ -I/home/src/php4-fpm_production/TSRM/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/TSRM/tsrm_virtual_cwd.c -o TSRM/tsrm_virtual_cwd.o  && echo > $@
main/main.lo: /home/src/php4-fpm_production/main/main.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/main.c -o main/main.o  && echo > $@
main/snprintf.lo: /home/src/php4-fpm_production/main/snprintf.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/snprintf.c -o main/snprintf.o  && echo > $@
main/spprintf.lo: /home/src/php4-fpm_production/main/spprintf.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/spprintf.c -o main/spprintf.o  && echo > $@
main/php_sprintf.lo: /home/src/php4-fpm_production/main/php_sprintf.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/php_sprintf.c -o main/php_sprintf.o  && echo > $@
main/safe_mode.lo: /home/src/php4-fpm_production/main/safe_mode.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/safe_mode.c -o main/safe_mode.o  && echo > $@
main/fopen_wrappers.lo: /home/src/php4-fpm_production/main/fopen_wrappers.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/fopen_wrappers.c -o main/fopen_wrappers.o  && echo > $@
main/alloca.lo: /home/src/php4-fpm_production/main/alloca.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/alloca.c -o main/alloca.o  && echo > $@
main/php_scandir.lo: /home/src/php4-fpm_production/main/php_scandir.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/php_scandir.c -o main/php_scandir.o  && echo > $@
main/php_ini.lo: /home/src/php4-fpm_production/main/php_ini.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/php_ini.c -o main/php_ini.o  && echo > $@
main/SAPI.lo: /home/src/php4-fpm_production/main/SAPI.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/SAPI.c -o main/SAPI.o  && echo > $@
main/rfc1867.lo: /home/src/php4-fpm_production/main/rfc1867.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/rfc1867.c -o main/rfc1867.o  && echo > $@
main/php_content_types.lo: /home/src/php4-fpm_production/main/php_content_types.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/php_content_types.c -o main/php_content_types.o  && echo > $@
main/strlcpy.lo: /home/src/php4-fpm_production/main/strlcpy.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/strlcpy.c -o main/strlcpy.o  && echo > $@
main/strlcat.lo: /home/src/php4-fpm_production/main/strlcat.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/strlcat.c -o main/strlcat.o  && echo > $@
main/mergesort.lo: /home/src/php4-fpm_production/main/mergesort.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/mergesort.c -o main/mergesort.o  && echo > $@
main/reentrancy.lo: /home/src/php4-fpm_production/main/reentrancy.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/reentrancy.c -o main/reentrancy.o  && echo > $@
main/php_variables.lo: /home/src/php4-fpm_production/main/php_variables.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/php_variables.c -o main/php_variables.o  && echo > $@
main/php_ticks.lo: /home/src/php4-fpm_production/main/php_ticks.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/php_ticks.c -o main/php_ticks.o  && echo > $@
main/streams.lo: /home/src/php4-fpm_production/main/streams.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/streams.c -o main/streams.o  && echo > $@
main/network.lo: /home/src/php4-fpm_production/main/network.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/network.c -o main/network.o  && echo > $@
main/php_open_temporary_file.lo: /home/src/php4-fpm_production/main/php_open_temporary_file.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/php_open_temporary_file.c -o main/php_open_temporary_file.o  && echo > $@
main/php_logos.lo: /home/src/php4-fpm_production/main/php_logos.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/php_logos.c -o main/php_logos.o  && echo > $@
main/output.lo: /home/src/php4-fpm_production/main/output.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/output.c -o main/output.o  && echo > $@
main/memory_streams.lo: /home/src/php4-fpm_production/main/memory_streams.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/memory_streams.c -o main/memory_streams.o  && echo > $@
main/user_streams.lo: /home/src/php4-fpm_production/main/user_streams.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/user_streams.c -o main/user_streams.o  && echo > $@
main/suhosin_patch.lo: /home/src/php4-fpm_production/main/suhosin_patch.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/main/suhosin_patch.c -o main/suhosin_patch.o  && echo > $@
main/internal_functions.lo: main/internal_functions.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c main/internal_functions.c -o main/internal_functions.o  && echo > $@
main/internal_functions_cli.lo: main/internal_functions_cli.c
	$(CC)  -Imain/ -I/home/src/php4-fpm_production/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c main/internal_functions_cli.c -o main/internal_functions_cli.o  && echo > $@
Zend/zend_language_parser.lo: Zend/zend_language_parser.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c Zend/zend_language_parser.c -o Zend/zend_language_parser.o  && echo > $@
Zend/zend_language_scanner.lo: Zend/zend_language_scanner.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c Zend/zend_language_scanner.c -o Zend/zend_language_scanner.o  && echo > $@
Zend/zend_ini_parser.lo: Zend/zend_ini_parser.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c Zend/zend_ini_parser.c -o Zend/zend_ini_parser.o  && echo > $@
Zend/zend_ini_scanner.lo: Zend/zend_ini_scanner.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c Zend/zend_ini_scanner.c -o Zend/zend_ini_scanner.o  && echo > $@
Zend/zend_alloc.lo: /home/src/php4-fpm_production/Zend/zend_alloc.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_alloc.c -o Zend/zend_alloc.o  && echo > $@
Zend/zend_compile.lo: /home/src/php4-fpm_production/Zend/zend_compile.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_compile.c -o Zend/zend_compile.o  && echo > $@
Zend/zend_constants.lo: /home/src/php4-fpm_production/Zend/zend_constants.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_constants.c -o Zend/zend_constants.o  && echo > $@
Zend/zend_dynamic_array.lo: /home/src/php4-fpm_production/Zend/zend_dynamic_array.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_dynamic_array.c -o Zend/zend_dynamic_array.o  && echo > $@
Zend/zend_execute_API.lo: /home/src/php4-fpm_production/Zend/zend_execute_API.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_execute_API.c -o Zend/zend_execute_API.o  && echo > $@
Zend/zend_highlight.lo: /home/src/php4-fpm_production/Zend/zend_highlight.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_highlight.c -o Zend/zend_highlight.o  && echo > $@
Zend/zend_llist.lo: /home/src/php4-fpm_production/Zend/zend_llist.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_llist.c -o Zend/zend_llist.o  && echo > $@
Zend/zend_opcode.lo: /home/src/php4-fpm_production/Zend/zend_opcode.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_opcode.c -o Zend/zend_opcode.o  && echo > $@
Zend/zend_operators.lo: /home/src/php4-fpm_production/Zend/zend_operators.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_operators.c -o Zend/zend_operators.o  && echo > $@
Zend/zend_ptr_stack.lo: /home/src/php4-fpm_production/Zend/zend_ptr_stack.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_ptr_stack.c -o Zend/zend_ptr_stack.o  && echo > $@
Zend/zend_stack.lo: /home/src/php4-fpm_production/Zend/zend_stack.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_stack.c -o Zend/zend_stack.o  && echo > $@
Zend/zend_variables.lo: /home/src/php4-fpm_production/Zend/zend_variables.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_variables.c -o Zend/zend_variables.o  && echo > $@
Zend/zend.lo: /home/src/php4-fpm_production/Zend/zend.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend.c -o Zend/zend.o  && echo > $@
Zend/zend_API.lo: /home/src/php4-fpm_production/Zend/zend_API.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_API.c -o Zend/zend_API.o  && echo > $@
Zend/zend_extensions.lo: /home/src/php4-fpm_production/Zend/zend_extensions.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_extensions.c -o Zend/zend_extensions.o  && echo > $@
Zend/zend_hash.lo: /home/src/php4-fpm_production/Zend/zend_hash.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_hash.c -o Zend/zend_hash.o  && echo > $@
Zend/zend_list.lo: /home/src/php4-fpm_production/Zend/zend_list.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_list.c -o Zend/zend_list.o  && echo > $@
Zend/zend_indent.lo: /home/src/php4-fpm_production/Zend/zend_indent.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_indent.c -o Zend/zend_indent.o  && echo > $@
Zend/zend_builtin_functions.lo: /home/src/php4-fpm_production/Zend/zend_builtin_functions.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_builtin_functions.c -o Zend/zend_builtin_functions.o  && echo > $@
Zend/zend_sprintf.lo: /home/src/php4-fpm_production/Zend/zend_sprintf.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_sprintf.c -o Zend/zend_sprintf.o  && echo > $@
Zend/zend_ini.lo: /home/src/php4-fpm_production/Zend/zend_ini.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_ini.c -o Zend/zend_ini.o  && echo > $@
Zend/zend_qsort.lo: /home/src/php4-fpm_production/Zend/zend_qsort.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_qsort.c -o Zend/zend_qsort.o  && echo > $@
Zend/zend_multibyte.lo: /home/src/php4-fpm_production/Zend/zend_multibyte.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_multibyte.c -o Zend/zend_multibyte.o  && echo > $@
Zend/zend_strtod.lo: /home/src/php4-fpm_production/Zend/zend_strtod.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_strtod.c -o Zend/zend_strtod.o  && echo > $@
Zend/zend_canary.lo: /home/src/php4-fpm_production/Zend/zend_canary.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_canary.c -o Zend/zend_canary.o  && echo > $@
Zend/zend_execute.lo: /home/src/php4-fpm_production/Zend/zend_execute.c
	$(CC)  -IZend/ -I/home/src/php4-fpm_production/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /home/src/php4-fpm_production/Zend/zend_execute.c -o Zend/zend_execute.o  && echo > $@
