
extern zend_class_entry *lsz_controller_lszcontroller_abstract_ce;

ZEPHIR_INIT_CLASS(Lsz_Controller_LszController_Abstract);

PHP_METHOD(Lsz_Controller_LszController_Abstract, __construct);
PHP_METHOD(Lsz_Controller_LszController_Abstract, init);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lsz_controller_lszcontroller_abstract___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lsz_controller_lszcontroller_abstract_init, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lsz_controller_lszcontroller_abstract_method_entry) {
#if PHP_VERSION_ID >= 80000
	PHP_ME(Lsz_Controller_LszController_Abstract, __construct, arginfo_lsz_controller_lszcontroller_abstract___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
#else
	PHP_ME(Lsz_Controller_LszController_Abstract, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Lsz_Controller_LszController_Abstract, init, arginfo_lsz_controller_lszcontroller_abstract_init, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
#else
	PHP_ME(Lsz_Controller_LszController_Abstract, init, NULL, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
#endif
	PHP_FE_END
};
