
extern zend_class_entry *lsz_zimuge_ce;

ZEPHIR_INIT_CLASS(Lsz_Zimuge);

PHP_METHOD(Lsz_Zimuge, __construct);
PHP_METHOD(Lsz_Zimuge, run);
PHP_METHOD(Lsz_Zimuge, parseRoute);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lsz_zimuge___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, app_path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_lsz_zimuge_run, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lsz_zimuge_parseroute, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lsz_zimuge_method_entry) {
	PHP_ME(Lsz_Zimuge, __construct, arginfo_lsz_zimuge___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lsz_Zimuge, run, arginfo_lsz_zimuge_run, ZEND_ACC_PUBLIC)
#if PHP_VERSION_ID >= 80000
	PHP_ME(Lsz_Zimuge, parseRoute, arginfo_lsz_zimuge_parseroute, ZEND_ACC_PRIVATE)
#else
	PHP_ME(Lsz_Zimuge, parseRoute, NULL, ZEND_ACC_PRIVATE)
#endif
	PHP_FE_END
};
