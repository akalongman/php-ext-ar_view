PHP_ARG_ENABLE(ar_view, whether to enable ar_view support,
[ --enable-ar_view Enable ar_view support])

if test "$PHP_AR_VIEW" = "yes"; then
AC_DEFINE(HAVE_AR_VIEW, 1, [Whether you have ar_view])
PHP_NEW_EXTENSION(ar_view, ar_view.c, $ext_shared)
fi
