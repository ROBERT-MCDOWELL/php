/*
   +----------------------------------------------------------------------+
   | PHP Version 4                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2007 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.0 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is       |
   | available through the world-wide-web at the following url:          |
   | http://www.php.net/license/3_0.txt.                                 |
   | If you did not receive a copy of the PHP license and are unable to  |
   | obtain it through the world-wide-web, please send a note to         |
   | license@php.net so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Author: PHP Team                                                     |
   +----------------------------------------------------------------------+
*/

/* cclass.h - character classes */

/* character-class table */
static struct cclass {
        char *name;
        char *chars;
        char *multis;
} cclasses[] = {
        {(char *)"alnum",       (char *)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789", (char *)""},
        {(char *)"alpha",       (char *)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", (char *)""},
        {(char *)"blank",       (char *)" \t", (char *)""},
        {(char *)"cntrl",       (char *)"\\007\\b\\t\\n\\v\\f\\r\\1\\2\\3\\4\\5\\6\\16\\17\\20\\21\\22\\23\\24\\25\\26\\27\\30\\31\\32\\33\\34\\35\\36\\37\\177", (char *)""},
        {(char *)"digit",       (char *)"0123456789", (char *)""},
        {(char *)"graph",       (char *)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!\\\"#$%&'()*+,-./:;<=>?@[\\\\]^_`{|}~", (char *)""},
        {(char *)"lower",       (char *)"abcdefghijklmnopqrstuvwxyz", (char *)""},
        {(char *)"print",       (char *)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!\\\"#$%&'()*+,-./:;<=>?@[\\\\]^_`{|}~ ", (char *)""},
        {(char *)"punct",       (char *)"!\\\"#$%&'()*+,-./:;<=>?@[\\\\]^_`{|}~", (char *)""},
        {(char *)"space",       (char *)"\\t\\n\\v\\f\\r ", (char *)""},
        {(char *)"upper",       (char *)"ABCDEFGHIJKLMNOPQRSTUVWXYZ", (char *)""},
        {(char *)"xdigit",      (char *)"0123456789ABCDEFabcdef", (char *)""},
        {NULL, 0, ""}
};
