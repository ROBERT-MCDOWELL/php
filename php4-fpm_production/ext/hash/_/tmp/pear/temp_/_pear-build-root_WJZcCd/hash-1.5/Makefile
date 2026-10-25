srcdir = /usr/local/php4/lib/php/hash-1.5
builddir = /usr/local/php4/lib/php/hash-1.5/"/tmp/pear/temp"/"pear-build-root"WJZcCd/hash-1.5
top_srcdir = /usr/local/php4/lib/php/hash-1.5
top_builddir = /usr/local/php4/lib/php/hash-1.5/"/tmp/pear/temp"/"pear-build-root"WJZcCd/hash-1.5
EGREP = /usr/bin/grep -E
SED = /usr/bin/sed
CONFIGURE_COMMAND = '/usr/local/php4/lib/php/hash-1.5/configure'
SHLIB_SUFFIX_NAME = so
shared_objects_hash = hash.lo hash_md.lo hash_sha.lo hash_ripemd.lo hash_haval.lo hash_tiger.lo hash_gost.lo hash_snefru.lo hash_whirlpool.lo hash_adler32.lo hash_crc32.lo
PHP_MODULES = $(phplibdir)/hash.la
all_targets = $(PHP_MODULES)
install_targets = install-modules
prefix = /usr/local/php4
exec_prefix = $(prefix)
libdir = ${exec_prefix}/lib
prefix = /usr/local/php4
phplibdir = /usr/local/php4/lib/php/hash-1.5/"/tmp/pear/temp"/"pear-build-root"WJZcCd/hash-1.5/modules
PHP_COMPILE =
CC = gcc
CFLAGS = -g -O2
CFLAGS_CLEAN = $(CFLAGS)
CPP = gcc -E
CPPFLAGS = -DHAVE_CONFIG_H
CXX =
CXXFLAGS =
CXXFLAGS_CLEAN = $(CXXFLAGS)
EXTENSION_DIR = /usr/local/php4/lib/php/extensions/no-debug-zts-20020429
EXTRA_LDFLAGS =
EXTRA_LIBS = -lresolv
INCLUDES = -I/usr/local/php4/include/php -I/usr/local/php4/include/php/main -I/usr/local/php4/include/php/TSRM -I/usr/local/php4/include/php/Zend
LEX =
LEX_OUTPUT_ROOT =
LFLAGS =
LDFLAGS =
SHARED_LIBTOOL =
LIBTOOL = $(SHELL) $(top_builddir)/libtool
SHELL = /bin/sh
AWK = gawk
RE2C = exit 0;
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
hash.lo: /usr/local/php4/lib/php/hash-1.5/hash.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/usr/local/php4/lib/php/hash-1.5 $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /usr/local/php4/lib/php/hash-1.5/hash.c -o hash.lo 
hash_md.lo: /usr/local/php4/lib/php/hash-1.5/hash_md.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/usr/local/php4/lib/php/hash-1.5 $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /usr/local/php4/lib/php/hash-1.5/hash_md.c -o hash_md.lo 
hash_sha.lo: /usr/local/php4/lib/php/hash-1.5/hash_sha.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/usr/local/php4/lib/php/hash-1.5 $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /usr/local/php4/lib/php/hash-1.5/hash_sha.c -o hash_sha.lo 
hash_ripemd.lo: /usr/local/php4/lib/php/hash-1.5/hash_ripemd.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/usr/local/php4/lib/php/hash-1.5 $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /usr/local/php4/lib/php/hash-1.5/hash_ripemd.c -o hash_ripemd.lo 
hash_haval.lo: /usr/local/php4/lib/php/hash-1.5/hash_haval.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/usr/local/php4/lib/php/hash-1.5 $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /usr/local/php4/lib/php/hash-1.5/hash_haval.c -o hash_haval.lo 
hash_tiger.lo: /usr/local/php4/lib/php/hash-1.5/hash_tiger.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/usr/local/php4/lib/php/hash-1.5 $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /usr/local/php4/lib/php/hash-1.5/hash_tiger.c -o hash_tiger.lo 
hash_gost.lo: /usr/local/php4/lib/php/hash-1.5/hash_gost.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/usr/local/php4/lib/php/hash-1.5 $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /usr/local/php4/lib/php/hash-1.5/hash_gost.c -o hash_gost.lo 
hash_snefru.lo: /usr/local/php4/lib/php/hash-1.5/hash_snefru.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/usr/local/php4/lib/php/hash-1.5 $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /usr/local/php4/lib/php/hash-1.5/hash_snefru.c -o hash_snefru.lo 
hash_whirlpool.lo: /usr/local/php4/lib/php/hash-1.5/hash_whirlpool.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/usr/local/php4/lib/php/hash-1.5 $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /usr/local/php4/lib/php/hash-1.5/hash_whirlpool.c -o hash_whirlpool.lo 
hash_adler32.lo: /usr/local/php4/lib/php/hash-1.5/hash_adler32.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/usr/local/php4/lib/php/hash-1.5 $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /usr/local/php4/lib/php/hash-1.5/hash_adler32.c -o hash_adler32.lo 
hash_crc32.lo: /usr/local/php4/lib/php/hash-1.5/hash_crc32.c
	$(LIBTOOL) --mode=compile $(CC)  -I. -I/usr/local/php4/lib/php/hash-1.5 $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /usr/local/php4/lib/php/hash-1.5/hash_crc32.c -o hash_crc32.lo 
$(phplibdir)/hash.la: ./hash.la
	$(LIBTOOL) --mode=install cp ./hash.la $(phplibdir)

./hash.la: $(shared_objects_hash) $(HASH_SHARED_DEPENDENCIES)
	$(LIBTOOL) --mode=link $(CC) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(LDFLAGS) -o $@ -export-dynamic -avoid-version -prefer-pic -module -rpath $(phplibdir) $(EXTRA_LDFLAGS) $(shared_objects_hash) $(HASH_SHARED_LIBADD)

