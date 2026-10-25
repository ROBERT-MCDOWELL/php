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
/* $Id: suhosin_patch.c,v 1.2 2004/11/21 09:38:52 ionic Exp $ */

#include "php.h"

#include <stdio.h>
#include <stdlib.h>

#if HAVE_UNISTD_H
#include <unistd.h>
#endif
#include "SAPI.h"
#include "php_globals.h"

#if SUHOSIN_PATCH

#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif

#if defined(PHP_WIN32) || defined(__riscos__) || defined(NETWARE)
#undef AF_UNIX
#endif

#if defined(AF_UNIX)
#include <sys/un.h>
#endif

#define SYSLOG_PATH  "/dev/log"

#ifdef PHP_WIN32
static HANDLE log_source = 0;
#endif

#include "snprintf.h"

#include "suhosin_patch.h"

#ifdef ZTS
#include "suhosin_globals.h"
int suhosin_patch_globals_id;
#else
struct _suhosin_patch_globals suhosin_patch_globals;
#endif


static void php_security_log(int loglevel, char *fmt, ...);

static void suhosin_patch_globals_ctor(suhosin_patch_globals_struct *suhosin_patch_globals TSRMLS_DC)
{
	memset(suhosin_patch_globals, 0, sizeof(*suhosin_patch_globals));
}

PHPAPI void suhosin_startup()
{
#ifdef ZTS
	ts_allocate_id(&suhosin_patch_globals_id, sizeof(suhosin_patch_globals_struct), (ts_allocate_ctor) suhosin_patch_globals_ctor, NULL);
#else
	suhosin_patch_globals_ctor(&suhosin_patch_globals TSRMLS_CC);
#endif
	zend_suhosin_log = php_security_log;
}

unsigned int zend_canary();

PHPAPI void suhosin_clear_mm_canaries(TSRMLS_D)
{
	SPG(canary_1) = zend_canary();
	SPG(canary_2) = zend_canary();
}

static char *loglevel2string(int loglevel)
{
	switch (loglevel) {
	    case S_FILES:
		return "FILES";
	    case S_INCLUDE:
		return "INCLUDE";
	    case S_MEMORY:
		return "MEMORY";
	    case S_MISC:
		return "MISC";
		case S_SESSION:
		return "SESSION";
	    case S_SQL:
		return "SQL";
	    case S_EXECUTOR:
		return "EXECUTOR";
	    case S_VARS:
		return "VARS";
	    default:
		return "UNKNOWN";    
	}
}

static void php_security_log(int loglevel, char *fmt, ...)
{
	int s, r, i=0;
#if defined(AF_UNIX)
	struct sockaddr_un saun;
#endif
#ifdef PHP_WIN32
	LPTSTR strs[2];
	unsigned short etype;
	DWORD evid;
#endif
	char buf[4096+64];
	char error[4096+100];
	char *ip_address;
	char *fname;
	char *alertstring;
	int lineno;
	va_list ap;
	TSRMLS_FETCH();

	/*SDEBUG("(suhosin_log) loglevel: %d log_syslog: %u - log_sapi: %u - log_script: %u", loglevel, SPG(log_syslog), SPG(log_sapi), SPG(log_script));*/
	
	if (SPG(log_use_x_forwarded_for)) {
		ip_address = sapi_getenv("HTTP_X_FORWARDED_FOR", 20 TSRMLS_CC);
		if (ip_address == NULL) {
			ip_address = "X-FORWARDED-FOR not set";
		}
	} else {
		ip_address = sapi_getenv("REMOTE_ADDR", 11 TSRMLS_CC);
		if (ip_address == NULL) {
			ip_address = "REMOTE_ADDR not set";
		}
	}
	
	
	va_start(ap, fmt);
	ap_php_vsnprintf(error, sizeof(error), fmt, ap);
	va_end(ap);
	while (error[i]) {
		if (error[i] < 32) error[i] = '.';
		i++;
	}
	
/*	if (SPG(simulation)) {
		alertstring = "ALERT-SIMULATION";
	} else { */
		alertstring = "ALERT";
/*	}*/
	
	if (zend_is_executing(TSRMLS_C)) {
		if (EG(current_execute_data)) {
			lineno = EG(current_execute_data)->opline->lineno;
			fname = EG(current_execute_data)->op_array->filename;
		} else {
			lineno = zend_get_executed_lineno(TSRMLS_C);
			fname = zend_get_executed_filename(TSRMLS_C);
		}
		ap_php_snprintf(buf, sizeof(buf), "%s - %s (attacker '%s', file '%s', line %u)", alertstring, error, ip_address, fname, lineno);
	} else {
		fname = sapi_getenv("SCRIPT_FILENAME", 15 TSRMLS_CC);
		if (fname==NULL) {
			fname = "unknown";
		}
		ap_php_snprintf(buf, sizeof(buf), "%s - %s (attacker '%s', file '%s')", alertstring, error, ip_address, fname);
	}
			
	/* Syslog-Logging disabled? */
	if (((SPG(log_syslog)|S_INTERNAL) & loglevel)==0) {
		goto log_sapi;
	}	
	
#if defined(AF_UNIX)
	ap_php_snprintf(error, sizeof(error), "<%u>suhosin[%u]: %s\n", (unsigned int)(SPG(log_syslog_facility)|SPG(log_syslog_priority)),getpid(),buf);

	s = socket(AF_UNIX, SOCK_DGRAM, 0);
	if (s == -1) {
		goto log_sapi;
	}
	
	memset(&saun, 0, sizeof(saun));
	saun.sun_family = AF_UNIX;
	strcpy(saun.sun_path, SYSLOG_PATH);
	/*saun.sun_len = sizeof(saun);*/
	
	r = connect(s, (struct sockaddr *)&saun, sizeof(saun));
	if (r) {
		close(s);
    		s = socket(AF_UNIX, SOCK_STREAM, 0);
		if (s == -1) {
			goto log_sapi;
		}
	
		memset(&saun, 0, sizeof(saun));
		saun.sun_family = AF_UNIX;
		strcpy(saun.sun_path, SYSLOG_PATH);
		/*saun.sun_len = sizeof(saun);*/

		r = connect(s, (struct sockaddr *)&saun, sizeof(saun));
		if (r) { 
			close(s);
			goto log_sapi;
		}
	}
	send(s, error, strlen(error), 0);
	
	close(s);
#endif
#ifdef PHP_WIN32
	ap_php_snprintf(error, sizeof(error), "suhosin[%u]: %s", getpid(),buf);

	switch (SPG(log_syslog_priority)) {			/* translate UNIX type into NT type */
		case 1: /*LOG_ALERT:*/
			etype = EVENTLOG_ERROR_TYPE;
			break;
		case 6: /*LOG_INFO:*/
			etype = EVENTLOG_INFORMATION_TYPE;
			break;
		default:
			etype = EVENTLOG_WARNING_TYPE;
	}
	evid = loglevel;
	strs[0] = error;
	/* report the event */
	if (log_source == NULL) {
		log_source = RegisterEventSource(NULL, "Suhosin-Patch-" SUHOSIN_PATCH_VERSION);
	}
	ReportEvent(log_source, etype, (unsigned short) SPG(log_syslog_priority), evid, NULL, 1, 0, strs, NULL);
	
#endif
log_sapi:
	/* SAPI Logging activated? */
	/*SDEBUG("(suhosin_log) log_syslog: %u - log_sapi: %u - log_script: %u - log_phpscript: %u", SPG(log_syslog), SPG(log_sapi), SPG(log_script), SPG(log_phpscript));*/
	if (((SPG(log_sapi)|S_INTERNAL) & loglevel)!=0) {
		sapi_module.log_message(buf);
	}

/*log_script:*/
	/* script logging activaed? */
	if (((SPG(log_script) & loglevel)!=0) && SPG(log_scriptname)!=NULL) {
		char cmd[8192], *cmdpos, *bufpos;
		FILE *in;
		int space;
		
		ap_php_snprintf(cmd, sizeof(cmd), "%s %s \'", SPG(log_scriptname), loglevel2string(loglevel));
		space = sizeof(cmd) - strlen(cmd);
		cmdpos = cmd + strlen(cmd);
		bufpos = buf;
		if (space <= 1) return;
		while (space > 2 && *bufpos) {
			if (*bufpos == '\'') {
				if (space<=5) break;
				*cmdpos++ = '\'';
				*cmdpos++ = '\\';
				*cmdpos++ = '\'';
				*cmdpos++ = '\'';
				bufpos++;
				space-=4;
			} else {
				*cmdpos++ = *bufpos++;
				space--;
			}
		}
		*cmdpos++ = '\'';
		*cmdpos = 0;
		
		if ((in=VCWD_POPEN(cmd, "r"))==NULL) {
			php_security_log(S_INTERNAL, "Unable to execute logging shell script: %s", SPG(log_scriptname));
			return;
		}
		/* read and forget the result */
		while (1) {
			int readbytes = fread(cmd, 1, sizeof(cmd), in);
			if (readbytes<=0) {
				break;
			}
		}
		pclose(in);
	}
/*log_phpscript:*/
	if ((SPG(log_phpscript) & loglevel)!=0 && EG(in_execution) && SPG(log_phpscriptname) && SPG(log_phpscriptname)[0]) {
		zend_file_handle file_handle;
		zend_op_array *new_op_array;
		zval *result = NULL;
		
		/*long orig_execution_depth = SPG(execution_depth);*/
		zend_bool orig_safe_mode = PG(safe_mode);
		char *orig_basedir = PG(open_basedir);
		
		char *phpscript = SPG(log_phpscriptname);
/*SDEBUG("scriptname %s", SPG(log_phpscriptname));`*/
#ifdef ZEND_ENGINE_2
		if (zend_stream_open(phpscript, &file_handle TSRMLS_CC) == SUCCESS) {
#else
		if (zend_open(phpscript, &file_handle) == SUCCESS && ZEND_IS_VALID_FILE_HANDLE(&file_handle)) {
			file_handle.filename = phpscript;
			file_handle.free_filename = 0;
#endif		
			if (!file_handle.opened_path) {
				file_handle.opened_path = estrndup(phpscript, strlen(phpscript));
			}
			new_op_array = zend_compile_file(&file_handle, ZEND_REQUIRE TSRMLS_CC);
			zend_destroy_file_handle(&file_handle TSRMLS_CC);
			if (new_op_array) {
				HashTable *active_symbol_table = EG(active_symbol_table);
				zval *zerror, *zerror_class;
				
				if (active_symbol_table == NULL) {
					active_symbol_table = &EG(symbol_table);
				}
				EG(return_value_ptr_ptr) = &result;
				EG(active_op_array) = new_op_array;
				
				MAKE_STD_ZVAL(zerror);
				MAKE_STD_ZVAL(zerror_class);
				ZVAL_STRING(zerror, buf, 1);
				ZVAL_LONG(zerror_class, loglevel);

				zend_hash_update(active_symbol_table, "SUHOSIN_ERROR", sizeof("SUHOSIN_ERROR"), (void **)&zerror, sizeof(zval *), NULL);
				zend_hash_update(active_symbol_table, "SUHOSIN_ERRORCLASS", sizeof("SUHOSIN_ERRORCLASS"), (void **)&zerror_class, sizeof(zval *), NULL);
				
				/*SPG(execution_depth) = 0;*/
				if (SPG(log_phpscript_is_safe)) {
					PG(safe_mode) = 0;
					PG(open_basedir) = NULL;
				}
				
				zend_execute(new_op_array TSRMLS_CC);
				
				/*SPG(execution_depth) = orig_execution_depth;*/
				PG(safe_mode) = orig_safe_mode;
				PG(open_basedir) = orig_basedir;
				
#ifdef ZEND_ENGINE_2
				destroy_op_array(new_op_array TSRMLS_CC);
#else
				destroy_op_array(new_op_array);
#endif
				efree(new_op_array);
#ifdef ZEND_ENGINE_2
				if (!EG(exception))
#endif			
				{
					if (EG(return_value_ptr_ptr)) {
						zval_ptr_dtor(EG(return_value_ptr_ptr));
						EG(return_value_ptr_ptr) = NULL;
					}
				}
			} else {
				php_security_log(S_INTERNAL, "Unable to execute logging PHP script: %s", SPG(log_phpscriptname));
				return;
			}
		} else {
			php_security_log(S_INTERNAL, "Unable to execute logging PHP script: %s", SPG(log_phpscriptname));
			return;
		}
	}

}


#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: sw=4 ts=4 fdm=marker
 * vim<600: sw=4 ts=4
 */
