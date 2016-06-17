/* confdefs.h */
#define PACKAGE_NAME "cava"
#define PACKAGE_TARNAME "cava"
#define PACKAGE_VERSION "0.4.1-18-g94369dc-dirty"
#define PACKAGE_STRING "cava 0.4.1-18-g94369dc-dirty"
#define PACKAGE_BUGREPORT "karl@stavestrand.no"
#define PACKAGE_URL ""
#define PACKAGE "cava"
#define VERSION "0.4.1-18-g94369dc-dirty"
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"
#define HAVE_PTHREAD_H 1
/* end confdefs.h.  */

/* Override any GCC internal prototype to avoid an error.
   Use char because int might match the return type of a GCC
   builtin and then its argument prototype would still apply.  */
#ifdef __cplusplus
extern "C"
#endif
char fftw_execute ();
int
main ()
{
return fftw_execute ();
  ;
  return 0;
}
