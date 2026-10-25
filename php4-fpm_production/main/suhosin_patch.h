/*
   +----------------------------------------------------------------------+
   | Suhosin Patch for PHP                                                |
   +----------------------------------------------------------------------+
   | Copyright (c) 2004-2006 Stefan Esser                                 |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.02 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available at through the world-wide-web at                           |
   | http://www.php.net/license/2_02.txt.                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stefan Esser <sesser@hardened-php.net>                       |
   +----------------------------------------------------------------------+
 */

#ifndef SUHOSIN_PATCH_H
#define SUHOSIN_PATCH_H

#if SUHOSIN_PATCH

#include "zend.h"

PHPAPI void suhosin_startup();
PHPAPI void suhosin_clear_mm_canaries(TSRMLS_D);

#define SUHOSIN_PATCH_VERSION "0.9.6"

#define SUHOSIN_LOGO_GUID "SUHO8567F54-D428-14d2-A769-00DA302A5F18"

#endif

#endif /* SUHOSIN_PATCH_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 */
