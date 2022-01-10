/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:337  */

#define YYSTYPE void*
#define ToInt(k) ((int*)(k))
#define ToStr(k) ((string*)(k))

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<vector>
#include<stack>
using namespace std;

void yyerror(const char *);
void yyerror(const string&);
extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern int yylineno;

ostream &out = cout;       // 用于输出

int STK_OP(int n){
    return (n/4 + 1)*16;
}
int stk_func;

//---------------函数打印相关-------------------------------
vector<string> Func_Other;
string other_out;     // 这个string 用来记录其他的语句

void Out_Print(){
    for(int i = 0;i < Func_Other.size();i++){
        out << Func_Other[i] << endl;
    }
    Func_Other.clear();
}


#line 110 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
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
   by #include "xcw_parser.tab.h".  */
#ifndef YY_YY_HOME_XCW_XCW3_COMPILER_COMPILER_TIGGER2RISCV_BUILD_XCW_PARSER_TAB_H_INCLUDED
# define YY_YY_HOME_XCW_XCW3_COMPILER_COMPILER_TIGGER2RISCV_BUILD_XCW_PARSER_TAB_H_INCLUDED
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
    ADD = 258,
    SUB = 259,
    MUL = 260,
    DIV = 261,
    MOD = 262,
    ASSIGN = 263,
    EQ = 264,
    NEQ = 265,
    LE = 266,
    LEQ = 267,
    GE = 268,
    GEQ = 269,
    NOT = 270,
    AND = 271,
    OR = 272,
    NUM = 273,
    IDENT = 274,
    MALLOC = 275,
    LBRAC = 276,
    RBRAC = 277,
    IF = 278,
    GOTO = 279,
    LABEL = 280,
    PARAM = 281,
    CALL = 282,
    RETURN = 283,
    COLON = 284,
    FUNC = 285,
    END = 286,
    REG = 287,
    STORE = 288,
    LOAD = 289,
    LOADADDR = 290
  };
#endif
/* Tokens.  */
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define MOD 262
#define ASSIGN 263
#define EQ 264
#define NEQ 265
#define LE 266
#define LEQ 267
#define GE 268
#define GEQ 269
#define NOT 270
#define AND 271
#define OR 272
#define NUM 273
#define IDENT 274
#define MALLOC 275
#define LBRAC 276
#define RBRAC 277
#define IF 278
#define GOTO 279
#define LABEL 280
#define PARAM 281
#define CALL 282
#define RETURN 283
#define COLON 284
#define FUNC 285
#define END 286
#define REG 287
#define STORE 288
#define LOAD 289
#define LOADADDR 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_XCW_XCW3_COMPILER_COMPILER_TIGGER2RISCV_BUILD_XCW_PARSER_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   94

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  83

#define YYUNDEFTOK  2
#define YYMAXUTOK   290

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    52,    56,    60,    67,    84,    92,    96,
     120,   130,   131,   135,   140,   150,   203,   241,   257,   262,
     278,   294,   318,   323,   328,   335,   351,   367,   374,   388,
     396,   397,   401,   402,   403,   404,   405,   406,   410,   411,
     412,   413,   414,   415
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD", "SUB", "MUL", "DIV", "MOD",
  "ASSIGN", "EQ", "NEQ", "LE", "LEQ", "GE", "GEQ", "NOT", "AND", "OR",
  "NUM", "IDENT", "MALLOC", "LBRAC", "RBRAC", "IF", "GOTO", "LABEL",
  "PARAM", "CALL", "RETURN", "COLON", "FUNC", "END", "REG", "STORE",
  "LOAD", "LOADADDR", "$accept", "Program", "ProgramUnit", "GlobalVarDecl",
  "FunctionDef", "FunctionHeader", "FunctionEnd", "Expressions",
  "Expression", "BinOp", "OP", "LOGICOP", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290
};
# endif

#define YYPACT_NINF -18

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-18)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -12,     5,    -5,     0,   -18,   -18,   -18,    37,   -10,    11,
     -18,   -18,    13,    12,    17,    23,   -18,     1,    22,    -7,
       2,    24,   -18,   -18,    45,    44,    14,   -18,   -18,   -18,
      -1,    49,    50,    41,    42,    43,    46,    47,   -18,   -18,
     -18,    55,   -18,   -18,   -18,   -18,   -18,   -18,    48,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,    29,    51,    57,   -18,
     -18,   -18,   -18,   -18,   -18,    63,    58,    66,   -17,   -18,
     -18,   -18,    77,    64,    62,    67,   -18,   -18,    56,   -18,
     -18,   -18,   -18
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     4,     5,     0,     0,     0,
       1,     3,     0,     0,     0,     0,    14,     0,     0,     0,
       0,     0,    11,     6,     0,     0,     0,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     8,    12,
       7,     0,    42,    43,    38,    39,    40,    41,     0,    33,
      34,    35,    36,    37,    32,    13,    18,     0,     0,    25,
      26,    27,    28,    29,    10,     0,     0,     0,     0,    30,
      31,    17,     0,     0,     0,     0,    16,    15,     0,     9,
      21,    20,    19
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -18,   -18,    87,   -18,   -18,   -18,   -18,   -18,    70,   -18,
      36,    38
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,    38,    21,    22,    68,
      57,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      10,    76,    49,    50,    51,    52,    53,     1,    23,    30,
      24,    33,    34,     8,    54,    77,     9,    55,     2,     1,
      35,    36,    31,    42,    43,    44,    45,    46,    47,    25,
       2,    56,    49,    50,    51,    52,    53,    27,    42,    43,
      44,    45,    46,    47,    54,    26,    28,    12,    13,    14,
      67,    15,    16,    29,    32,    37,    17,    18,    19,    20,
      12,    13,    14,    40,    15,    16,    41,    58,    59,    17,
      18,    19,    20,    60,    61,    62,    65,    64,    63,    72,
      66,    73,    74,    71,    75,    78,    79,    80,    82,    81,
      11,    39,    69,     0,    70
};

static const yytype_int8 yycheck[] =
{
       0,    18,     3,     4,     5,     6,     7,    19,    18,     8,
      20,    18,    19,     8,    15,    32,    21,    18,    30,    19,
      18,    19,    21,     9,    10,    11,    12,    13,    14,    18,
      30,    32,     3,     4,     5,     6,     7,    25,     9,    10,
      11,    12,    13,    14,    15,    32,    29,    23,    24,    25,
      21,    27,    28,    30,    32,    31,    32,    33,    34,    35,
      23,    24,    25,    18,    27,    28,    22,    18,    18,    32,
      33,    34,    35,    32,    32,    32,    21,    30,    32,    22,
      32,    18,    24,    32,    18,     8,    22,    25,    32,    22,
       3,    21,    56,    -1,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    30,    37,    38,    39,    40,    41,     8,    21,
       0,    38,    23,    24,    25,    27,    28,    32,    33,    34,
      35,    43,    44,    18,    20,    18,    32,    25,    29,    30,
       8,    21,    32,    18,    19,    18,    19,    31,    42,    44,
      18,    22,     9,    10,    11,    12,    13,    14,    47,     3,
       4,     5,     6,     7,    15,    18,    32,    46,    18,    18,
      32,    32,    32,    32,    30,    21,    32,    21,    45,    46,
      47,    32,    22,    18,    24,    18,    18,    32,     8,    22,
      25,    22,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    38,    38,    39,    39,    40,    41,
      42,    43,    43,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      45,    45,    46,    46,    46,    46,    46,    46,    47,    47,
      47,    47,    47,    47
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     3,     4,     3,     7,
       2,     1,     2,     3,     1,     5,     5,     4,     3,     6,
       6,     6,     2,     2,     2,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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
        case 4:
#line 57 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        Out_Print();
    }
#line 1367 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 61 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        Out_Print();
    }
#line 1375 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 68 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        other_out = " .global " + (*ToStr(yyvsp[-2]));
        Func_Other.push_back(other_out);
        other_out = " .section .sdata";
        Func_Other.push_back(other_out);
        other_out = " .align 2";
        Func_Other.push_back(other_out);
        other_out = " .type " + (*ToStr(yyvsp[-2])) + ", @object";
        Func_Other.push_back(other_out);
        other_out = " .size " + (*ToStr(yyvsp[-2])) + ", 4";
        Func_Other.push_back(other_out);
        other_out = (*ToStr(yyvsp[-2])) + ":";
        Func_Other.push_back(other_out);
        other_out = " .word " + to_string((*(ToInt(yyvsp[0]))));
        Func_Other.push_back(other_out);
    }
#line 1396 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 85 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        other_out = " .comm " + (*ToStr(yyvsp[-3])) + ", " + to_string((*(ToInt(yyvsp[0])))) + ", 4";
        Func_Other.push_back(other_out);
    }
#line 1405 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 97 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        string* str_func = new string;
        *str_func = (ToStr(yyvsp[-6]))->substr(2);
        other_out = " .text ";
        Func_Other.push_back(other_out);
        other_out = " .align 2";
        Func_Other.push_back(other_out);
        other_out = " .global " + (*str_func);
        Func_Other.push_back(other_out);
        other_out = " .type " + (*str_func) + ", @function";
        Func_Other.push_back(other_out);
        other_out = "main:";
        Func_Other.push_back(other_out);

        stk_func = STK_OP(*(ToInt(yyvsp[-1])));
        other_out = " addi sp, sp, -" + to_string(stk_func);
        Func_Other.push_back(other_out);
        other_out = " sw ra, " + to_string(stk_func - 4) + "(sp)";
        Func_Other.push_back(other_out);
    }
#line 1430 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 121 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        string* str_func = new string;
        *str_func = (ToStr(yyvsp[0]))->substr(2);
        other_out = " .size " + (*str_func) + " .-" + (*str_func);
        Func_Other.push_back(other_out);
    }
#line 1441 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 136 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        other_out = " li " + (*(ToStr(yyvsp[-2]))) + ", " + to_string(*ToInt(yyvsp[0]));
        Func_Other.push_back(other_out);
    }
#line 1450 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 141 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        other_out = " lw ra, " + to_string(stk_func - 4) + "(sp)";
        Func_Other.push_back(other_out);
        other_out = " addi sp, sp, " + to_string(stk_func);
        Func_Other.push_back(other_out);
        other_out = " ret";
        Func_Other.push_back(other_out);
        
    }
#line 1464 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 151 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        string* str_op = new string((*ToStr(yyvsp[-1])));
        if((*str_op) == "<="){
            other_out = " sgt ";
            other_out += ((*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", " + (*ToStr(yyvsp[0])));
            Func_Other.push_back(other_out);
            other_out = " seqz " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-4]));
            Func_Other.push_back(other_out);
        }
        else if((*str_op) == ">="){
            other_out = " slt ";
            other_out += ((*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", " + (*ToStr(yyvsp[0])));
            Func_Other.push_back(other_out);
            other_out = " seqz " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-4]));
            Func_Other.push_back(other_out);
        }
        else if((*str_op) == "&&"){
            other_out = " snez ";
            other_out += ((*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])));
            Func_Other.push_back(other_out);
            other_out = " snez s0, " + (*ToStr(yyvsp[0]));
            Func_Other.push_back(other_out);
            other_out = " and " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-4])) + ", s0";
            Func_Other.push_back(other_out);
        }
        else if((*str_op) == "||"){
            other_out = " or ";
            other_out += ((*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", " + (*ToStr(yyvsp[0])));
            Func_Other.push_back(other_out);
            other_out = " snez " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-4]));
            Func_Other.push_back(other_out);
        }
        else if((*str_op) == "!="){
            other_out = " xor ";
            other_out += ((*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", " + (*ToStr(yyvsp[0])));
            Func_Other.push_back(other_out);
            other_out = " snez " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-4]));
            Func_Other.push_back(other_out);
        }
        else if((*str_op) == "=="){
            other_out = " xor ";
            other_out += ((*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", " + (*ToStr(yyvsp[0])));
            Func_Other.push_back(other_out);
            other_out = " seqz " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-4]));
            Func_Other.push_back(other_out);
        }
        else{
            other_out = " " + ((*ToStr(yyvsp[-1])) + " " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", " + (*ToStr(yyvsp[0])));
            Func_Other.push_back(other_out);
        }
        
    }
#line 1521 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 204 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        int ass_num = (*(ToInt(yyvsp[0])));
        out << "ass_num = "<<ass_num<<endl;
        string* str_op = new string((*ToStr(yyvsp[-1])));
        out << "str_op = "<<(*str_op)<<endl;
        if((*str_op) == "add"){
            if(ass_num > 2047 || ass_num < -2048){  
                other_out = " li s0 " + to_string(ass_num);
                Func_Other.push_back(other_out);  
                other_out = " add " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", s0";
                Func_Other.push_back(other_out);  
            }
            else{
                other_out = " addi " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", " + to_string(ass_num);
                Func_Other.push_back(other_out);
            }
        }
        else if((*str_op) == "slt"){
            if(ass_num > 2047 || ass_num < -2048){  
                other_out = " li s0 " + to_string(ass_num);
                Func_Other.push_back(other_out);  
                other_out = " slt " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", s0";
                Func_Other.push_back(other_out);  
            }
            else{
                other_out = " slti " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", "+ to_string(ass_num);
                Func_Other.push_back(other_out);
            }
        }
        else{
            out << "in else" << endl;
            other_out = " li s0, " + to_string(ass_num);
            Func_Other.push_back(other_out);
            other_out = " " + (*ToStr(yyvsp[-1])) + " " + (*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", s0";
            Func_Other.push_back(other_out);   
        }
    }
#line 1563 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 242 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        string* str_op = new string((*ToStr(yyvsp[-1])));
        if((*str_op) == "add"){
            other_out = " mv " + (*ToStr(yyvsp[-3])) + ", " + (*ToStr(yyvsp[0]));
            Func_Other.push_back(other_out);  
        }
        else if((*str_op) == "sub"){
            other_out = " neg " + (*ToStr(yyvsp[-3])) + ", " + (*ToStr(yyvsp[0]));
            Func_Other.push_back(other_out);  
        }
        else if((*str_op) == "!"){
            other_out = " seqz " + (*ToStr(yyvsp[-3])) + ", " + (*ToStr(yyvsp[0]));
            Func_Other.push_back(other_out);  
        }
    }
#line 1583 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 258 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        other_out = " mv " + (*ToStr(yyvsp[-2])) + ", " + (*ToStr(yyvsp[0]));
        Func_Other.push_back(other_out);  
    }
#line 1592 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 263 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {     // reg1[int12] = reg2
        int ass_num = (*(ToInt(yyvsp[-3]))) ;     ///得到int12
        if(ass_num > 2047 || ass_num < -2048){       
            other_out = " li s0 " + to_string(ass_num);
            Func_Other.push_back(other_out);  
            other_out = " add s0, " + (*ToStr(yyvsp[-5])) + ", s0";
            Func_Other.push_back(other_out);  
            other_out = " sw " + (*ToStr(yyvsp[0])) + ", 0(s0)";
            Func_Other.push_back(other_out);  
        }
        else{
            other_out = " sw " + (*ToStr(yyvsp[0])) + ", " + to_string(ass_num) + "(" + (*ToStr(yyvsp[-5])) + ")";
            Func_Other.push_back(other_out);
        }
    }
#line 1612 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 279 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {// reg1 = reg2[int12]
        int ass_num = (*(ToInt(yyvsp[-1]))) ;     ///得到int12
        if(ass_num > 2047 || ass_num < -2048){       
            other_out = " li s0 " + to_string(ass_num);
            Func_Other.push_back(other_out);  
            other_out = " add s0, " + (*ToStr(yyvsp[-3])) + ", s0";
            Func_Other.push_back(other_out);  
            other_out = " lw " + (*ToStr(yyvsp[-5])) + ", 0(s0)";
            Func_Other.push_back(other_out);  
        }
        else{
            other_out = " lw " + (*ToStr(yyvsp[-5])) + ", " + to_string(ass_num) + "(" + (*ToStr(yyvsp[-3])) + ")";
            Func_Other.push_back(other_out);
        }
    }
#line 1632 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 295 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        string* str_op = new string((*ToStr(yyvsp[-3])));
        if((*str_op) == "slt"){      //表示 <
            other_out = " blt ";
        }
        else if((*str_op) == "sgt"){
            other_out = " bgt ";
        }
        else if((*str_op) == "<="){
            other_out = " ble ";
        }
        else if((*str_op) == ">="){
            other_out = " bge ";
        }
        else if((*str_op) == "!="){
            other_out = " bne ";
        }
        else if((*str_op) == "=="){
            other_out = " beq ";
        }
        other_out += ((*ToStr(yyvsp[-4])) + ", " + (*ToStr(yyvsp[-2])) + ", ." + (*ToStr(yyvsp[0])));
        Func_Other.push_back(other_out);
    }
#line 1660 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 319 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        other_out = " j." + (*ToStr(yyvsp[0]));
        Func_Other.push_back(other_out);
    }
#line 1669 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 324 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        other_out = " ." + (*ToStr(yyvsp[0])) + ":";
        Func_Other.push_back(other_out);
    }
#line 1678 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 329 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        string* str_func = new string;
        *str_func = (ToStr(yyvsp[0]))->substr(2);
        other_out = " call" + (*str_func) + ":";
        Func_Other.push_back(other_out);
    }
#line 1689 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 336 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        int ass_num = (*(ToInt(yyvsp[0]))) ;     ///得到int10
        if(ass_num > 511 || ass_num < -512){       
            other_out = " li s0 " + to_string(ass_num * 4);
            Func_Other.push_back(other_out);  
            other_out = " add s0, sp, s0";
            Func_Other.push_back(other_out);  
            other_out = " sw " + (*ToStr(yyvsp[-1])) + ", 0(s0)";
            Func_Other.push_back(other_out);  
        }
        else{
            other_out = " sw " + (*ToStr(yyvsp[-1])) + ", " + to_string(ass_num * 4) + "(sp)";
            Func_Other.push_back(other_out);
        }
    }
#line 1709 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 352 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        int ass_num = (*(ToInt(yyvsp[-1]))) ;     ///得到int10
        if(ass_num > 511 || ass_num < -512){       
            other_out = " li s0 " + to_string(ass_num * 4);
            Func_Other.push_back(other_out);  
            other_out = " add s0, sp, s0";
            Func_Other.push_back(other_out);  
            other_out = " lw " + (*ToStr(yyvsp[0])) + ", 0(s0)";
            Func_Other.push_back(other_out);  
        }
        else{
            other_out = " lw " + (*ToStr(yyvsp[0])) + ", " + to_string(ass_num * 4) + "(sp)";
            Func_Other.push_back(other_out);
        }
    }
#line 1729 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 368 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        other_out = " lui " + (*ToStr(yyvsp[0])) + ", %hi(" + (*ToStr(yyvsp[-1])) + ")";
        Func_Other.push_back(other_out);
        other_out = " lw " + (*ToStr(yyvsp[0])) + ", %lo(" + (*ToStr(yyvsp[-1])) + ")(" + (*ToStr(yyvsp[0])) + ")";
        Func_Other.push_back(other_out);
    }
#line 1740 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 375 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        int ass_num = (*(ToInt(yyvsp[-1]))) ;     ///得到int10
        if(ass_num > 511 || ass_num < -512){       
            other_out = " li s0 " + to_string(ass_num * 4);
            Func_Other.push_back(other_out);  
            other_out = " add " + (*(ToStr(yyvsp[0]))) + ", sp, s0";
            Func_Other.push_back(other_out);  
        }
        else{
            other_out = " addi " + (*ToStr(yyvsp[0])) + ", sp, " + to_string(ass_num * 4);
            Func_Other.push_back(other_out);
        }
    }
#line 1758 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 389 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1652  */
    {
        other_out = " la " + (*ToStr(yyvsp[0])) + ", " + (*ToStr(yyvsp[-1]));
        Func_Other.push_back(other_out);
    }
#line 1767 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
    break;


#line 1771 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/build/xcw_parser.tab.c" /* yacc.c:1652  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 419 "/home/xcw/xcw3_Compiler/Compiler_Tigger2RiscV/source/riscv_parser.y" /* yacc.c:1918  */


void yyerror(const char *s) {
    cout << "Line " << yylineno << ": " << s << endl;
    exit(1);
}

void yyerror(const string &s) {
    yyerror(s.c_str());
}

int main(int argc, char **argv) {
    if (argc >= 4)
        if ((yyin = fopen(argv[3], "r")) == NULL)
            yyerror("Cannot open input file.");
    
    if (argc >= 6)
        if (freopen(argv[5], "w", stdout) == NULL)
            yyerror("Cannot open output file.");

    yyparse();

    return 0;
}
