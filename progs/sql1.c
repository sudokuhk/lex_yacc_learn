/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    STRING = 259,
    INTNUM = 260,
    APPROXNUM = 261,
    OR = 262,
    AND = 263,
    NOT = 264,
    COMPARISON = 265,
    UMINUS = 266,
    ALL = 267,
    AMMSC = 268,
    ANY = 269,
    AS = 270,
    ASC = 271,
    AUTHORIZATION = 272,
    BETWEEN = 273,
    BY = 274,
    CHARACTER = 275,
    CHECK = 276,
    CLOSE = 277,
    COMMIT = 278,
    CONTINUE = 279,
    CREATE = 280,
    CURRENT = 281,
    CURSOR = 282,
    DECIMAL = 283,
    DECLARE = 284,
    DEFAULT = 285,
    DELETE = 286,
    DESC = 287,
    DISTINCT = 288,
    DOUBLE = 289,
    ESCAPE = 290,
    EXISTS = 291,
    FETCH = 292,
    FLOAT = 293,
    FOR = 294,
    FOREIGN = 295,
    FOUND = 296,
    FROM = 297,
    GOTO = 298,
    GRANT = 299,
    GROUP = 300,
    HAVING = 301,
    IN = 302,
    INDICATOR = 303,
    INSERT = 304,
    INTEGER = 305,
    INTO = 306,
    IS = 307,
    KEY = 308,
    LANGUAGE = 309,
    LIKE = 310,
    MODULE = 311,
    NULLX = 312,
    NUMERIC = 313,
    OF = 314,
    ON = 315,
    OPEN = 316,
    OPTION = 317,
    ORDER = 318,
    PRECISION = 319,
    PRIMARY = 320,
    PRIVILEGES = 321,
    PROCEDURE = 322,
    PUBLIC = 323,
    REAL = 324,
    REFERENCES = 325,
    ROLLBACK = 326,
    SCHEMA = 327,
    SELECT = 328,
    SET = 329,
    SMALLINT = 330,
    SOME = 331,
    SQLCODE = 332,
    SQLERROR = 333,
    TABLE = 334,
    TO = 335,
    UNION = 336,
    UNIQUE = 337,
    UPDATE = 338,
    USER = 339,
    VALUES = 340,
    VIEW = 341,
    WHENEVER = 342,
    WHERE = 343,
    WITH = 344,
    WORK = 345,
    COBOL = 346,
    FORTRAN = 347,
    PASCAL = 348,
    PLI = 349,
    C = 350,
    ADA = 351
  };
#endif
/* Tokens.  */
#define NAME 258
#define STRING 259
#define INTNUM 260
#define APPROXNUM 261
#define OR 262
#define AND 263
#define NOT 264
#define COMPARISON 265
#define UMINUS 266
#define ALL 267
#define AMMSC 268
#define ANY 269
#define AS 270
#define ASC 271
#define AUTHORIZATION 272
#define BETWEEN 273
#define BY 274
#define CHARACTER 275
#define CHECK 276
#define CLOSE 277
#define COMMIT 278
#define CONTINUE 279
#define CREATE 280
#define CURRENT 281
#define CURSOR 282
#define DECIMAL 283
#define DECLARE 284
#define DEFAULT 285
#define DELETE 286
#define DESC 287
#define DISTINCT 288
#define DOUBLE 289
#define ESCAPE 290
#define EXISTS 291
#define FETCH 292
#define FLOAT 293
#define FOR 294
#define FOREIGN 295
#define FOUND 296
#define FROM 297
#define GOTO 298
#define GRANT 299
#define GROUP 300
#define HAVING 301
#define IN 302
#define INDICATOR 303
#define INSERT 304
#define INTEGER 305
#define INTO 306
#define IS 307
#define KEY 308
#define LANGUAGE 309
#define LIKE 310
#define MODULE 311
#define NULLX 312
#define NUMERIC 313
#define OF 314
#define ON 315
#define OPEN 316
#define OPTION 317
#define ORDER 318
#define PRECISION 319
#define PRIMARY 320
#define PRIVILEGES 321
#define PROCEDURE 322
#define PUBLIC 323
#define REAL 324
#define REFERENCES 325
#define ROLLBACK 326
#define SCHEMA 327
#define SELECT 328
#define SET 329
#define SMALLINT 330
#define SOME 331
#define SQLCODE 332
#define SQLERROR 333
#define TABLE 334
#define TO 335
#define UNION 336
#define UNIQUE 337
#define UPDATE 338
#define USER 339
#define VALUES 340
#define VIEW 341
#define WHENEVER 342
#define WHERE 343
#define WITH 344
#define WORK 345
#define COBOL 346
#define FORTRAN 347
#define PASCAL 348
#define PLI 349
#define C 350
#define ADA 351

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 3 "sql1.y" /* yacc.c:355  */

	int intval;
	double floatval;
	char *strval;
	int subtok;

#line 306 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 321 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   558

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  244
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  449

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     102,   103,    13,    11,   104,    12,   106,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   107,   101,
       2,   105,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    42,    48,    52,    55,    57,    61,    62,
      66,    67,    68,    72,    76,    77,    81,    82,    86,    89,
      91,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     107,   108,   109,   111,   113,   117,   118,   122,   126,   128,
     131,   133,   137,   141,   143,   147,   148,   149,   153,   154,
     158,   159,   160,   161,   162,   167,   168,   172,   173,   177,
     181,   188,   190,   194,   195,   196,   197,   198,   199,   202,
     204,   208,   209,   213,   216,   218,   222,   223,   227,   228,
     231,   233,   234,   238,   239,   243,   248,   249,   253,   254,
     258,   259,   264,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   282,   286,   290,   294,   298,   302,
     306,   307,   311,   312,   316,   317,   321,   325,   329,   334,
     336,   337,   341,   345,   346,   347,   351,   352,   356,   360,
     361,   365,   368,   370,   376,   377,   378,   382,   383,   387,
     391,   392,   396,   403,   407,   408,   412,   413,   417,   420,
     422,   426,   427,   430,   432,   437,   438,   439,   440,   441,
     442,   446,   447,   448,   449,   450,   451,   452,   456,   457,
     461,   462,   466,   467,   470,   472,   476,   477,   481,   482,
     483,   484,   488,   489,   493,   497,   498,   499,   503,   507,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     526,   527,   531,   532,   533,   537,   538,   539,   543,   544,
     545,   546,   550,   551,   552,   558,   559,   563,   564,   565,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   589,   592,   595,   599,   602,   605,
     608,   612,   613,   616,   617
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "APPROXNUM",
  "OR", "AND", "NOT", "COMPARISON", "'+'", "'-'", "'*'", "'/'", "UMINUS",
  "ALL", "AMMSC", "ANY", "AS", "ASC", "AUTHORIZATION", "BETWEEN", "BY",
  "CHARACTER", "CHECK", "CLOSE", "COMMIT", "CONTINUE", "CREATE", "CURRENT",
  "CURSOR", "DECIMAL", "DECLARE", "DEFAULT", "DELETE", "DESC", "DISTINCT",
  "DOUBLE", "ESCAPE", "EXISTS", "FETCH", "FLOAT", "FOR", "FOREIGN",
  "FOUND", "FROM", "GOTO", "GRANT", "GROUP", "HAVING", "IN", "INDICATOR",
  "INSERT", "INTEGER", "INTO", "IS", "KEY", "LANGUAGE", "LIKE", "MODULE",
  "NULLX", "NUMERIC", "OF", "ON", "OPEN", "OPTION", "ORDER", "PRECISION",
  "PRIMARY", "PRIVILEGES", "PROCEDURE", "PUBLIC", "REAL", "REFERENCES",
  "ROLLBACK", "SCHEMA", "SELECT", "SET", "SMALLINT", "SOME", "SQLCODE",
  "SQLERROR", "TABLE", "TO", "UNION", "UNIQUE", "UPDATE", "USER", "VALUES",
  "VIEW", "WHENEVER", "WHERE", "WITH", "WORK", "COBOL", "FORTRAN",
  "PASCAL", "PLI", "C", "ADA", "';'", "'('", "')'", "','", "'='", "'.'",
  "':'", "$accept", "sql_list", "sql", "schema", "opt_schema_element_list",
  "schema_element_list", "schema_element", "base_table_def",
  "base_table_element_commalist", "base_table_element", "column_def",
  "column_def_opt_list", "column_def_opt", "table_constraint_def",
  "column_commalist", "view_def", "opt_with_check_option",
  "opt_column_commalist", "privilege_def", "opt_with_grant_option",
  "privileges", "operation_commalist", "operation", "grantee_commalist",
  "grantee", "module_def", "opt_module", "lang", "opt_cursor_def_list",
  "cursor_def_list", "cursor_def", "opt_order_by_clause",
  "ordering_spec_commalist", "ordering_spec", "opt_asc_desc",
  "procedure_def_list", "procedure_def", "manipulative_statement_list",
  "parameter_def_list", "parameter_def", "manipulative_statement",
  "close_statement", "commit_statement", "delete_statement_positioned",
  "delete_statement_searched", "fetch_statement", "insert_statement",
  "values_or_query_spec", "insert_atom_commalist", "insert_atom",
  "open_statement", "rollback_statement", "select_statement",
  "opt_all_distinct", "update_statement_positioned",
  "assignment_commalist", "assignment", "update_statement_searched",
  "target_commalist", "target", "opt_where_clause", "query_exp",
  "query_term", "query_spec", "selection", "table_exp", "from_clause",
  "table_ref_commalist", "table_ref", "where_clause",
  "opt_group_by_clause", "column_ref_commalist", "opt_having_clause",
  "search_condition", "predicate", "comparison_predicate",
  "between_predicate", "like_predicate", "opt_escape", "test_for_null",
  "in_predicate", "atom_commalist", "all_or_any_predicate", "any_all_some",
  "existence_test", "subquery", "scalar_exp", "scalar_exp_commalist",
  "atom", "parameter_ref", "function_ref", "literal", "table",
  "column_ref", "data_type", "column", "cursor", "module", "parameter",
  "procedure", "range_variable", "user", "when_action", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    43,    45,    42,    47,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,    59,    40,    41,    44,    61,    46,    58
};
# endif

#define YYPACT_NINF -318

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-318)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     392,    56,   -32,    14,    50,    56,    67,   128,    56,    43,
     177,   165,    11,   363,    81,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,   178,   165,   176,   165,  -318,   179,  -318,  -318,
    -318,  -318,  -318,   274,   138,   161,   211,   123,  -318,   141,
    -318,   255,   183,   174,   167,   421,   216,  -318,  -318,  -318,
     323,   323,  -318,   206,  -318,   323,   329,   284,   303,   242,
    -318,  -318,  -318,  -318,  -318,    18,   345,   349,   123,  -318,
     379,  -318,  -318,  -318,   137,   106,  -318,  -318,   281,  -318,
    -318,   349,    90,  -318,  -318,  -318,  -318,  -318,  -318,   365,
     390,  -318,  -318,   136,    75,  -318,   174,   323,   323,   323,
     323,   323,   174,  -318,  -318,  -318,   118,  -318,   291,  -318,
    -318,   135,   314,  -318,   137,  -318,  -318,  -318,  -318,   259,
     334,   298,   259,   213,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,   490,   346,   174,   147,  -318,   177,   301,  -318,
    -318,   255,   300,   304,   323,   405,   149,  -318,    -2,   270,
     270,  -318,  -318,   303,  -318,   200,   349,  -318,   292,   165,
     165,   347,  -318,  -318,   167,  -318,   167,   351,   309,  -318,
    -318,  -318,    56,   354,  -318,    21,   361,   259,   259,   164,
     243,   323,   320,    62,     3,  -318,  -318,   349,   274,    47,
     391,   429,  -318,   163,   331,  -318,   165,  -318,   344,   372,
    -318,  -318,   303,   335,   167,  -318,  -318,  -318,   165,   352,
    -318,   177,  -318,   433,  -318,   323,   340,    62,  -318,  -318,
    -318,   307,   298,  -318,   303,   330,    12,   404,   383,  -318,
    -318,   402,  -318,   169,  -318,  -318,    56,   378,   391,  -318,
    -318,  -318,  -318,   355,  -318,   448,   259,   407,    56,    69,
     434,   374,  -318,   274,   343,    12,   404,  -318,   323,   186,
     359,  -318,    62,  -318,  -318,  -318,  -318,    47,   432,   462,
     378,  -318,  -318,   165,  -318,  -318,   443,   422,  -318,   368,
     414,   418,   375,   190,  -318,  -318,  -318,   436,   399,    33,
     402,   323,   197,   377,  -318,   303,  -318,    62,  -318,  -318,
    -318,   438,  -318,   -23,  -318,  -318,   405,   259,  -318,   259,
     380,   382,   349,  -318,    69,   384,   385,   423,   386,  -318,
     387,  -318,  -318,  -318,   400,  -318,    91,  -318,  -318,   389,
     303,  -318,  -318,  -318,   -47,  -318,   -44,  -318,   436,   401,
    -318,   213,    25,   349,   349,   202,  -318,   489,   491,  -318,
     501,   503,   162,   485,  -318,   463,    33,  -318,  -318,   -47,
     113,  -318,  -318,   420,  -318,  -318,   405,  -318,   217,   233,
    -318,   410,   256,   411,   261,   461,   424,   139,   165,  -318,
     457,   458,  -318,    98,   502,    30,  -318,   420,  -318,  -318,
     453,  -318,  -318,  -318,   523,  -318,  -318,   524,   133,   259,
    -318,  -318,  -318,   428,  -318,  -318,  -318,   223,   -47,  -318,
    -318,   165,   430,   431,   474,  -318,    27,   349,    29,   435,
    -318,    29,  -318,   440,  -318,  -318,  -318,  -318,   265,  -318,
    -318,  -318,   223,  -318,   349,  -318,  -318,   275,  -318
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    61,     0,     0,
     119,     0,     0,     0,     0,     4,    59,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   235,
     104,   105,     0,     0,     0,     0,   236,     0,    62,   116,
     117,   120,   121,     0,   215,     0,     0,     0,     1,     0,
       2,     0,   132,     0,    40,     0,   217,   212,   213,   214,
       0,     0,   141,     0,   204,     0,     0,     0,   200,   140,
     196,   202,   198,   203,   197,   205,     0,   123,     0,   244,
       0,   242,     3,   240,     6,   155,   107,   133,   108,   129,
     131,     0,     0,    63,    64,    65,    66,    67,    68,     0,
       0,   194,   195,     0,     0,   237,     0,     0,     0,     0,
       0,     0,     0,   206,   216,   234,   132,   124,     0,   241,
     243,     0,     0,     5,     7,     8,    10,    11,    12,   155,
       0,     0,   155,   148,   160,   161,   162,   163,   164,   165,
     166,   167,     0,   197,     0,     0,    35,   119,     0,   109,
     111,     0,   218,     0,     0,     0,     0,   199,     0,   190,
     191,   192,   193,   201,   207,   155,     0,   128,     0,     0,
       0,    46,    52,    51,    40,    50,    40,     0,    47,    48,
       9,   158,     0,     0,   188,     0,     0,   155,   155,     0,
       0,     0,     0,     0,     0,   130,    41,     0,     0,     0,
      69,     0,   208,     0,     0,   211,     0,   118,   132,     0,
     125,   127,   126,     0,    40,    45,    54,    53,     0,     0,
     106,   119,   159,   156,   157,     0,     0,     0,   186,   185,
     187,     0,     0,   169,   168,     0,     0,   174,     0,   177,
      36,     0,   115,     0,   112,   114,     0,     0,    70,    71,
     219,   210,   209,   143,   144,   146,   155,   149,     0,     0,
       0,     0,    49,     0,     0,     0,   174,   184,     0,     0,
       0,   182,     0,   173,   176,   139,   110,     0,     0,     0,
      60,    83,    72,     0,   239,   147,     0,   153,   122,     0,
       0,     0,     0,     0,    14,    16,    17,     0,     0,     0,
       0,     0,     0,     0,   172,   171,   181,     0,   179,   175,
     113,     0,   238,     0,    84,   145,     0,   155,   142,   155,
       0,     0,     0,    13,     0,   220,   225,     0,   230,   228,
     222,   232,   229,    19,    38,    57,    43,    55,    58,     0,
     170,   180,   178,   183,     0,    91,     0,    88,     0,   150,
     151,   154,     0,     0,     0,     0,    15,     0,     0,   233,
       0,     0,    18,     0,    37,     0,     0,    42,   189,     0,
      74,   134,   137,     0,    89,    90,     0,    34,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    56,     0,     0,     0,    73,    85,    86,   152,
       0,    31,   221,   226,     0,   231,   223,     0,    21,   155,
      25,    26,    24,    28,    39,    44,   138,     0,     0,   135,
      87,     0,     0,     0,     0,    22,     0,     0,    80,    75,
      76,    80,   136,    32,   227,   224,    23,    27,     0,    81,
      82,    78,     0,    79,     0,    29,    77,     0,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -318,  -318,   519,  -318,  -318,  -318,   412,  -318,  -318,   214,
    -318,  -318,  -318,  -318,  -311,  -318,  -318,  -135,  -318,  -318,
    -318,  -318,   316,  -318,   171,  -318,  -318,  -318,  -318,  -318,
     295,  -318,  -318,   102,   109,  -318,   266,  -318,  -318,   199,
    -208,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,   271,
    -318,  -318,  -318,  -122,  -318,  -318,   381,  -318,   444,   408,
    -102,   182,  -317,   -82,  -183,  -218,  -318,  -318,   272,  -318,
    -318,  -318,  -318,  -127,  -318,  -318,  -318,  -318,   287,  -318,
    -318,   289,  -318,  -318,  -318,  -182,   -34,  -318,  -180,   -15,
    -318,   170,   -11,   -84,   208,   -71,    -1,  -318,   -72,  -318,
    -318,   -30,   480
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,   123,   124,   125,   126,   293,   294,
     295,   362,   389,   296,   145,   127,   364,    92,   128,   367,
     177,   178,   179,   336,   337,    16,    37,    99,   247,   248,
     249,   396,   429,   430,   441,   280,   281,   397,   346,   347,
      17,    18,    19,    20,    21,    22,    23,   149,   243,   244,
      24,    25,    26,    43,    27,   116,   117,    28,    88,    89,
      86,   370,   371,   372,    67,   207,   208,   253,   254,    87,
     287,   349,   318,   133,   134,   135,   136,   137,   273,   138,
     139,   269,   140,   232,   141,   184,   142,    69,    70,    71,
      72,    73,   255,    74,   333,   146,    30,    38,    75,   313,
     285,   338,    81
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      45,   143,   181,   113,    34,   185,   118,    39,   233,    68,
     150,   355,   238,   237,   167,   241,    57,    58,    59,   245,
      46,    84,    52,   275,    54,   198,   101,   102,   187,   188,
     147,   104,   187,   188,   187,   188,    83,   345,    90,   216,
     164,   217,   378,   379,   206,   143,   418,   266,   143,   439,
     267,    57,    58,    59,   270,   369,   271,   373,   345,    29,
     223,   224,    31,    66,   239,   440,    57,    58,    59,   156,
     112,   204,   115,   159,   160,   161,   162,   163,   419,   260,
     300,   143,   339,   303,    66,   271,   107,   108,   109,   110,
      32,    90,   309,    47,   289,   118,    33,   245,   186,   263,
      64,   432,   144,   143,   143,   335,   257,   147,   242,    56,
      57,    58,    59,   290,   183,   129,   438,    60,    61,    66,
     203,   200,    35,    63,   222,    66,   240,   343,   377,    90,
     437,    36,   369,   447,   212,    64,   130,    40,   291,    56,
      57,    58,    59,    57,    58,    59,   131,    60,    61,   153,
      64,    79,   154,    63,    66,   292,   234,   235,   213,   214,
     107,   108,   109,   110,    68,   398,   121,   147,    44,    66,
      80,   385,   143,   155,   107,   108,   109,   110,   157,   148,
     394,   220,    50,   395,   365,   122,   225,   386,   297,   420,
     351,   264,   352,    41,    64,   366,   387,   104,   395,    51,
     410,   416,   424,    56,    57,    58,    59,   261,   132,   129,
     165,    60,    61,    66,    42,   226,   334,    63,   169,   425,
     187,   188,   166,   227,    64,   170,    56,   411,   428,    68,
     209,    53,   350,   143,   305,   143,   388,    55,    65,    77,
     131,   348,    82,    66,    76,   278,    56,    57,    58,    59,
     196,   197,   205,   297,    60,    61,    78,   288,    83,   228,
      63,   229,    56,    57,    58,    59,   251,   340,   129,    91,
      60,    61,   276,   277,   348,    85,    63,    56,    57,    58,
      59,    66,   426,   109,   110,    60,    61,    62,    64,   306,
     307,    63,   399,   323,   324,    56,    57,    58,    59,   131,
     341,   307,   132,    60,    61,   380,   197,    66,   103,    63,
      56,    57,    58,    59,   107,   108,   109,   110,    60,    61,
     400,   197,   100,   230,    63,   143,    56,    57,    58,    59,
     171,    64,   105,   431,    60,    61,   401,   197,   268,   106,
      63,   107,   108,   109,   110,   231,   111,    64,   114,   172,
      66,   301,   115,   211,   107,   108,   109,   110,   431,   403,
     404,   132,    64,    48,   406,   407,    66,   173,   445,   197,
     189,   190,   107,   108,   109,   110,    65,   413,   448,   197,
      64,    66,   120,   191,   221,   144,   151,   172,   174,     1,
       2,   175,     3,   152,    65,    64,   168,   182,     4,    66,
     183,   176,   194,   199,     5,   173,   201,   202,    56,    65,
     433,    64,   192,   219,    66,   218,     6,   215,     1,     2,
     193,     3,   236,     7,   246,    65,   174,     4,     8,   175,
      66,   221,   250,     5,   252,   258,   256,   259,     9,   176,
      10,   188,   265,   272,   274,     6,     1,     2,   206,   279,
      11,   284,     7,   298,    12,     4,   286,     8,   299,   283,
     325,     5,   308,   311,   157,   312,   316,     9,   326,    10,
     319,   320,   317,     6,   327,   321,   147,   322,   328,    11,
     342,   344,   353,    12,   354,     8,   357,   358,   360,   361,
     329,   359,   368,   363,   381,     9,   382,    10,   330,   189,
     190,   107,   108,   109,   110,   376,   383,    11,   384,   331,
     390,   391,   191,   402,   405,   332,    93,    94,    95,    96,
      97,    98,   408,   414,   415,   417,   409,   421,   422,   423,
     427,   436,    49,   434,   435,   262,   180,   392,   356,   442,
     443,   192,   444,   282,   446,   374,   314,   210,   310,   193,
     158,   393,   195,   304,   302,   315,   375,   412,   119
};

static const yytype_uint16 yycheck[] =
{
      11,    85,   129,    75,     5,   132,    77,     8,   190,    43,
      92,   322,     9,   193,   116,   198,     4,     5,     6,   199,
       9,    51,    33,   241,    35,   147,    60,    61,     7,     8,
      77,    65,     7,     8,     7,     8,     3,    81,    53,   174,
     112,   176,   353,   354,    46,   129,    16,   227,   132,    20,
     232,     4,     5,     6,   236,   102,   236,   101,    81,     3,
     187,   188,    94,   107,    61,    36,     4,     5,     6,   103,
      52,   155,     3,   107,   108,   109,   110,   111,   395,   214,
     263,   165,   300,   265,   107,   265,    11,    12,    13,    14,
      76,   106,   272,    82,    25,   166,    46,   277,   132,   221,
      88,   418,   104,   187,   188,    72,   208,    77,    61,     3,
       4,     5,     6,    44,   102,     9,   427,    11,    12,   107,
     154,   151,    55,    17,   103,   107,   197,   307,   103,   144,
     103,     3,   102,   444,   168,    88,    30,    94,    69,     3,
       4,     5,     6,     4,     5,     6,    40,    11,    12,    13,
      88,    28,    16,    17,   107,    86,   190,   191,   169,   170,
      11,    12,    13,    14,   198,   373,    29,    77,     3,   107,
      47,     9,   256,    37,    11,    12,    13,    14,   103,    89,
      67,   182,   101,    85,    93,    48,    22,    25,   259,   397,
     317,   225,   319,    16,    88,   104,    34,   231,    85,    21,
      61,   103,    69,     3,     4,     5,     6,   218,   102,     9,
      92,    11,    12,   107,    37,    51,   298,    17,    83,    86,
       7,     8,   104,    59,    88,    90,     3,    88,     5,   263,
      30,    55,   316,   317,   268,   319,    74,    58,   102,    78,
      40,   313,   101,   107,   106,   246,     3,     4,     5,     6,
     103,   104,   103,   324,    11,    12,    45,   258,     3,    16,
      17,    18,     3,     4,     5,     6,   103,   301,     9,   102,
      11,    12,   103,   104,   346,    92,    17,     3,     4,     5,
       6,   107,   409,    13,    14,    11,    12,    13,    88,   103,
     104,    17,   376,   103,   104,     3,     4,     5,     6,    40,
     103,   104,   102,    11,    12,   103,   104,   107,   102,    17,
       3,     4,     5,     6,    11,    12,    13,    14,    11,    12,
     103,   104,   106,    80,    17,   409,     3,     4,     5,     6,
      16,    88,     3,   417,    11,    12,   103,   104,     8,    55,
      17,    11,    12,    13,    14,   102,   104,    88,     3,    35,
     107,     8,     3,    61,    11,    12,    13,    14,   442,   103,
     104,   102,    88,     0,   103,   104,   107,    53,   103,   104,
       9,    10,    11,    12,    13,    14,   102,   388,   103,   104,
      88,   107,     3,    22,    77,   104,    21,    35,    74,    26,
      27,    77,    29,     3,   102,    88,   105,    63,    35,   107,
     102,    87,    56,   102,    41,    53,   106,   103,     3,   102,
     421,    88,    51,   104,   107,    64,    53,    70,    26,    27,
      59,    29,   102,    60,    33,   102,    74,    35,    65,    77,
     107,    77,     3,    41,   103,    63,    92,   102,    75,    87,
      77,     8,   102,    39,    61,    53,    26,    27,    46,    71,
      87,     3,    60,    19,    91,    35,    49,    65,    84,   104,
      24,    41,   103,    31,   103,     3,    23,    75,    32,    77,
     102,    57,    50,    53,    38,    57,    77,   102,    42,    87,
     103,    43,   102,    91,   102,    65,   102,   102,   102,   102,
      54,    68,   103,    93,     5,    75,     5,    77,    62,     9,
      10,    11,    12,    13,    14,   104,     5,    87,     5,    73,
      25,    48,    22,   103,   103,    79,    95,    96,    97,    98,
      99,   100,    61,    66,    66,    23,   102,    74,     5,     5,
     102,    57,    13,   103,   103,   219,   124,   366,   324,   104,
     431,    51,   102,   248,   442,   346,   280,   166,   277,    59,
     106,   369,   144,   266,   265,   283,   348,   387,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    27,    29,    35,    41,    53,    60,    65,    75,
      77,    87,    91,   109,   110,   111,   133,   148,   149,   150,
     151,   152,   153,   154,   158,   159,   160,   162,   165,     3,
     204,    94,    76,    46,   204,    55,     3,   134,   205,   204,
      94,    16,    37,   161,     3,   200,     9,    82,     0,   110,
     101,    21,   200,    55,   200,    58,     3,     4,     5,     6,
      11,    12,    13,    17,    88,   102,   107,   172,   194,   195,
     196,   197,   198,   199,   201,   206,   106,    78,    45,    28,
      47,   210,   101,     3,   209,    92,   168,   177,   166,   167,
     197,   102,   125,    95,    96,    97,    98,    99,   100,   135,
     106,   194,   194,   102,   194,     3,    55,    11,    12,    13,
      14,   104,    52,   206,     3,     3,   163,   164,   203,   210,
       3,    29,    48,   112,   113,   114,   115,   123,   126,     9,
      30,    40,   102,   181,   182,   183,   184,   185,   187,   188,
     190,   192,   194,   201,   104,   122,   203,    77,    89,   155,
     171,    21,     3,    13,    16,    37,   194,   103,   166,   194,
     194,   194,   194,   194,   206,    92,   104,   168,   105,    83,
      90,    16,    35,    53,    74,    77,    87,   128,   129,   130,
     114,   181,    63,   102,   193,   181,   194,     7,     8,     9,
      10,    22,    51,    59,    56,   167,   103,   104,   161,   102,
     209,   106,   103,   194,   201,   103,    46,   173,   174,    30,
     164,    61,   194,   200,   200,    70,   125,   125,    64,   104,
     204,    77,   103,   181,   181,    22,    51,    59,    16,    18,
      80,   102,   191,   193,   194,   194,   102,   196,     9,    61,
     203,   172,    61,   156,   157,   196,    33,   136,   137,   138,
       3,   103,   103,   175,   176,   200,    92,   168,    63,   102,
     125,   200,   130,   161,   194,   102,   196,   193,     8,   189,
     193,   196,    39,   186,    61,   173,   103,   104,   204,    71,
     143,   144,   138,   104,     3,   208,    49,   178,   204,    25,
      44,    69,    86,   116,   117,   118,   121,   203,    19,    84,
     172,     8,   189,   193,   186,   194,   103,   104,   103,   196,
     157,    31,     3,   207,   144,   176,    23,    50,   180,   102,
      57,    57,   102,   103,   104,    24,    32,    38,    42,    54,
      62,    73,    79,   202,   171,    72,   131,   132,   209,   173,
     194,   103,   103,   196,    43,    81,   146,   147,   206,   179,
     201,   181,   181,   102,   102,   122,   117,   102,   102,    68,
     102,   102,   119,    93,   124,    93,   104,   127,   103,   102,
     169,   170,   171,   101,   147,   202,   104,   103,   122,   122,
     103,     5,     5,     5,     5,     9,    25,    34,    74,   120,
      25,    48,   132,   169,    67,    85,   139,   145,   148,   201,
     103,   103,   103,   103,   104,   103,   103,   104,    61,   102,
      61,    88,   199,   200,    66,    66,   103,    23,    16,   170,
     148,    74,     5,     5,    69,    86,   181,   102,     5,   140,
     141,   201,   170,   200,   103,   103,    57,   103,   122,    20,
      36,   142,   104,   142,   102,   103,   141,   122,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   111,   112,   112,   113,   113,
     114,   114,   114,   115,   116,   116,   117,   117,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   127,   127,   128,   128,   128,   129,   129,
     130,   130,   130,   130,   130,   131,   131,   132,   132,   110,
     133,   134,   134,   135,   135,   135,   135,   135,   135,   136,
     136,   137,   137,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   142,   143,   143,   144,   145,   145,   146,   146,
     147,   147,   110,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   149,   150,   151,   152,   153,   154,
     155,   155,   156,   156,   157,   157,   158,   159,   160,   161,
     161,   161,   162,   163,   163,   163,   164,   164,   165,   166,
     166,   167,   168,   168,   169,   169,   169,   170,   170,   171,
     172,   172,   173,   174,   175,   175,   176,   176,   177,   178,
     178,   179,   179,   180,   180,   181,   181,   181,   181,   181,
     181,   182,   182,   182,   182,   182,   182,   182,   183,   183,
     184,   184,   185,   185,   186,   186,   187,   187,   188,   188,
     188,   188,   189,   189,   190,   191,   191,   191,   192,   193,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     195,   195,   196,   196,   196,   197,   197,   197,   198,   198,
     198,   198,   199,   199,   199,   200,   200,   201,   201,   201,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   203,   204,   205,   206,   207,   208,
     209,   110,   110,   210,   210
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     5,     0,     1,     1,     2,
       1,     1,     1,     6,     1,     3,     1,     1,     3,     0,
       2,     2,     3,     4,     2,     2,     2,     4,     2,     5,
       4,     5,     7,    10,     4,     1,     3,     7,     0,     3,
       0,     3,     7,     0,     3,     2,     1,     1,     1,     3,
       1,     1,     1,     2,     2,     1,     3,     1,     1,     1,
       8,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     2,     6,     0,     3,     1,     3,     2,     2,
       0,     1,     1,     1,     2,     5,     1,     2,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     7,     4,     4,     5,
       4,     1,     1,     3,     1,     1,     2,     2,     6,     0,
       1,     1,     8,     0,     1,     3,     3,     3,     5,     1,
       3,     1,     0,     1,     1,     3,     4,     1,     3,     4,
       1,     1,     4,     2,     1,     3,     1,     2,     2,     0,
       3,     1,     3,     0,     2,     0,     3,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       6,     5,     5,     4,     0,     2,     4,     3,     6,     5,
       6,     5,     1,     3,     4,     1,     1,     1,     2,     6,
       3,     3,     3,     3,     2,     2,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     3,     4,     5,
       5,     4,     1,     1,     1,     1,     3,     1,     3,     5,
       1,     4,     1,     4,     6,     1,     4,     6,     1,     1,
       1,     4,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     4,     3,     2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
#line 1779 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 619 "sql1.y" /* yacc.c:1906  */

