/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

#define LOCALEDIR "/usr/share/locale"
#define _GL_UNUSED __attribute__ ((__unused__))

/* Make sure we don't use old features in code. */
#define GNUTLS_COMPAT_H 1

/* Hard-code for src/cfg/. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Hard-code for src/cfg/. */
#define HAVE_ERRNO_H 1

/* Hard-code for src/cfg/. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Hard-code for src/cfg/. */
#define HAVE_LIMITS_H 1

/* Hard-code for src/cfg/. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `scm_gc_malloc_pointerless' function. */
/* #undef HAVE_SCM_GC_MALLOC_POINTERLESS */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if the system has the type `uint'. */
#define HAVE_UINT 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "gnutls"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-gnutls@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GnuTLS"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GnuTLS 2.10.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gnutls"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.10.5"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "2.10.5"

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

#ifndef GNUTLS_POINTER_TO_INT 
#define GNUTLS_POINTER_TO_INT(_) ((int) GNUTLS_POINTER_TO_INT_CAST (_))
#endif
#ifndef GNUTLS_POINTER_TO_INT_CAST
#define GNUTLS_POINTER_TO_INT_CAST(_) (_)
#endif

#ifdef WIN32
#define restrict const
#endif
