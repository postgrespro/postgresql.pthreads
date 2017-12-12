/*-------------------------------------------------------------------------
 *
 * postmaster.h
 *	  Exports from postmaster/postmaster.c.
 *
 * Portions Copyright (c) 1996-2017, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/postmaster/postmaster.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef _POSTMASTER_H
#define _POSTMASTER_H

/* GUC options */
extern session_local bool EnableSSL;
extern session_local int	ReservedBackends;
extern session_local int	PostPortNumber;
extern session_local int	Unix_socket_permissions;
extern session_local char *Unix_socket_group;
extern session_local char *Unix_socket_directories;
extern session_local char *ListenAddresses;
extern session_local bool ClientAuthInProgress;
extern session_local int	PreAuthDelay;
extern session_local int	AuthenticationTimeout;
extern session_local bool Log_connections;
extern session_local bool log_hostname;
extern session_local bool enable_bonjour;
extern session_local char *bonjour_name;
extern session_local bool restart_after_crash;
extern session_local int  thread_stack_size;

#ifdef WIN32
extern session_local HANDLE PostmasterHandle;
#else
extern session_local int	postmaster_alive_fds[2];

/*
 * Constants that represent which of postmaster_alive_fds is held by
 * postmaster, and which is used in children to check for postmaster death.
 */
#define POSTMASTER_FD_WATCH		0	/* used in children to check for
									 * postmaster death */
#define POSTMASTER_FD_OWN		1	/* kept open by postmaster only */
#endif

extern session_local const char *progname;

extern void PostmasterMain(int argc, char *argv[]) pg_attribute_noreturn();
extern void ClosePostmasterPorts(bool am_syslogger);

extern int	MaxLivePostmasterChildren(void);

extern int	GetNumShmemAttachedBgworkers(void);
extern bool PostmasterMarkPIDForWorkerNotify(pthread_t);

#ifdef EXEC_BACKEND
extern pthread_t postmaster_forkexec(int argc, char *argv[]);
extern void SubPostmasterMain(int argc, char *argv[]) pg_attribute_noreturn();

extern Size ShmemBackendArraySize(void);
extern void ShmemBackendArrayAllocation(void);
#endif

/*
 * Note: MAX_BACKENDS is limited to 2^18-1 because that's the width reserved
 * for buffer references in buf_internals.h.  This limitation could be lifted
 * by using a 64bit state; but it's unlikely to be worthwhile as 2^18-1
 * backends exceed currently realistic configurations. Even if that limitation
 * were removed, we still could not a) exceed 2^23-1 because inval.c stores
 * the backend ID as a 3-byte signed integer, b) INT_MAX/4 because some places
 * compute 4*MaxBackends without any overflow check.  This is rechecked in the
 * relevant GUC check hooks and in RegisterBackgroundWorker().
 */
#define MAX_BACKENDS	0x3FFFF

typedef void*(*thread_proc_t)(void* arg);

extern bool create_thread(pthread_t* t, thread_proc_t thread_proc, void* port);


#endif							/* _POSTMASTER_H */
