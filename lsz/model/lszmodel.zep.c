
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


ZEPHIR_INIT_CLASS(Lsz_Model_LszModel)
{
	ZEPHIR_REGISTER_CLASS(Lsz\\Model, LszModel, lsz, model_lszmodel, lsz_model_lszmodel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Lsz_Model_LszModel, __construct)
{
	zval *this_ptr = getThis();



}

