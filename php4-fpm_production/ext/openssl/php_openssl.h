/*
   +----------------------------------------------------------------------+
   | PHP Version 4                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2008 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Stig Venaas <venaas@php.net>                                |
   |          Wez Furlong <wez@thebrainroom.com                           |
   +----------------------------------------------------------------------+
 */

/* $Id: php_openssl.h,v 1.10.8.6.4.3 2007/12/31 07:22:50 sebastian Exp $ */

#ifndef PHP_OPENSSL_H
#define PHP_OPENSSL_H

#ifdef PHP_WIN32
# undef PHP_OPENSSL_API
# ifdef OPENSSL_EXPORTS
#  define PHP_OPENSSL_API __declspec(dllexport)
# else
#  define PHP_OPENSSL_API __declspec(dllimport)
# endif
#else
# undef PHP_OPENSSL_API
# define PHP_OPENSSL_API /* nothing special */
#endif

#include <openssl/opensslv.h>
#if defined(LIBRESSL_VERSION_NUMBER)
/* LibreSSL version check */
#if LIBRESSL_VERSION_NUMBER < 0x20700000L
#define PHP_OPENSSL_API_VERSION 0x10001
#else
#define PHP_OPENSSL_API_VERSION 0x10100
#endif
#else
/* OpenSSL version check */
#if OPENSSL_VERSION_NUMBER < 0x10100000L
#define PHP_OPENSSL_API_VERSION 0x10002
#elif OPENSSL_VERSION_NUMBER < 0x30000000L
#define PHP_OPENSSL_API_VERSION 0x10100
#else
#define PHP_OPENSSL_API_VERSION 0x30000
#endif
#endif

/* HAVE_OPENSSL would include SSL MySQL stuff */
#if defined(HAVE_OPENSSL_EXT) || defined(HAVE_OPENSSL_SHARED_EXT)

#define OPENSSL_RAW_DATA 1
#define OPENSSL_ZERO_PADDING 2

#define OPENSSL_ERROR_X509_PRIVATE_KEY_VALUES_MISMATCH 0x0B080074

/* Used for client-initiated handshake renegotiation DoS protection*/
#define OPENSSL_DEFAULT_RENEG_LIMIT 2
#define OPENSSL_DEFAULT_RENEG_WINDOW 300
#define OPENSSL_DEFAULT_STREAM_VERIFY_DEPTH 9
#define OPENSSL_DEFAULT_STREAM_CIPHERS "ECDHE-RSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES128-GCM-SHA256:" \
        "ECDHE-RSA-AES256-GCM-SHA384:ECDHE-ECDSA-AES256-GCM-SHA384:DHE-RSA-AES128-GCM-SHA256:" \
        "DHE-DSS-AES128-GCM-SHA256:kEDH+AESGCM:ECDHE-RSA-AES128-SHA256:ECDHE-ECDSA-AES128-SHA256:" \
        "ECDHE-RSA-AES128-SHA:ECDHE-ECDSA-AES128-SHA:ECDHE-RSA-AES256-SHA384:ECDHE-ECDSA-AES256-SHA384:" \
        "ECDHE-RSA-AES256-SHA:ECDHE-ECDSA-AES256-SHA:DHE-RSA-AES128-SHA256:DHE-RSA-AES128-SHA:" \
        "DHE-DSS-AES128-SHA256:DHE-RSA-AES256-SHA256:DHE-DSS-AES256-SHA:DHE-RSA-AES256-SHA:AES128-GCM-SHA256:" \
        "AES256-GCM-SHA384:AES128:AES256:HIGH:!SSLv2:!aNULL:!eNULL:!EXPORT:!DES:!MD5:!RC4:!ADH"

extern zend_module_entry openssl_module_entry;
#define phpext_openssl_ptr &openssl_module_entry

PHP_MINIT_FUNCTION(openssl);
PHP_MSHUTDOWN_FUNCTION(openssl);
PHP_MINFO_FUNCTION(openssl);

PHP_FUNCTION(openssl_pkey_get_private);
PHP_FUNCTION(openssl_pkey_get_public);
PHP_FUNCTION(openssl_pkey_free);
PHP_FUNCTION(openssl_pkey_new);
PHP_FUNCTION(openssl_pkey_export);
PHP_FUNCTION(openssl_pkey_export_to_file);
PHP_FUNCTION(openssl_pkey_get_details);

PHP_FUNCTION(openssl_sign);
PHP_FUNCTION(openssl_verify);
PHP_FUNCTION(openssl_seal);
PHP_FUNCTION(openssl_open);
PHP_FUNCTION(openssl_private_encrypt);
PHP_FUNCTION(openssl_private_decrypt);
PHP_FUNCTION(openssl_public_encrypt);
PHP_FUNCTION(openssl_public_decrypt);

PHP_FUNCTION(openssl_pkcs7_verify);
PHP_FUNCTION(openssl_pkcs7_decrypt);
PHP_FUNCTION(openssl_pkcs7_sign);
PHP_FUNCTION(openssl_pkcs7_encrypt);

PHP_FUNCTION(openssl_error_string);

PHP_FUNCTION(openssl_x509_read);
PHP_FUNCTION(openssl_x509_free);
PHP_FUNCTION(openssl_x509_parse);
PHP_FUNCTION(openssl_x509_checkpurpose);
PHP_FUNCTION(openssl_x509_export);
PHP_FUNCTION(openssl_x509_export_to_file);
PHP_FUNCTION(openssl_x509_check_private_key);
PHP_FUNCTION(openssl_csr_new);
PHP_FUNCTION(openssl_csr_export);
PHP_FUNCTION(openssl_csr_export_to_file);
PHP_FUNCTION(openssl_csr_sign);

PHP_FUNCTION(openssl_get_md_methods);
PHP_FUNCTION(openssl_get_cipher_methods);

PHP_FUNCTION(openssl_digest);
PHP_FUNCTION(openssl_encrypt);
PHP_FUNCTION(openssl_decrypt);
PHP_FUNCTION(openssl_cipher_iv_length);

PHP_FUNCTION(openssl_dh_compute_key);
PHP_FUNCTION(openssl_random_pseudo_bytes);


#include <openssl/ssl.h>
int php_openssl_apply_verification_policy(SSL *ssl, X509 *peer, php_stream *stream TSRMLS_DC);
SSL *php_SSL_new_from_context(SSL_CTX *ctx, php_stream *stream TSRMLS_DC);


#else

#define phpext_openssl_ptr NULL

#endif

#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 */
