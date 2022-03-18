
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "lsz.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *lsz_controller_lszcontroller_abstract_ce;
zend_class_entry *lsz_lib_autoregister_ce;
zend_class_entry *lsz_model_lszmodel_abstract_ce;
zend_class_entry *lsz_zimuge_ce;

ZEND_DECLARE_MODULE_GLOBALS(lsz)

PHP_INI_BEGIN()
	STD_PHP_INI_BOOLEAN("lsz.db.my_setting_1", "0", PHP_INI_ALL, OnUpdateBool, db.my_setting_1, zend_lsz_globals, lsz_globals)
	
	
	
	STD_PHP_INI_BOOLEAN("lsz.orm.cache_enable", "1", PHP_INI_ALL, OnUpdateBool, orm.cache_enable, zend_lsz_globals, lsz_globals)
	STD_PHP_INI_ENTRY("lsz.orm.cache_prefix", "prefix-string-", PHP_INI_ALL, NULL, orm.cache_prefix, zend_lsz_globals, lsz_globals)
	STD_PHP_INI_BOOLEAN("extension.test_ini_variable", "1", PHP_INI_ALL, OnUpdateBool, extension.test_ini_variable, zend_lsz_globals, lsz_globals)
	STD_PHP_INI_BOOLEAN("ini-entry.my_setting_1", "1", PHP_INI_ALL, OnUpdateBool, my_setting_1, zend_lsz_globals, lsz_globals)
	STD_PHP_INI_BOOLEAN("lsz.test_setting_1", "1", PHP_INI_ALL, OnUpdateBool, test_setting_1, zend_lsz_globals, lsz_globals)
	STD_PHP_INI_ENTRY("lsz.my_setting_5", "custom_value", PHP_INI_ALL, NULL, my_setting_5, zend_lsz_globals, lsz_globals)
PHP_INI_END()

static PHP_MINIT_FUNCTION(lsz)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(Lsz_Controller_LszController_Abstract);
	ZEPHIR_INIT(Lsz_Lib_AutoRegister);
	ZEPHIR_INIT(Lsz_Model_LszModel_Abstract);
	ZEPHIR_INIT(Lsz_Zimuge);
	
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(lsz)
{
	
	zephir_deinitialize_memory();
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_lsz_globals *lsz_globals)
{
	lsz_globals->initialized = 0;

	/* Cache Enabled */
	lsz_globals->cache_enabled = 1;

	/* Recursive Lock */
	lsz_globals->recursive_lock = 0;

	/* Static cache */
	memset(lsz_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);

	
	lsz_globals->db.my_setting_2 = 100;
	lsz_globals->db.my_setting_3 = 7.5;
	lsz_globals->orm.cache_level = 3;

	lsz_globals->orm.cache_prefix = ZSTR_VAL(zend_string_init(ZEND_STRL("prefix-string-"), 0));

	lsz_globals->my_setting_1 = 1;
	lsz_globals->test_setting_1 = 1;
	lsz_globals->my_setting_2 = 10;
	lsz_globals->my_setting_3 = 15.2;
	lsz_globals->my_setting_4 = 'A';
	lsz_globals->my_setting_5 = ZSTR_VAL(zend_string_init(ZEND_STRL("custom_value"), 0));
	
}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_lsz_globals *lsz_globals)
{
	
}

static PHP_RINIT_FUNCTION(lsz)
{
	zend_lsz_globals *lsz_globals_ptr;
	lsz_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(lsz_globals_ptr);
	zephir_initialize_memory(lsz_globals_ptr);

	
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(lsz)
{
	
	zephir_deinitialize_memory();
	return SUCCESS;
}



static PHP_MINFO_FUNCTION(lsz)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_LSZ_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_LSZ_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_LSZ_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_LSZ_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_LSZ_ZEPVERSION);
	php_info_print_table_end();
		php_info_print_table_start();
	php_info_print_table_header(2, "Test Extension support", "Value");
	php_info_print_table_row(2, "Lifecycle hooks", "PHP provides several lifecycle events, which extensions can use to perform common initialization or shutdown tasks.");
	php_info_print_table_row(2, "Static Analysis", "Test extensions&#039; compiler provides static analysis of the compiled code.");
	php_info_print_table_end();
	php_info_print_table_start();
	php_info_print_table_header(2, "Test variable", "Value");
	php_info_print_table_row(2, "Extension", "Installed");
	php_info_print_table_row(2, "NFR", "Contributions are welcome!");
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(lsz)
{
#if defined(COMPILE_DL_LSZ) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	php_zephir_init_globals(lsz_globals);
	php_zephir_init_module_globals(lsz_globals);
}

static PHP_GSHUTDOWN_FUNCTION(lsz)
{
	
}


zend_function_entry php_lsz_functions[] = {
	ZEND_FE_END

};

static const zend_module_dep php_lsz_deps[] = {
	ZEND_MOD_REQUIRED("pdo")
	ZEND_MOD_REQUIRED("spl")
	ZEND_MOD_REQUIRED("standard")
	ZEND_MOD_REQUIRED("hash")
	ZEND_MOD_REQUIRED("json")
	ZEND_MOD_END
};

zend_module_entry lsz_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	php_lsz_deps,
	PHP_LSZ_EXTNAME,
	php_lsz_functions,
	PHP_MINIT(lsz),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(lsz),
#else
	NULL,
#endif
	PHP_RINIT(lsz),
	PHP_RSHUTDOWN(lsz),
	PHP_MINFO(lsz),
	PHP_LSZ_VERSION,
	ZEND_MODULE_GLOBALS(lsz),
	PHP_GINIT(lsz),
	PHP_GSHUTDOWN(lsz),
#ifdef ZEPHIR_POST_REQUEST
	PHP_PRSHUTDOWN(lsz),
#else
	NULL,
#endif
	STANDARD_MODULE_PROPERTIES_EX
};

/* implement standard "stub" routine to introduce ourselves to Zend */
#ifdef COMPILE_DL_LSZ
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(lsz)
#endif
