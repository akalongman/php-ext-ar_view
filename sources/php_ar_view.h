#ifndef PHP_AR_VIEW_H
#define PHP_AR_VIEW_H 1

#define PHP_AR_VIEW_VERSION "1.0"
#define PHP_AR_VIEW_EXTNAME "ar_view"

PHP_FUNCTION(ar_view);

extern zend_module_entry ar_view_module_entry;
#define phpext_ar_view_ptr &ar_view_module_entry

#endif
