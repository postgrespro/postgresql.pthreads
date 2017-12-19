/*
 * Portions Copyright (c) 1987, 1993, 1994
 * The Regents of the University of California.  All rights reserved.
 *
 * Portions Copyright (c) 2003-2017, PostgreSQL Global Development Group
 *
 * src/include/pg_getopt.h
 */
#ifndef PG_GETOPT_H
#define PG_GETOPT_H

/* POSIX says getopt() is provided by unistd.h */
#include <unistd.h>

/* rely on the system's getopt.h if present */
#ifdef HAVE_GETOPT_H
#include <getopt.h>
#endif

extern session_local char *pg_optarg;
extern session_local int	pg_optind;
extern session_local int	pg_opterr;
extern session_local int	pg_optopt;

extern int	pg_getopt(int nargc, char *const *nargv, const char *ostr);


/*
 * If we have <getopt.h>, assume it declares these variables, else do that
 * ourselves.  (We used to just declare them unconditionally, but Cygwin
 * doesn't like that.)
 */
#ifndef HAVE_GETOPT_H

#define optarg pg_optarg
#define optind pg_optind
#define opterr pg_opterr
#define optopt pg_optopt

#endif							/* HAVE_GETOPT_H */

#ifndef HAVE_GETOPT
#define getopt(argc,argv,optstring) pg_getopt(argc,argv,optstring)
#endif

#endif							/* PG_GETOPT_H */
