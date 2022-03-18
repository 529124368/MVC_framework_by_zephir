
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/array.h"
#include "kernel/string.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Lsz_Zimuge)
{
	ZEPHIR_REGISTER_CLASS(Lsz, Zimuge, lsz, zimuge, lsz_zimuge_method_entry, ZEND_ACC_FINAL_CLASS);

	zend_declare_property_null(lsz_zimuge_ce, SL("path"), ZEND_ACC_PRIVATE);
	return SUCCESS;
}

/**
 *  构造函数
 **/
PHP_METHOD(Lsz_Zimuge, __construct)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *app_path_param = NULL;
	zval app_path;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&app_path);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(app_path)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &app_path_param);
	if (!app_path_param) {
		ZEPHIR_INIT_VAR(&app_path);
		ZVAL_STRING(&app_path, "");
	} else {
		zephir_get_strval(&app_path, app_path_param);
	}


	zephir_update_property_zval(this_ptr, ZEND_STRL("path"), &app_path);
	ZEPHIR_CALL_CE_STATIC(NULL, lsz_lib_autoregister_ce, "init", &_0, 0, &app_path);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();
}

/**
 *  启动
 **/
PHP_METHOD(Lsz_Zimuge, run)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();



	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(NULL, this_ptr, "parseroute", NULL, 4);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();
}

/**
 * 解析路由并且实例化
 **/
PHP_METHOD(Lsz_Zimuge, parseRoute)
{
	zval _6$$5, _10$$6;
	zend_class_entry *_5$$5, *_9$$6;
	zend_bool _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval _SERVER, routePath, class_name, method_name, _0, _1, ob$$5, _4$$5, _7$$5, ob$$6, _8$$6, _11$$6, _12$$6;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_SERVER);
	ZVAL_UNDEF(&routePath);
	ZVAL_UNDEF(&class_name);
	ZVAL_UNDEF(&method_name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&ob$$5);
	ZVAL_UNDEF(&_4$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&ob$$6);
	ZVAL_UNDEF(&_8$$6);
	ZVAL_UNDEF(&_11$$6);
	ZVAL_UNDEF(&_12$$6);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_10$$6);


	ZEPHIR_MM_GROW();
	zephir_get_global(&_SERVER, SL("_SERVER"));

	zephir_array_fetch_string(&_0, &_SERVER, SL("REQUEST_URI"), PH_NOISY | PH_READONLY, "lsz/zimuge.zep", 32);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "/");
	ZEPHIR_INIT_VAR(&routePath);
	zephir_fast_explode(&routePath, &_1, &_0, LONG_MAX);
	if (zephir_fast_count_int(&routePath) >= 3) {
		ZEPHIR_OBS_VAR(&class_name);
		zephir_array_fetch_long(&class_name, &routePath, 1, PH_NOISY, "lsz/zimuge.zep", 34);
		ZEPHIR_OBS_VAR(&method_name);
		zephir_array_fetch_long(&method_name, &routePath, 2, PH_NOISY, "lsz/zimuge.zep", 35);
	} else {
		ZEPHIR_OBS_NVAR(&class_name);
		zephir_array_fetch_long(&class_name, &routePath, 1, PH_NOISY, "lsz/zimuge.zep", 37);
		ZEPHIR_INIT_NVAR(&method_name);
		ZVAL_STRING(&method_name, "");
	}
	_2 = !ZEPHIR_IS_STRING(&class_name, "");
	if (_2) {
		_2 = ZEPHIR_IS_STRING(&method_name, "");
	}
	_3 = !ZEPHIR_IS_STRING(&class_name, "");
	if (_3) {
		_3 = !ZEPHIR_IS_STRING(&method_name, "");
	}
	if (_2) {
		ZEPHIR_INIT_VAR(&ob$$5);
		zephir_fetch_safe_class(&_4$$5, &class_name);
		_5$$5 = zephir_fetch_class_str_ex(Z_STRVAL_P(&_4$$5), Z_STRLEN_P(&_4$$5), ZEND_FETCH_CLASS_AUTO);
		if(!_5$$5) {
			RETURN_MM_NULL();
		}
		object_init_ex(&ob$$5, _5$$5);
		if (zephir_has_constructor(&ob$$5)) {
			ZEPHIR_CALL_METHOD(NULL, &ob$$5, "__construct", NULL, 0);
			zephir_check_call_status();
		}

		ZEPHIR_INIT_VAR(&_6$$5);
		zephir_create_array(&_6$$5, 2, 0);
		zephir_array_fast_append(&_6$$5, &ob$$5);
		ZEPHIR_INIT_VAR(&_7$$5);
		ZVAL_STRING(&_7$$5, "indexAction");
		zephir_array_fast_append(&_6$$5, &_7$$5);
		ZEPHIR_INIT_NVAR(&_7$$5);
		array_init(&_7$$5);
		ZEPHIR_CALL_FUNCTION(NULL, "call_user_func", NULL, 5, &_6$$5, &_7$$5);
		zephir_check_call_status();
	} else if (_3) {
		ZEPHIR_INIT_VAR(&ob$$6);
		zephir_fetch_safe_class(&_8$$6, &class_name);
		_9$$6 = zephir_fetch_class_str_ex(Z_STRVAL_P(&_8$$6), Z_STRLEN_P(&_8$$6), ZEND_FETCH_CLASS_AUTO);
		if(!_9$$6) {
			RETURN_MM_NULL();
		}
		object_init_ex(&ob$$6, _9$$6);
		if (zephir_has_constructor(&ob$$6)) {
			ZEPHIR_CALL_METHOD(NULL, &ob$$6, "__construct", NULL, 0);
			zephir_check_call_status();
		}

		ZEPHIR_INIT_VAR(&_10$$6);
		zephir_create_array(&_10$$6, 2, 0);
		zephir_array_fast_append(&_10$$6, &ob$$6);
		ZEPHIR_INIT_VAR(&_11$$6);
		ZEPHIR_CONCAT_VS(&_11$$6, &method_name, "Action");
		zephir_array_fast_append(&_10$$6, &_11$$6);
		ZEPHIR_INIT_VAR(&_12$$6);
		array_init(&_12$$6);
		ZEPHIR_CALL_FUNCTION(NULL, "call_user_func", NULL, 5, &_10$$6, &_12$$6);
		zephir_check_call_status();
	}
	ZEPHIR_MM_RESTORE();
}

