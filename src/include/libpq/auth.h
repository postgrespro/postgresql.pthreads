/*-------------------------------------------------------------------------
 *
 * auth.h
 *	  Definitions for network authentication routines
 *
 *
 * Portions Copyright (c) 1996-2017, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/libpq/auth.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef AUTH_H
#define AUTH_H

#include "libpq/libpq-be.h"

extern session_local char *pg_krb_server_keyfile;
extern session_local bool pg_krb_caseins_users;
extern session_local char *pg_krb_realm;

extern void ClientAuthentication(Port *port);

/* Hook for plugins to get control in ClientAuthentication() */
typedef void (*ClientAuthentication_hook_type) (Port *, int);
extern session_local PGDLLIMPORT ClientAuthentication_hook_type ClientAuthentication_hook;

#endif							/* AUTH_H */
