
extern zend_class_entry *lsz_model_lszmodel_ce;

ZEPHIR_INIT_CLASS(Lsz_Model_LszModel);

PHP_METHOD(Lsz_Model_LszModel, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lsz_model_lszmodel___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lsz_model_lszmodel_method_entry) {
#if PHP_VERSION_ID >= 80000
	PHP_ME(Lsz_Model_LszModel, __construct, arginfo_lsz_model_lszmodel___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
#else
	PHP_ME(Lsz_Model_LszModel, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
#endif
	PHP_FE_END
};
