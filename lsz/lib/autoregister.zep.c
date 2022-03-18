
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/array.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Lsz_Lib_AutoRegister)
{
	ZEPHIR_REGISTER_CLASS(Lsz\\Lib, AutoRegister, lsz, lib_autoregister, lsz_lib_autoregister_method_entry, 0);

	zend_declare_property_null(lsz_lib_autoregister_ce, SL("_default"), ZEND_ACC_PUBLIC|ZEND_ACC_STATIC);
	zend_declare_property_null(lsz_lib_autoregister_ce, SL("path"), ZEND_ACC_PRIVATE|ZEND_ACC_STATIC);
	return SUCCESS;
}

PHP_METHOD(Lsz_Lib_AutoRegister, init)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, _0, _1$$3;
	zval path;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &path_param);
	zephir_get_strval(&path, path_param);


	zephir_update_static_property_ce(lsz_lib_autoregister_ce, ZEND_STRL("path"), &path);
	zephir_read_static_property_ce(&_0, lsz_lib_autoregister_ce, SL("_default"), PH_NOISY_CC | PH_READONLY);
	if (Z_TYPE_P(&_0) == IS_NULL) {
		ZEPHIR_INIT_VAR(&_1$$3);
		object_init_ex(&_1$$3, lsz_lib_autoregister_ce);
		ZEPHIR_CALL_METHOD(NULL, &_1$$3, "__construct", NULL, 1);
		zephir_check_call_status();
		zephir_update_static_property_ce(lsz_lib_autoregister_ce, ZEND_STRL("_default"), &_1$$3);
	}
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Lsz_Lib_AutoRegister, __construct)
{
	zval _1;
	zval _0, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_2 = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 2, 0);
	zephir_array_fast_append(&_0, this_ptr);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "auto_controller");
	zephir_array_fast_append(&_0, &_1);
	ZEPHIR_CALL_FUNCTION(NULL, "spl_autoload_register", &_2, 2, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	zephir_create_array(&_3, 2, 0);
	zephir_array_fast_append(&_3, this_ptr);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "auto_model");
	zephir_array_fast_append(&_3, &_1);
	ZEPHIR_CALL_FUNCTION(NULL, "spl_autoload_register", &_2, 2, &_3);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Lsz_Lib_AutoRegister, auto_controller)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *class_name_param = NULL, _0, _1;
	zval class_name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&class_name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(class_name)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &class_name_param);
	zephir_get_strval(&class_name, class_name_param);


	ZEPHIR_OBS_VAR(&_0);
	zephir_read_static_property_ce(&_0, lsz_lib_autoregister_ce, SL("path"), PH_NOISY_CC);
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_CONCAT_VSV(&_1, &_0, "/app/controllers/", &class_name);
	ZEPHIR_CALL_FUNCTION(NULL, "spl_autoload", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Lsz_Lib_AutoRegister, auto_model)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *class_name_param = NULL, _0, _1;
	zval class_name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&class_name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(class_name)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &class_name_param);
	zephir_get_strval(&class_name, class_name_param);


	ZEPHIR_OBS_VAR(&_0);
	zephir_read_static_property_ce(&_0, lsz_lib_autoregister_ce, SL("path"), PH_NOISY_CC);
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_CONCAT_VSV(&_1, &_0, "/app/models/", &class_name);
	ZEPHIR_CALL_FUNCTION(NULL, "spl_autoload", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();
}

