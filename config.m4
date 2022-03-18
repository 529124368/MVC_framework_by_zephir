PHP_ARG_ENABLE(lsz, whether to enable lsz, [ --enable-lsz   Enable Lsz])

if test "$PHP_LSZ" = "yes"; then

	

	if ! test "x" = "x"; then
		PHP_EVAL_LIBLINE(, LSZ_SHARED_LIBADD)
	fi

	AC_DEFINE(HAVE_LSZ, 1, [Whether you have Lsz])
	lsz_sources="lsz.c kernel/main.c kernel/memory.c kernel/exception.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/string.c kernel/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/math.c kernel/concat.c kernel/variables.c kernel/filter.c kernel/iterator.c kernel/time.c kernel/exit.c lsz/controller/lszcontroller_abstract.zep.c
	lsz/lib/autoregister.zep.c
	lsz/model/lszmodel_abstract.zep.c
	lsz/zimuge.zep.c "
	PHP_NEW_EXTENSION(lsz, $lsz_sources, $ext_shared,, )
	PHP_ADD_BUILD_DIR([$ext_builddir/kernel/])
	for dir in "lsz lsz/controller lsz/lib lsz/model"; do
		PHP_ADD_BUILD_DIR([$ext_builddir/$dir])
	done
	PHP_SUBST(LSZ_SHARED_LIBADD)

	old_CPPFLAGS=$CPPFLAGS
	CPPFLAGS="$CPPFLAGS $INCLUDES"

	AC_CHECK_DECL(
		[HAVE_BUNDLED_PCRE],
		[
			AC_CHECK_HEADERS(
				[ext/pcre/php_pcre.h],
				[
					PHP_ADD_EXTENSION_DEP([lsz], [pcre])
					AC_DEFINE([ZEPHIR_USE_PHP_PCRE], [1], [Whether PHP pcre extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	AC_CHECK_DECL(
		[HAVE_JSON],
		[
			AC_CHECK_HEADERS(
				[ext/json/php_json.h],
				[
					PHP_ADD_EXTENSION_DEP([lsz], [json])
					AC_DEFINE([ZEPHIR_USE_PHP_JSON], [1], [Whether PHP json extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	CPPFLAGS=$old_CPPFLAGS

	PHP_INSTALL_HEADERS([ext/lsz], [php_LSZ.h])

fi
