
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


ZEPHIR_INIT_CLASS(Lsz_Controller_LszController)
{
	ZEPHIR_REGISTER_CLASS(Lsz\\Controller, LszController, lsz, controller_lszcontroller, lsz_controller_lszcontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Lsz_Controller_LszController, __construct)
{
	zval *this_ptr = getThis();



}

PHP_METHOD(Lsz_Controller_LszController, change)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *replace_param = NULL;
	zval replace;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&replace);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(replace)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &replace_param);
	zephir_get_strval(&replace, replace_param);


	RETURN_CTOR(&replace);
}

