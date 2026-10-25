#!/bin/sh

aclocal && \
	autoheader && \
	autoconf && \
	automake --foreign --force-missing --add-missing --copy

rm -rf autom4te.cache
