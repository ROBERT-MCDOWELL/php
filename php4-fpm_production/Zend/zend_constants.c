/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2003 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        | 
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/


#include "zend.h"
#include "zend_constants.h"
#include "zend_variables.h"
#include "zend_operators.h"
#include "zend_globals.h"


void free_zend_constant(zend_constant *c)
{
	if (!(c->flags & CONST_PERSISTENT)) {
		zval_dtor(&c->value);
	}
	free(c->name);
}


void copy_zend_constant(zend_constant *c)
{
	c->name = zend_strndup(c->name, c->name_len);
	if (!(c->flags & CONST_PERSISTENT)) {
		zval_copy_ctor(&c->value);
	}
}


void zend_copy_constants(HashTable *target, HashTable *source)
{
	zend_constant tmp_constant;

	zend_hash_copy(target, source, (copy_ctor_func_t) copy_zend_constant, &tmp_constant, sizeof(zend_constant));
}


static int clean_non_persistent_constant(zend_constant *c TSRMLS_DC)
{
	if (c->flags & CONST_PERSISTENT) {
		return EG(full_tables_cleanup) ? 0 : ZEND_HASH_APPLY_STOP;
	} else {
		return EG(full_tables_cleanup) ? 1 : ZEND_HASH_APPLY_REMOVE;
	}
}


static int clean_module_constant(zend_constant *c, int *module_number TSRMLS_DC)
{
	if (c->module_number == *module_number) {
		return 1;
	} else {
		return 0;
	}
}


void clean_module_constants(int module_number TSRMLS_DC)
{
	zend_hash_apply_with_argument(EG(zend_constants), (apply_func_arg_t) clean_module_constant, (void *) &module_number TSRMLS_CC);
}


int zend_startup_constants(TSRMLS_D)
{
#ifdef ZEND_WIN32
	DWORD dwBuild=0;
	DWORD dwVersion = GetVersion();
	DWORD dwWindowsMajorVersion =  (DWORD)(LOBYTE(LOWORD(dwVersion)));
	DWORD dwWindowsMinorVersion =  (DWORD)(HIBYTE(LOWORD(dwVersion)));
#endif

	EG(zend_constants) = (HashTable *) malloc(sizeof(HashTable));

	if (zend_hash_init(EG(zend_constants), 20, NULL, ZEND_CONSTANT_DTOR, 1)==FAILURE) {
		return FAILURE;
	}
	return SUCCESS;
}



void zend_register_standard_constants(TSRMLS_D)
{
	REGISTER_MAIN_LONG_CONSTANT("E_ERROR", E_ERROR, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_WARNING", E_WARNING, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_PARSE", E_PARSE, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_NOTICE", E_NOTICE, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_CORE_ERROR", E_CORE_ERROR, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_CORE_WARNING", E_CORE_WARNING, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_COMPILE_ERROR", E_COMPILE_ERROR, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_COMPILE_WARNING", E_COMPILE_WARNING, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_USER_ERROR", E_USER_ERROR, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_USER_WARNING", E_USER_WARNING, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_USER_NOTICE", E_USER_NOTICE, CONST_PERSISTENT | CONST_CS);

	REGISTER_MAIN_LONG_CONSTANT("E_ALL", E_ALL, CONST_PERSISTENT | CONST_CS);
#if SUHOSIN_PATCH
	REGISTER_MAIN_LONG_CONSTANT("S_MEMORY", S_MEMORY, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("S_VARS", S_VARS, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("S_FILES", S_FILES, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("S_INCLUDE", S_INCLUDE, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("S_SQL", S_SQL, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("S_EXECUTOR", S_EXECUTOR, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("S_MAIL", S_MAIL, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("S_SESSION", S_SESSION, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("S_MISC", S_MISC, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("S_INTERNAL", S_INTERNAL, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("S_ALL", S_ALL, CONST_PERSISTENT | CONST_CS);

	/* error levels */
	REGISTER_MAIN_LONG_CONSTANT("LOG_EMERG", LOG_EMERG, CONST_CS | CONST_PERSISTENT); /* system unusable */
	REGISTER_MAIN_LONG_CONSTANT("LOG_ALERT", LOG_ALERT, CONST_CS | CONST_PERSISTENT); /* immediate action required */
	REGISTER_MAIN_LONG_CONSTANT("LOG_CRIT", LOG_CRIT, CONST_CS | CONST_PERSISTENT); /* critical conditions */
	REGISTER_MAIN_LONG_CONSTANT("LOG_ERR", LOG_ERR, CONST_CS | CONST_PERSISTENT); 
	REGISTER_MAIN_LONG_CONSTANT("LOG_WARNING", LOG_WARNING, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_NOTICE", LOG_NOTICE, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_INFO", LOG_INFO, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_DEBUG", LOG_DEBUG, CONST_CS | CONST_PERSISTENT);
	/* facility: type of program logging the message */
	REGISTER_MAIN_LONG_CONSTANT("LOG_KERN", LOG_KERN, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_USER", LOG_USER, CONST_CS | CONST_PERSISTENT); /* generic user level */
	REGISTER_MAIN_LONG_CONSTANT("LOG_MAIL", LOG_MAIL, CONST_CS | CONST_PERSISTENT); /* log to email */
	REGISTER_MAIN_LONG_CONSTANT("LOG_DAEMON", LOG_DAEMON, CONST_CS | CONST_PERSISTENT); /* other system daemons */
	REGISTER_MAIN_LONG_CONSTANT("LOG_AUTH", LOG_AUTH, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_SYSLOG", LOG_SYSLOG, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_LPR", LOG_LPR, CONST_CS | CONST_PERSISTENT);
#ifdef LOG_NEWS
	/* No LOG_NEWS on HP-UX */
	REGISTER_MAIN_LONG_CONSTANT("LOG_NEWS", LOG_NEWS, CONST_CS | CONST_PERSISTENT); /* usenet new */
#endif
#ifdef LOG_UUCP
	/* No LOG_UUCP on HP-UX */
	REGISTER_MAIN_LONG_CONSTANT("LOG_UUCP", LOG_UUCP, CONST_CS | CONST_PERSISTENT);
#endif
#ifdef LOG_CRON
	/* apparently some systems don't have this one */
	REGISTER_MAIN_LONG_CONSTANT("LOG_CRON", LOG_CRON, CONST_CS | CONST_PERSISTENT);
#endif
#ifdef LOG_AUTHPRIV
	/* AIX doesn't have LOG_AUTHPRIV */
	REGISTER_MAIN_LONG_CONSTANT("LOG_AUTHPRIV", LOG_AUTHPRIV, CONST_CS | CONST_PERSISTENT);
#endif
#if !defined(PHP_WIN32) && !defined(NETWARE)
	REGISTER_MAIN_LONG_CONSTANT("LOG_LOCAL0", LOG_LOCAL0, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_LOCAL1", LOG_LOCAL1, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_LOCAL2", LOG_LOCAL2, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_LOCAL3", LOG_LOCAL3, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_LOCAL4", LOG_LOCAL4, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_LOCAL5", LOG_LOCAL5, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_LOCAL6", LOG_LOCAL6, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_LOCAL7", LOG_LOCAL7, CONST_CS | CONST_PERSISTENT);
#endif
	/* options */
	REGISTER_MAIN_LONG_CONSTANT("LOG_PID", LOG_PID, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_CONS", LOG_CONS, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_ODELAY", LOG_ODELAY, CONST_CS | CONST_PERSISTENT);
	REGISTER_MAIN_LONG_CONSTANT("LOG_NDELAY", LOG_NDELAY, CONST_CS | CONST_PERSISTENT);
#ifdef LOG_NOWAIT
	REGISTER_MAIN_LONG_CONSTANT("LOG_NOWAIT", LOG_NOWAIT, CONST_CS | CONST_PERSISTENT);
#endif
#ifdef LOG_PERROR
	/* AIX doesn't have LOG_PERROR */
	REGISTER_MAIN_LONG_CONSTANT("LOG_PERROR", LOG_PERROR, CONST_CS | CONST_PERSISTENT); /*log to stderr*/
#endif
#endif

	/* true/false constants */
	{
		zend_constant c;
	
		c.value.type = IS_BOOL;
		c.flags = CONST_PERSISTENT;
		c.module_number = 0;

		c.name = zend_strndup(ZEND_STRL("TRUE"));
		c.name_len = sizeof("TRUE");
		c.value.value.lval = 1;
		c.value.type = IS_BOOL;
		zend_register_constant(&c TSRMLS_CC);
		
		c.name = zend_strndup(ZEND_STRL("FALSE"));
		c.name_len = sizeof("FALSE");
		c.value.value.lval = 0;
		c.value.type = IS_BOOL;
		zend_register_constant(&c TSRMLS_CC);

		c.name = zend_strndup(ZEND_STRL("ZEND_THREAD_SAFE"));
		c.name_len = sizeof("ZEND_THREAD_SAFE");
		c.value.value.lval = ZTS_V;
		c.value.type = IS_BOOL;
		zend_register_constant(&c TSRMLS_CC);

		c.name = zend_strndup(ZEND_STRL("NULL"));
		c.name_len = sizeof("NULL");
		c.value.type = IS_NULL;
		zend_register_constant(&c TSRMLS_CC);
	}
}


int zend_shutdown_constants(TSRMLS_D)
{
	zend_hash_destroy(EG(zend_constants));
	free(EG(zend_constants));
	return SUCCESS;
}


void clean_non_persistent_constants(TSRMLS_D)
{
	if (EG(full_tables_cleanup)) {
		zend_hash_apply(EG(zend_constants), (apply_func_t) clean_non_persistent_constant TSRMLS_CC);
	} else {
		zend_hash_reverse_apply(EG(zend_constants), (apply_func_t) clean_non_persistent_constant TSRMLS_CC);
	}
}


ZEND_API void zend_register_long_constant(char *name, uint name_len, long lval, int flags, int module_number TSRMLS_DC)
{
	zend_constant c;
	
	c.value.type = IS_LONG;
	c.value.value.lval = lval;
	c.flags = flags;
	c.name = zend_strndup(name, name_len);
	c.name_len = name_len;
	c.module_number = module_number;
	zend_register_constant(&c TSRMLS_CC);
}


ZEND_API void zend_register_double_constant(char *name, uint name_len, double dval, int flags, int module_number TSRMLS_DC)
{
	zend_constant c;
	
	c.value.type = IS_DOUBLE;
	c.value.value.dval = dval;
	c.flags = flags;
	c.name = zend_strndup(name, name_len);
	c.name_len = name_len;
	c.module_number = module_number;
	zend_register_constant(&c TSRMLS_CC);
}


ZEND_API void zend_register_stringl_constant(char *name, uint name_len, char *strval, uint strlen, int flags, int module_number TSRMLS_DC)
{
	zend_constant c;
	
	c.value.type = IS_STRING;
	c.value.value.str.val = strval;
	c.value.value.str.len = strlen;
	c.flags = flags;
	c.name = zend_strndup(name, name_len);
	c.name_len = name_len;
	c.module_number = module_number;
	zend_register_constant(&c TSRMLS_CC);
}


ZEND_API void zend_register_string_constant(char *name, uint name_len, char *strval, int flags, int module_number TSRMLS_DC)
{
	zend_register_stringl_constant(name, name_len, strval, strlen(strval), flags, module_number TSRMLS_CC);
}


ZEND_API int zend_get_constant(char *name, uint name_len, zval *result TSRMLS_DC)
{
	zend_constant *c;
	char *lookup_name;
	int retval = 1;

	if (zend_hash_find(EG(zend_constants), name, name_len+1, (void **) &c) == FAILURE) {
		lookup_name = estrndup(name, name_len);
		zend_str_tolower(lookup_name, name_len);

		if (zend_hash_find(EG(zend_constants), lookup_name, name_len+1, (void **) &c)==SUCCESS) {
			if ((c->flags & CONST_CS) && memcmp(c->name, name, name_len)!=0) {
				retval=0;
			}
		} else {
			retval=0;
		}
		efree(lookup_name);
	}

	if (retval) {
		*result = c->value;
		zval_copy_ctor(result);
		result->is_ref = 0;
		result->refcount = 1;
	}

	return retval;
}


ZEND_API int zend_register_constant(zend_constant *c TSRMLS_DC)
{
	char *lowercase_name = NULL;
	char *name;
	int ret = SUCCESS;

#if 0
	printf("Registering constant for module %d\n", c->module_number);
#endif

	if (!(c->flags & CONST_CS)) {
		lowercase_name = estrndup(c->name, c->name_len);
		zend_str_tolower(lowercase_name, c->name_len);
		name = lowercase_name;
	} else {
		name = c->name;
	}

	if (zend_hash_add(EG(zend_constants), name, c->name_len, (void *) c, sizeof(zend_constant), NULL)==FAILURE) {
		zend_error(E_NOTICE,"Constant %s already defined", name);
		free(c->name);
		if (!(c->flags & CONST_PERSISTENT)) {
			zval_dtor(&c->value);
		}
		ret = FAILURE;
	}
	if (lowercase_name) {
		efree(lowercase_name);
	}
	return ret;
}


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 */
