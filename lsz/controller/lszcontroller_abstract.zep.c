
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


ZEPHIR_INIT_CLASS(Lsz_Controller_LszController_Abstract)
{
	ZEPHIR_REGISTER_CLASS(Lsz\\Controller, LszController_Abstract, lsz, controller_lszcontroller_abstract, lsz_controller_lszcontroller_abstract_method_entry, ZEND_ACC_EXPLICIT_ABSTRACT_CLASS);

	return SUCCESS;
}

PHP_METHOD(Lsz_Controller_LszController_Abstract, __construct)
{
	zval *this_ptr = getThis();



}

PHP_METHOD(Lsz_Controller_LszController_Abstract, init)
{
}

