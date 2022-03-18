
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
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/array.h"
#include "kernel/string.h"
#include "kernel/variables.h"


ZEPHIR_INIT_CLASS(Lsz_Lsz)
{
	ZEPHIR_REGISTER_CLASS(Lsz, Lsz, lsz, lsz, lsz_lsz_method_entry, ZEND_ACC_FINAL_CLASS);

	return SUCCESS;
}

PHP_METHOD(Lsz_Lsz, __construct)
{
	zval *this_ptr = getThis();



}

PHP_METHOD(Lsz_Lsz, run)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval _SERVER, con, mo, routePath, list_path, _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_SERVER);
	ZVAL_UNDEF(&con);
	ZVAL_UNDEF(&mo);
	ZVAL_UNDEF(&routePath);
	ZVAL_UNDEF(&list_path);
	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();
	zephir_get_global(&_SERVER, SL("_SERVER"));

	ZEPHIR_INIT_VAR(&con);
	object_init_ex(&con, lsz_controller_lszcontroller_ce);
	ZEPHIR_CALL_METHOD(NULL, &con, "__construct", NULL, 1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&mo);
	object_init_ex(&mo, lsz_model_lszmodel_ce);
	ZEPHIR_CALL_METHOD(NULL, &mo, "__construct", NULL, 2);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&routePath);
	zephir_array_fetch_string(&routePath, &_SERVER, SL("REQUEST_URI"), PH_NOISY, "lsz/lsz.zep", 18);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "\\");
	ZEPHIR_INIT_VAR(&list_path);
	zephir_fast_explode(&list_path, &_0, &routePath, LONG_MAX);
	zephir_var_dump(&list_path);
	ZEPHIR_MM_RESTORE();
}

