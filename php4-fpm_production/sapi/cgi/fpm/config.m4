
FPM_VERSION="0.5.10"

PHP_ARG_WITH(fpm-conf, for php-fpm config file path,
[  --with-fpm-conf=PATH        Set the path for php-fpm configuration file [PREFIX/etc/php-fpm.conf]], \$prefix/etc/php-fpm.conf, no)

PHP_ARG_WITH(fpm-log, for php-fpm log file path,
[  --with-fpm-log=PATH         Set the path for php-fpm log file [PREFIX/logs/php-fpm.log]], \$prefix/logs/php-fpm.log, no)

PHP_ARG_WITH(fpm-pid, for php-fpm pid file path,
[  --with-fpm-pid=PATH         Set the path for php-fpm pid file [PREFIX/logs/php-fpm.pid]], \$prefix/logs/php-fpm.pid, no)

FPM_SOURCES="fpm.c \
	fpm_conf.c \
	fpm_signals.c \
	fpm_children.c \
	fpm_worker_pool.c \
	fpm_unix.c \
	fpm_cleanup.c \
	fpm_sockets.c \
	fpm_stdio.c \
	fpm_env.c \
	fpm_events.c \
	fpm_php.c \
	fpm_php_trace.c \
	fpm_process_ctl.c \
	fpm_request.c \
	fpm_clock.c \
	fpm_shm.c \
	fpm_shm_slots.c \
	xml_config.c \
	zlog.c"

dnl AC_FPM_LIBEVENT
AC_FPM_LIBXML
AC_FPM_PRCTL
AC_FPM_CLOCK
AC_FPM_TRACE
dnl AC_FPM_JUDY

LIBEVENT_CFLAGS="-I$abs_srcdir/libevent"
LIBEVENT_LIBS="$abs_builddir/libevent/libevent.a"

SAPI_EXTRA_DEPS="$LIBEVENT_LIBS"

FPM_CFLAGS="$LIBEVENT_CFLAGS $LIBXML_CFLAGS $JUDY_CFLAGS"

dnl FPM_CFLAGS="$FPM_CFLAGS -DJUDYERROR_NOTEST" # for Judy
FPM_CFLAGS="$FPM_CFLAGS -I$abs_srcdir/sapi/cgi" # for fastcgi.h

if test "$ICC" = "yes" ; then
	FPM_ADD_CFLAGS="-Wall -wd279,310,869,810,981"
elif test "$GCC" = "yes" ; then
	FPM_ADD_CFLAGS="-Wall -Wpointer-arith -Wno-unused-parameter -Wunused-variable -Wunused-value -fno-strict-aliasing"
fi

if test -n "$FPM_WERROR" ; then
	FPM_ADD_CFLAGS="$FPM_ADD_CFLAGS -Werror"
fi

FPM_CFLAGS="$FPM_ADD_CFLAGS $FPM_CFLAGS"

PHP_ADD_MAKEFILE_FRAGMENT($abs_srcdir/sapi/cgi/fpm/Makefile.frag)

PHP_ADD_SOURCES(sapi/cgi/fpm, $FPM_SOURCES, $FPM_CFLAGS, sapi)

PHP_ADD_BUILD_DIR(sapi/cgi/fpm)

install_fpm="install-fpm"

PHP_CONFIGURE_PART(Configuring libevent)

test -d "$abs_builddir/libevent" || mkdir -p $abs_builddir/libevent

dnl this is a bad hack

chmod +x "$abs_srcdir/libevent/configure" \
		"$abs_srcdir/libevent/depcomp" \
		"$abs_srcdir/libevent/install-sh" \
		"$abs_srcdir/libevent/missing"

libevent_configure="cd $abs_builddir/libevent ; CFLAGS=\"$CFLAGS $GCC_CFLAGS\" $abs_srcdir/libevent/configure --disable-shared"

(eval $libevent_configure)

if test ! -f "$abs_builddir/libevent/Makefile" ; then
	echo "Failed to configure libevent" >&2
	exit 1
fi

dnl another hack for stealing libevent dependant library list

LIBEVENT_LIBS="$LIBEVENT_LIBS `echo "@LIBS@" | $abs_builddir/libevent/config.status --file=-:-`"

SAPI_EXTRA_LIBS="$LIBEVENT_LIBS $LIBXML_LIBS $JUDY_LIBS"


if test "$prefix" = "NONE" ; then
	fpm_prefix=/usr/local
else
	fpm_prefix="$prefix"
fi

if test "$PHP_FPM_CONF" = "\$prefix/etc/php-fpm.conf" ; then
	php_fpm_conf_path="$fpm_prefix/etc/php-fpm.conf"
else
	php_fpm_conf_path="$PHP_FPM_CONF"
fi

if test "$PHP_FPM_LOG" = "\$prefix/logs/php-fpm.log" ; then
	php_fpm_log_path="$fpm_prefix/logs/php-fpm.log"
else
	php_fpm_log_path="$PHP_FPM_LOG"
fi

if test "$PHP_FPM_PID" = "\$prefix/logs/php-fpm.pid" ; then
	php_fpm_pid_path="$fpm_prefix/logs/php-fpm.pid"
else
	php_fpm_pid_path="$PHP_FPM_PID"
fi


if grep nobody /etc/group >/dev/null 2>&1; then
	php_fpm_group=nobody
else
	if grep nogroup /etc/group >/dev/null 2>&1; then
		php_fpm_group=nogroup
	else
		php_fpm_group=nobody
	fi
fi

PHP_SUBST_OLD(php_fpm_conf_path)
PHP_SUBST_OLD(php_fpm_log_path)
PHP_SUBST_OLD(php_fpm_pid_path)
PHP_SUBST_OLD(php_fpm_group)
PHP_SUBST_OLD(FPM_VERSION)

PHP_OUTPUT(sapi/cgi/fpm/fpm_autoconf.h)
PHP_OUTPUT(sapi/cgi/fpm/php-fpm.conf:sapi/cgi/fpm/conf/php-fpm.conf.in)
PHP_OUTPUT(sapi/cgi/fpm/php-fpm:sapi/cgi/fpm/init.d/php-fpm.in)
