
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_LSZ_H
#define PHP_LSZ_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_LSZ_NAME        "lsz"
#define PHP_LSZ_VERSION     "1.0.0"
#define PHP_LSZ_EXTNAME     "lsz"
#define PHP_LSZ_AUTHOR      "Phalcon Team and contributors"
#define PHP_LSZ_ZEPVERSION  "0.15.2-$Id$"
#define PHP_LSZ_DESCRIPTION "Description <b>test</b> for<br/>Test Extension."

typedef struct _zephir_struct_db { 
	zend_bool my_setting_1;
	int my_setting_2;
	double my_setting_3;
} zephir_struct_db;

typedef struct _zephir_struct_orm { 
	int cache_level;
	zend_bool cache_enable;
	zend_string*  cache_prefix;
} zephir_struct_orm;

typedef struct _zephir_struct_extension { 
	zend_bool test_ini_variable;
} zephir_struct_extension;



ZEND_BEGIN_MODULE_GLOBALS(lsz)

	int initialized;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
	zephir_struct_db db;
	zephir_struct_orm orm;
	zephir_struct_extension extension;
	zend_bool my_setting_1;
	zend_bool test_setting_1;
	int my_setting_2;
	double my_setting_3;
	char my_setting_4;
	char * my_setting_5;

ZEND_END_MODULE_GLOBALS(lsz)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(lsz)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(lsz, v)
#else
	#define ZEPHIR_GLOBAL(v) (lsz_globals.v)
#endif

#ifdef ZTS
	ZEND_TSRMLS_CACHE_EXTERN()
	#define ZEPHIR_VGLOBAL ((zend_lsz_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(lsz_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(lsz_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def lsz_globals
#define zend_zephir_globals_def zend_lsz_globals

extern zend_module_entry lsz_module_entry;
#define phpext_lsz_ptr &lsz_module_entry

#endif
