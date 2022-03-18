
extern zend_class_entry *lsz_lsz_ce;

ZEPHIR_INIT_CLASS(Lsz_Lsz);

PHP_METHOD(Lsz_Lsz, __construct);
PHP_METHOD(Lsz_Lsz, run);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lsz_lsz___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_lsz_lsz_run, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lsz_lsz_method_entry) {
#if PHP_VERSION_ID >= 80000
	PHP_ME(Lsz_Lsz, __construct, arginfo_lsz_lsz___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
#else
	PHP_ME(Lsz_Lsz, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
#endif
	PHP_ME(Lsz_Lsz, run, arginfo_lsz_lsz_run, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
