#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "php_ar_view.h"

ZEND_BEGIN_ARG_INFO_EX(arginfo_ar_view, 0, 0, 1)
        ZEND_ARG_INFO(0, var)
ZEND_END_ARG_INFO()


static function_entry ar_view_functions[] = {
  PHP_FE(ar_view, arginfo_ar_view)
  {NULL, NULL, NULL}
};

zend_module_entry ar_view_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
  STANDARD_MODULE_HEADER,
#endif
  PHP_AR_VIEW_EXTNAME,
  ar_view_functions,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
#if ZEND_MODULE_API_NO >= 20010901
  PHP_AR_VIEW_VERSION,
#endif
  STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_AR_VIEW
ZEND_GET_MODULE(ar_view)
#endif

PHP_FUNCTION(ar_view)
{
  zval *var;
  zend_bool do_return = 0;
  if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z|b", &var, &do_return) == FAILURE) {
    RETURN_FALSE;
  }  
  php_printf("<pre>\n", 0);
  zend_print_zval_r(var, 0 TSRMLS_CC);
  php_printf("</pre>", 0);
  RETURN_TRUE;
}
