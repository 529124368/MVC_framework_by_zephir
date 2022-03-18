
extern zend_class_entry *lsz_controller_lszcontroller_ce;

ZEPHIR_INIT_CLASS(Lsz_Controller_LszController);

PHP_METHOD(Lsz_Controller_LszController, __construct);
PHP_METHOD(Lsz_Controller_LszController, change);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lsz_controller_lszcontroller___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_lsz_controller_lszcontroller_change, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, replace, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lsz_controller_lszcontroller_method_entry) {
#if PHP_VERSION_ID >= 80000
	PHP_ME(Lsz_Controller_LszController, __construct, arginfo_lsz_controller_lszcontroller___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
#else
	PHP_ME(Lsz_Controller_LszController, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
#endif
	PHP_ME(Lsz_Controller_LszController, change, arginfo_lsz_controller_lszcontroller_change, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
