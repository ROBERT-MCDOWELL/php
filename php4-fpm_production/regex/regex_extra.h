/* do not frame this - we must be able to include this file multiple times */

#if (defined(REGEX) && REGEX == 1) || !defined(REGEX)
#  if !defined(PHP_WIN32) && !defined(PHP_NO_ALIASES)
#undef regexec
#undef regerror
#undef regfree
#undef regcomp

#define regexec  php_regexec
#define regerror php_regerror
#define regfree  php_regfree
#define regcomp  php_regcomp
#endif
#endif
