
extern zend_class_entry *lsz_lib_autoregister_ce;

ZEPHIR_INIT_CLASS(Lsz_Lib_AutoRegister);

PHP_METHOD(Lsz_Lib_AutoRegister, init);
PHP_METHOD(Lsz_Lib_AutoRegister, __construct);
PHP_METHOD(Lsz_Lib_AutoRegister, auto_controller);
PHP_METHOD(Lsz_Lib_AutoRegister, auto_model);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_lsz_lib_autoregister_init, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lsz_lib_autoregister___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_lsz_lib_autoregister_auto_controller, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, class_name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_lsz_lib_autoregister_auto_model, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, class_name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lsz_lib_autoregister_method_entry) {
	PHP_ME(Lsz_Lib_AutoRegister, init, arginfo_lsz_lib_autoregister_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
#if PHP_VERSION_ID >= 80000
	PHP_ME(Lsz_Lib_AutoRegister, __construct, arginfo_lsz_lib_autoregister___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
#else
	PHP_ME(Lsz_Lib_AutoRegister, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
#endif
	PHP_ME(Lsz_Lib_AutoRegister, auto_controller, arginfo_lsz_lib_autoregister_auto_controller, ZEND_ACC_PUBLIC)
	PHP_ME(Lsz_Lib_AutoRegister, auto_model, arginfo_lsz_lib_autoregister_auto_model, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
