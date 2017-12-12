/*-------------------------------------------------------------------------
 *
 * globals.c
 *	  global variable declarations
 *
 * Portions Copyright (c) 1996-2017, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  src/backend/utils/init/globals.c
 *
 * NOTES
 *	  Globals used all over the place should be declared here and not
 *	  in other modules.
 *
 *-------------------------------------------------------------------------
 */
#include "postgres.h"

#include "libpq/libpq-be.h"
#include "libpq/pqcomm.h"
#include "miscadmin.h"
#include "storage/backendid.h"


session_local ProtocolVersion FrontendProtocol;

volatile session_local bool InterruptPending = false;
volatile session_local bool QueryCancelPending = false;
volatile session_local bool ProcDiePending = false;
volatile session_local bool ClientConnectionLost = false;
volatile session_local bool IdleInTransactionSessionTimeoutPending = false;
volatile session_local sig_atomic_t ConfigReloadPending = false;
volatile session_local uint32 InterruptHoldoffCount = 0;
volatile session_local uint32 QueryCancelHoldoffCount = 0;
volatile session_local uint32 CritSectionCount = 0;

session_local pthread_t	MyProcPid;
session_local pg_time_t	MyStartTime;
session_local struct Port *MyProcPort;
session_local int32		MyCancelKey;
session_local int		MyPMChildSlot;

/*
 * MyLatch points to the latch that should be used for signal handling by the
 * current process. It will either point to a process local latch if the
 * current process does not have a PGPROC entry in that moment, or to
 * PGPROC->procLatch if it has. Thus it can always be used in signal handlers,
 * without checking for its existence.
 */
session_local struct Latch *MyLatch;

/*
 * DataDir is the absolute path to the top level of the PGDATA directory tree.
 * Except during early startup, this is also the server's working directory;
 * most code therefore can simply use relative paths and not reference DataDir
 * explicitly.
 */
session_local char	   *DataDir = NULL;

session_local char		OutputFileName[MAXPGPATH];	/* debugging output file */

session_local char		my_exec_path[MAXPGPATH];	/* full path to my executable */
session_local char		pkglib_path[MAXPGPATH]; /* full path to lib directory */

#ifdef EXEC_BACKEND
char		postgres_exec_path[MAXPGPATH];	/* full path to backend */

/* note: currently this is not valid in backend processes */
#endif

session_local BackendId	MyBackendId = InvalidBackendId;

session_local BackendId	ParallelMasterBackendId = InvalidBackendId;

session_local Oid			MyDatabaseId = InvalidOid;

session_local Oid			MyDatabaseTableSpace = InvalidOid;

/*
 * DatabasePath is the path (relative to DataDir) of my database's
 * primary directory, ie, its directory in the default tablespace.
 */
session_local char	   *DatabasePath = NULL;

pthread_t	PostmasterPid = 0;

/*
 * IsPostmasterEnvironment is true in a postmaster process and any postmaster
 * child process; it is false in a standalone process (bootstrap or
 * standalone backend).  IsUnderPostmaster is true in postmaster child
 * processes.  Note that "child process" includes all children, not only
 * regular backends.  These should be set correctly as early as possible
 * in the execution of a process, so that error handling will do the right
 * things if an error should occur during process initialization.
 *
 * These are initialized for the bootstrap/standalone case.
 */
session_local bool		IsPostmaster = false;
session_local bool		IsPostmasterEnvironment = false;
session_local bool		IsUnderPostmaster = false;
session_local bool		IsBinaryUpgrade = false;
session_local bool		IsBackgroundWorker = false;

session_local bool		ExitOnAnyError = false;

session_local int			DateStyle = USE_ISO_DATES;
session_local int			DateOrder = DATEORDER_MDY;
session_local int			IntervalStyle = INTSTYLE_POSTGRES;

session_local bool		enableFsync = true;
session_local bool		allowSystemTableMods = false;
session_local int			work_mem = 1024;
session_local int			maintenance_work_mem = 16384;

/*
 * Primary determinants of sizes of shared-memory structures.
 *
 * MaxBackends is computed by PostmasterMain after modules have had a chance to
 * register background workers.
 */
session_local int			NBuffers = 1000;
session_local int			MaxConnections = 90;
session_local int			max_worker_processes = 8;
session_local int			max_parallel_workers = 8;
session_local int			MaxBackends = 0;

session_local int			VacuumCostPageHit = 1;	/* GUC parameters for vacuum */
session_local int			VacuumCostPageMiss = 10;
session_local int			VacuumCostPageDirty = 20;
session_local int			VacuumCostLimit = 200;
session_local int			VacuumCostDelay = 0;

session_local int			VacuumPageHit = 0;
session_local int			VacuumPageMiss = 0;
session_local int			VacuumPageDirty = 0;

session_local int			VacuumCostBalance = 0;	/* working state for vacuum */
session_local bool		VacuumCostActive = false;
