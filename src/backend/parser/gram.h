/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_BASE_YY_GRAM_H_INCLUDED
# define YY_BASE_YY_GRAM_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    FCONST = 259,
    SCONST = 260,
    BCONST = 261,
    XCONST = 262,
    Op = 263,
    ICONST = 264,
    PARAM = 265,
    TYPECAST = 266,
    DOT_DOT = 267,
    COLON_EQUALS = 268,
    EQUALS_GREATER = 269,
    LESS_EQUALS = 270,
    GREATER_EQUALS = 271,
    NOT_EQUALS = 272,
    ABORT_P = 273,
    ABSOLUTE_P = 274,
    ACCESS = 275,
    ACTION = 276,
    ADD_P = 277,
    ADMIN = 278,
    AFTER = 279,
    AGGREGATE = 280,
    ALL = 281,
    ALSO = 282,
    ALTER = 283,
    ALWAYS = 284,
    ANALYSE = 285,
    ANALYZE = 286,
    AND = 287,
    ANY = 288,
    ARRAY = 289,
    AS = 290,
    ASC = 291,
    ASSERTION = 292,
    ASSIGNMENT = 293,
    ASYMMETRIC = 294,
    AT = 295,
    ATTACH = 296,
    ATTRIBUTE = 297,
    AUTHORIZATION = 298,
    BACKWARD = 299,
    BEFORE = 300,
    BEGIN_P = 301,
    BETWEEN = 302,
    BIGINT = 303,
    BINARY = 304,
    BIT = 305,
    BOOLEAN_P = 306,
    BOTH = 307,
    BY = 308,
    CACHE = 309,
    CALLED = 310,
    CASCADE = 311,
    CASCADED = 312,
    CASE = 313,
    CAST = 314,
    CATALOG_P = 315,
    CHAIN = 316,
    CHAR_P = 317,
    CHARACTER = 318,
    CHARACTERISTICS = 319,
    CHECK = 320,
    CHECKPOINT = 321,
    CLASS = 322,
    CLOSE = 323,
    CLUSTER = 324,
    COALESCE = 325,
    COLLATE = 326,
    COLLATION = 327,
    COLUMN = 328,
    COLUMNS = 329,
    COMMENT = 330,
    COMMENTS = 331,
    COMMIT = 332,
    COMMITTED = 333,
    CONCURRENTLY = 334,
    CONFIGURATION = 335,
    CONFLICT = 336,
    CONNECTION = 337,
    CONSTRAINT = 338,
    CONSTRAINTS = 339,
    CONTENT_P = 340,
    CONTINUE_P = 341,
    CONVERSION_P = 342,
    COPY = 343,
    COST = 344,
    CREATE = 345,
    CROSS = 346,
    CSV = 347,
    CUBE = 348,
    CURRENT_P = 349,
    CURRENT_CATALOG = 350,
    CURRENT_DATE = 351,
    CURRENT_ROLE = 352,
    CURRENT_SCHEMA = 353,
    CURRENT_TIME = 354,
    CURRENT_TIMESTAMP = 355,
    CURRENT_USER = 356,
    CURSOR = 357,
    CYCLE = 358,
    DATA_P = 359,
    DATABASE = 360,
    DAY_P = 361,
    DEALLOCATE = 362,
    DEC = 363,
    DECIMAL_P = 364,
    DECLARE = 365,
    DEFAULT = 366,
    DEFAULTS = 367,
    DEFERRABLE = 368,
    DEFERRED = 369,
    DEFINER = 370,
    DELETE_P = 371,
    DELIMITER = 372,
    DELIMITERS = 373,
    DEPENDS = 374,
    DESC = 375,
    DETACH = 376,
    DICTIONARY = 377,
    DISABLE_P = 378,
    DISCARD = 379,
    DISTINCT = 380,
    DO = 381,
    DOCUMENT_P = 382,
    DOMAIN_P = 383,
    DOUBLE_P = 384,
    DROP = 385,
    EACH = 386,
    ELSE = 387,
    ENABLE_P = 388,
    ENCODING = 389,
    ENCRYPTED = 390,
    END_P = 391,
    ENUM_P = 392,
    ESCAPE = 393,
    EVENT = 394,
    EXCEPT = 395,
    EXCLUDE = 396,
    EXCLUDING = 397,
    EXCLUSIVE = 398,
    EXECUTE = 399,
    EXISTS = 400,
    EXPLAIN = 401,
    EXTENSION = 402,
    EXTERNAL = 403,
    EXTRACT = 404,
    FALSE_P = 405,
    FAMILY = 406,
    FETCH = 407,
    FILTER = 408,
    FIRST_P = 409,
    FLOAT_P = 410,
    FOLLOWING = 411,
    FOR = 412,
    FORCE = 413,
    FOREIGN = 414,
    FORWARD = 415,
    FREEZE = 416,
    FROM = 417,
    FULL = 418,
    FUNCTION = 419,
    FUNCTIONS = 420,
    GENERATED = 421,
    GLOBAL = 422,
    GRANT = 423,
    GRANTED = 424,
    GREATEST = 425,
    GROUP_P = 426,
    GROUPING = 427,
    HANDLER = 428,
    HAVING = 429,
    HEADER_P = 430,
    HOLD = 431,
    HOUR_P = 432,
    IDENTITY_P = 433,
    IF_P = 434,
    ILIKE = 435,
    IMMEDIATE = 436,
    IMMUTABLE = 437,
    IMPLICIT_P = 438,
    IMPORT_P = 439,
    IN_P = 440,
    INCLUDING = 441,
    INCREMENT = 442,
    INDEX = 443,
    INDEXES = 444,
    INHERIT = 445,
    INHERITS = 446,
    INITIALLY = 447,
    INLINE_P = 448,
    INNER_P = 449,
    INOUT = 450,
    INPUT_P = 451,
    INSENSITIVE = 452,
    INSERT = 453,
    INSTEAD = 454,
    INT_P = 455,
    INTEGER = 456,
    INTERSECT = 457,
    INTERVAL = 458,
    INTO = 459,
    INVOKER = 460,
    IS = 461,
    ISNULL = 462,
    ISOLATION = 463,
    JOIN = 464,
    KEY = 465,
    LABEL = 466,
    LANGUAGE = 467,
    LARGE_P = 468,
    LAST_P = 469,
    LATERAL_P = 470,
    LEADING = 471,
    LEAKPROOF = 472,
    LEAST = 473,
    LEFT = 474,
    LEVEL = 475,
    LIKE = 476,
    LIMIT = 477,
    LISTEN = 478,
    LOAD = 479,
    LOCAL = 480,
    LOCALTIME = 481,
    LOCALTIMESTAMP = 482,
    LOCATION = 483,
    LOCK_P = 484,
    LOCKED = 485,
    LOGGED = 486,
    MAPPING = 487,
    MATCH = 488,
    MATERIALIZED = 489,
    MAXVALUE = 490,
    METHOD = 491,
    MINUTE_P = 492,
    MINVALUE = 493,
    MODE = 494,
    MONTH_P = 495,
    MOVE = 496,
    NAME_P = 497,
    NAMES = 498,
    NATIONAL = 499,
    NATURAL = 500,
    NCHAR = 501,
    NEW = 502,
    NEXT = 503,
    NO = 504,
    NONE = 505,
    NOT = 506,
    NOTHING = 507,
    NOTIFY = 508,
    NOTNULL = 509,
    NOWAIT = 510,
    NULL_P = 511,
    NULLIF = 512,
    NULLS_P = 513,
    NUMERIC = 514,
    OBJECT_P = 515,
    OF = 516,
    OFF = 517,
    OFFSET = 518,
    OIDS = 519,
    OLD = 520,
    ON = 521,
    ONLY = 522,
    OPERATOR = 523,
    OPTION = 524,
    OPTIONS = 525,
    OR = 526,
    ORDER = 527,
    ORDINALITY = 528,
    OUT_P = 529,
    OUTER_P = 530,
    OVER = 531,
    OVERLAPS = 532,
    OVERLAY = 533,
    OVERRIDING = 534,
    OWNED = 535,
    OWNER = 536,
    PARALLEL = 537,
    PARSER = 538,
    PARTIAL = 539,
    PARTITION = 540,
    PASSING = 541,
    PASSWORD = 542,
    PLACING = 543,
    PLANS = 544,
    POLICY = 545,
    POSITION = 546,
    PRECEDING = 547,
    PRECISION = 548,
    PRESERVE = 549,
    PREPARE = 550,
    PREPARED = 551,
    PRIMARY = 552,
    PRIOR = 553,
    PRIVILEGES = 554,
    PROCEDURAL = 555,
    PROCEDURE = 556,
    PROGRAM = 557,
    PUBLICATION = 558,
    QUOTE = 559,
    RANGE = 560,
    READ = 561,
    REAL = 562,
    REASSIGN = 563,
    RECHECK = 564,
    RECURSIVE = 565,
    REF = 566,
    REFERENCES = 567,
    REFERENCING = 568,
    REFRESH = 569,
    REINDEX = 570,
    RELATIVE_P = 571,
    RELEASE = 572,
    RENAME = 573,
    REPEATABLE = 574,
    REPLACE = 575,
    REPLICA = 576,
    RESET = 577,
    RESTART = 578,
    RESTRICT = 579,
    RETURNING = 580,
    RETURNS = 581,
    REVOKE = 582,
    RIGHT = 583,
    ROLE = 584,
    ROLLBACK = 585,
    ROLLUP = 586,
    ROW = 587,
    ROWS = 588,
    RULE = 589,
    SAVEPOINT = 590,
    SCHEMA = 591,
    SCHEMAS = 592,
    SCROLL = 593,
    SEARCH = 594,
    SECOND_P = 595,
    SECURITY = 596,
    SELECT = 597,
    SEQUENCE = 598,
    SEQUENCES = 599,
    SERIALIZABLE = 600,
    SERVER = 601,
    SESSION = 602,
    SESSION_USER = 603,
    SET = 604,
    SETS = 605,
    SETOF = 606,
    SHARE = 607,
    SHOW = 608,
    SIMILAR = 609,
    SIMPLE = 610,
    SKIP = 611,
    SMALLINT = 612,
    SNAPSHOT = 613,
    SOME = 614,
    SQL_P = 615,
    STABLE = 616,
    STANDALONE_P = 617,
    START = 618,
    STATEMENT = 619,
    STATISTICS = 620,
    STDIN = 621,
    STDOUT = 622,
    STORAGE = 623,
    STRICT_P = 624,
    STRIP_P = 625,
    SUBSCRIPTION = 626,
    SUBSTRING = 627,
    SYMMETRIC = 628,
    SYSID = 629,
    SYSTEM_P = 630,
    TABLE = 631,
    TABLES = 632,
    TABLESAMPLE = 633,
    TABLESPACE = 634,
    TEMP = 635,
    TEMPLATE = 636,
    TEMPORARY = 637,
    TEXT_P = 638,
    THEN = 639,
    TIME = 640,
    TIMESTAMP = 641,
    TO = 642,
    TRAILING = 643,
    TRANSACTION = 644,
    TRANSFORM = 645,
    TREAT = 646,
    TRIGGER = 647,
    TRIM = 648,
    TRUE_P = 649,
    TRUNCATE = 650,
    TRUSTED = 651,
    TYPE_P = 652,
    TYPES_P = 653,
    UNBOUNDED = 654,
    UNCOMMITTED = 655,
    UNENCRYPTED = 656,
    UNION = 657,
    UNIQUE = 658,
    UNKNOWN = 659,
    UNLISTEN = 660,
    UNLOGGED = 661,
    UNTIL = 662,
    UPDATE = 663,
    USER = 664,
    USING = 665,
    VACUUM = 666,
    VALID = 667,
    VALIDATE = 668,
    VALIDATOR = 669,
    VALUE_P = 670,
    VALUES = 671,
    VARCHAR = 672,
    VARIADIC = 673,
    VARYING = 674,
    VERBOSE = 675,
    VERSION_P = 676,
    VIEW = 677,
    VIEWS = 678,
    VOLATILE = 679,
    WHEN = 680,
    WHERE = 681,
    WHITESPACE_P = 682,
    WINDOW = 683,
    WITH = 684,
    WITHIN = 685,
    WITHOUT = 686,
    WORK = 687,
    WRAPPER = 688,
    WRITE = 689,
    XML_P = 690,
    XMLATTRIBUTES = 691,
    XMLCONCAT = 692,
    XMLELEMENT = 693,
    XMLEXISTS = 694,
    XMLFOREST = 695,
    XMLNAMESPACES = 696,
    XMLPARSE = 697,
    XMLPI = 698,
    XMLROOT = 699,
    XMLSERIALIZE = 700,
    XMLTABLE = 701,
    YEAR_P = 702,
    YES_P = 703,
    ZONE = 704,
    NOT_LA = 705,
    NULLS_LA = 706,
    WITH_LA = 707,
    POSTFIXOP = 708,
    UMINUS = 709
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 202 "gram.y" /* yacc.c:1909  */

	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;

	char				chr;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;
	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	ObjectWithArgs		*objwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	WindowDef			*windef;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	IntoClause			*into;
	WithClause			*with;
	InferClause			*infer;
	OnConflictClause	*onconflict;
	A_Indices			*aind;
	ResTarget			*target;
	struct PrivTarget	*privtarget;
	AccessPriv			*accesspriv;
	struct ImportQual	*importqual;
	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;
	PartitionElem		*partelem;
	PartitionSpec		*partspec;
	PartitionBoundSpec	*partboundspec;
	RoleSpec			*rolespec;

#line 553 "gram.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int base_yyparse (core_yyscan_t yyscanner);

#endif /* !YY_BASE_YY_GRAM_H_INCLUDED  */
