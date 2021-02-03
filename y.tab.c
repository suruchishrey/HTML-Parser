/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "html_parser.y" /* yacc.c:339  */
 
   /* Definition section */
    #include<stdio.h> 
    #include<stdlib.h> 
    #include<string.h>
    #include <limits.h>
    #define SIZE 40
    #define LENGTH 20

    int curr_id=0;

    struct node {
    int vertex;
    char data[LENGTH];
    char parent[LENGTH];
    struct node* next;
    };

    struct queue {
    struct node items[SIZE];
    int front;
    int rear;
    };
    
    struct node* createNode(int dataVertex,char*dataValue);
    void pushNode(char*name);
    void popNode();
    int isEmptyStack(struct node* root);
    void push(struct node** root, int dataVertex,char* dataValue);
    int pop(struct node** root,char*data);
    int top(struct node* root,char*data);
    struct queue* createQueue();
    void enqueue(struct queue* q, int, char*, char*);
    int dequeue(struct queue* q, char*, char*);
    void display(struct queue* q);
    int isEmpty(struct queue* q);
    void printQueue(struct queue* q);

    struct node* createNode(int,char*);

    struct Graph {
      int numVertices;
      int numEdges;
      struct node** adjLists;
      int* visited;
    };
    struct Graph* createGraph(int vertices);
    struct queue* createQueue();
    void bfs(struct Graph* graph, int startVertex, char* startValue);
    void addEdge(struct Graph* graph, int src, int dest, char* srcValue, char* destValue);
    void yyerror(char *msg); 
    struct Graph* graph;
    struct node* root = NULL;
    struct node temp;
    struct node*temp_ptr=&temp;

#line 123 "y.tab.c" /* yacc.c:339  */

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
    DOC_START = 258,
    DOC_END = 259,
    HEAD_START = 260,
    HEAD_END = 261,
    BODY_START = 262,
    BODY_END = 263,
    BF_START = 264,
    BF_END = 265,
    UF_START = 266,
    UF_END = 267,
    EM_START = 268,
    EM_END = 269,
    TT_START = 270,
    TT_END = 271,
    STRONG_START = 272,
    STRONG_END = 273,
    SMALL_START = 274,
    SMALL_END = 275,
    IT_START = 276,
    IT_END = 277,
    UL_START = 278,
    UL_END = 279,
    OL_START = 280,
    OL_END = 281,
    LI_START = 282,
    LI_END = 283,
    H1_START = 284,
    H1_END = 285,
    H2_START = 286,
    H2_END = 287,
    H3_START = 288,
    H3_END = 289,
    H4_START = 290,
    H4_END = 291,
    TITLE_START = 292,
    TITLE_END = 293,
    FONT_START = 294,
    FONT_END = 295,
    CENTER_START = 296,
    CENTER_END = 297,
    HREF_START = 298,
    HREF_END = 299,
    DL_START = 300,
    DL_END = 301,
    DT_START = 302,
    DT_END = 303,
    DD_START = 304,
    DD_END = 305,
    INVALID_TAG = 306
  };
#endif
/* Tokens.  */
#define DOC_START 258
#define DOC_END 259
#define HEAD_START 260
#define HEAD_END 261
#define BODY_START 262
#define BODY_END 263
#define BF_START 264
#define BF_END 265
#define UF_START 266
#define UF_END 267
#define EM_START 268
#define EM_END 269
#define TT_START 270
#define TT_END 271
#define STRONG_START 272
#define STRONG_END 273
#define SMALL_START 274
#define SMALL_END 275
#define IT_START 276
#define IT_END 277
#define UL_START 278
#define UL_END 279
#define OL_START 280
#define OL_END 281
#define LI_START 282
#define LI_END 283
#define H1_START 284
#define H1_END 285
#define H2_START 286
#define H2_END 287
#define H3_START 288
#define H3_END 289
#define H4_START 290
#define H4_END 291
#define TITLE_START 292
#define TITLE_END 293
#define FONT_START 294
#define FONT_END 295
#define CENTER_START 296
#define CENTER_END 297
#define HREF_START 298
#define HREF_END 299
#define DL_START 300
#define DL_END 301
#define DT_START 302
#define DT_END 303
#define DD_START 304
#define DD_END 305
#define INVALID_TAG 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 276 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   112

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    69,    69,    68,    85,    85,    94,    94,   102,   102,
     110,   110,   117,   118,   120,   121,   122,   124,   124,   131,
     131,   138,   138,   145,   145,   152,   152,   159,   159,   166,
     166,   173,   173,   180,   180,   187,   187,   194,   194,   201,
     201,   208,   208,   215,   215,   222,   223,   224,   226,   226,
     235,   235,   245,   246,   248,   248,   256,   256,   264,   265,
     267,   267,   276,   277,   279,   279,   287
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOC_START", "DOC_END", "HEAD_START",
  "HEAD_END", "BODY_START", "BODY_END", "BF_START", "BF_END", "UF_START",
  "UF_END", "EM_START", "EM_END", "TT_START", "TT_END", "STRONG_START",
  "STRONG_END", "SMALL_START", "SMALL_END", "IT_START", "IT_END",
  "UL_START", "UL_END", "OL_START", "OL_END", "LI_START", "LI_END",
  "H1_START", "H1_END", "H2_START", "H2_END", "H3_START", "H3_END",
  "H4_START", "H4_END", "TITLE_START", "TITLE_END", "FONT_START",
  "FONT_END", "CENTER_START", "CENTER_END", "HREF_START", "HREF_END",
  "DL_START", "DL_END", "DT_START", "DT_END", "DD_START", "DD_END",
  "INVALID_TAG", "\";\"", "$accept", "Doc", "$@1", "Head", "$@2", "$@3",
  "Body", "$@4", "Title", "$@5", "Wspace", "Html", "Item", "$@6", "$@7",
  "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16",
  "$@17", "$@18", "$@19", "List", "$@20", "$@21", "ItemList", "OneItem",
  "$@22", "Desc_List", "$@23", "DItemList", "OneDItem", "$@24",
  "DItemDescList", "OneDDescItem", "$@25", "Other", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -80

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-80)))

#define YYTABLE_NINF -67

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -47,   -80,    10,    55,   -80,   -80,   -47,    54,    63,   -47,
      33,    66,    68,   -80,    70,   -80,   -80,   -47,    40,   -80,
      21,    75,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
      22,    72,    21,   -80,   -80,   -80,   -80,    21,    21,    21,
      21,    21,    21,    21,   -47,   -47,    21,    21,    21,    21,
      21,    21,    21,    34,   -80,   -80,    73,    74,    76,    77,
      64,    71,    62,    61,    61,    65,    60,    67,    58,    56,
      57,    53,   -80,   -44,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -47,   -80,   -47,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,    21,   -80,    34,    21,   -23,    -7,    50,
     -80,    78,   -80,   -80,   -80,    51,   -80,   -80,   -43,   -80,
      21,    51,    52,   -80,   -80
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      12,    13,     0,     0,     1,     2,    12,     0,     4,    12,
       0,     0,     0,    10,     0,     7,     8,    12,     0,     5,
      14,     0,    11,    27,    29,    31,    33,    35,    37,    43,
      48,    50,    17,    19,    21,    23,    41,    39,    25,    56,
      16,     0,    14,    45,    46,    47,     3,    14,    14,    14,
      14,    14,    14,    14,    12,    12,    14,    14,    14,    14,
      14,    14,    14,     0,     9,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    12,    59,    28,    30,    32,    34,    36,
      38,    44,    54,    12,    53,    12,    18,    20,    22,    24,
      42,    40,    26,    14,    57,     0,    14,     0,     0,     0,
      58,     0,    49,    52,    51,     0,    55,    64,    61,    63,
      14,     0,     0,    62,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
      -6,   -35,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
      29,   -79,   -80,   -80,   -80,   -80,    -1,   -80,   -80,   -16,
     -80,   -80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     6,     9,    10,    11,    17,    20,    14,    18,
       3,    41,    42,    56,    57,    58,    59,    62,    47,    48,
      49,    50,    51,    52,    61,    60,    53,    43,    54,    55,
      93,    94,   106,    44,    63,    83,    84,   103,   118,   119,
     120,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       7,   112,   104,    12,    92,     1,   -12,    65,     1,     1,
       4,    21,    66,    67,    68,    69,    70,    71,    72,   114,
      92,    75,    76,    77,    78,    79,    80,    81,   113,   113,
      23,   -66,    24,   -66,    25,   -66,    26,   -66,    27,   -66,
      28,   -66,    29,   -66,    30,   -66,    31,   -66,    73,    74,
      32,   -66,    33,   -66,    34,   -66,    35,   -66,     5,     8,
      36,   -66,    37,   -66,    38,   -66,    39,   -66,   109,    -6,
      13,   111,    15,    40,   -66,    16,    19,   105,    22,    46,
      64,    82,    89,    85,    91,   122,    86,   107,    92,   108,
      87,    90,    97,    88,    99,    96,   100,   102,   115,   101,
     117,    98,   124,    95,   110,   123,   116,     0,     0,     0,
       0,     0,   121
};

static const yytype_int8 yycheck[] =
{
       6,    24,    46,     9,    27,    52,    49,    42,    52,    52,
       0,    17,    47,    48,    49,    50,    51,    52,    53,    26,
      27,    56,    57,    58,    59,    60,    61,    62,   107,   108,
       9,     9,    11,    11,    13,    13,    15,    15,    17,    17,
      19,    19,    21,    21,    23,    23,    25,    25,    54,    55,
      29,    29,    31,    31,    33,    33,    35,    35,     3,     5,
      39,    39,    41,    41,    43,    43,    45,    45,   103,     6,
      37,   106,     6,    52,    52,     7,     6,    83,    38,     4,
       8,    47,    18,    10,    22,   120,    12,    93,    27,    95,
      14,    20,    32,    16,    36,    30,    40,    44,    48,    42,
      49,    34,    50,    74,   105,   121,    28,    -1,    -1,    -1,
      -1,    -1,   118
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    54,    63,     0,     3,    55,    63,     5,    56,
      57,    58,    63,    37,    61,     6,     7,    59,    62,     6,
      60,    63,    38,     9,    11,    13,    15,    17,    19,    21,
      23,    25,    29,    31,    33,    35,    39,    41,    43,    45,
      52,    64,    65,    80,    86,    94,     4,    71,    72,    73,
      74,    75,    76,    79,    81,    82,    66,    67,    68,    69,
      78,    77,    70,    87,     8,    64,    64,    64,    64,    64,
      64,    64,    64,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    47,    88,    89,    10,    12,    14,    16,    18,
      20,    22,    27,    83,    84,    83,    30,    32,    34,    36,
      40,    42,    44,    90,    46,    63,    85,    63,    63,    64,
      89,    64,    24,    84,    26,    48,    28,    49,    91,    92,
      93,    63,    64,    92,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    57,    56,    58,    56,    60,    59,
      62,    61,    63,    63,    64,    64,    64,    66,    65,    67,
      65,    68,    65,    69,    65,    70,    65,    71,    65,    72,
      65,    73,    65,    74,    65,    75,    65,    76,    65,    77,
      65,    78,    65,    79,    65,    65,    65,    65,    81,    80,
      82,    80,    83,    83,    85,    84,    87,    86,    88,    88,
      90,    89,    91,    91,    93,    92,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     9,     0,     4,     0,     3,     0,     4,
       0,     3,     0,     1,     0,     2,     1,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     1,     1,     0,     6,
       0,     6,     3,     1,     0,     4,     0,     4,     3,     1,
       0,     5,     3,     1,     0,     4,     1
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
        case 2:
#line 69 "html_parser.y" /* yacc.c:1646  */
    {
                          push(&root,curr_id,"<html>");
                          curr_id++;
                      }
#line 1451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "html_parser.y" /* yacc.c:1646  */
    {
                      popNode();
                      printf("\n\nValid\n");
                      bfs(graph,0,"<html>");
                    }
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 85 "html_parser.y" /* yacc.c:1646  */
    {
                        pushNode("<head>");
                      }
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 91 "html_parser.y" /* yacc.c:1646  */
    {
                      popNode();
                    }
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 94 "html_parser.y" /* yacc.c:1646  */
    {
                        pushNode("<head>");
                      }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 98 "html_parser.y" /* yacc.c:1646  */
    {
                      popNode();
                    }
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 102 "html_parser.y" /* yacc.c:1646  */
    {
                        pushNode("<body>");
                      }
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 106 "html_parser.y" /* yacc.c:1646  */
    {
                      popNode();
                    }
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 110 "html_parser.y" /* yacc.c:1646  */
    {
                          pushNode("<title>");
                        }
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 113 "html_parser.y" /* yacc.c:1646  */
    {
                        popNode();
                      }
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 124 "html_parser.y" /* yacc.c:1646  */
    {
                      pushNode("<h1>");
                  }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 128 "html_parser.y" /* yacc.c:1646  */
    {
                  popNode();
                }
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 131 "html_parser.y" /* yacc.c:1646  */
    {
                      pushNode("<h2>");
                  }
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 135 "html_parser.y" /* yacc.c:1646  */
    {
                  popNode();
                }
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 138 "html_parser.y" /* yacc.c:1646  */
    {
                      pushNode("<h3>");
                  }
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 142 "html_parser.y" /* yacc.c:1646  */
    {
                  popNode();
                }
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 145 "html_parser.y" /* yacc.c:1646  */
    {
                      pushNode("<h4>");
                  }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 149 "html_parser.y" /* yacc.c:1646  */
    {
                  popNode();
                }
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 152 "html_parser.y" /* yacc.c:1646  */
    {
                  pushNode("<a href>");
                }
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 156 "html_parser.y" /* yacc.c:1646  */
    {
                popNode();
              }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 159 "html_parser.y" /* yacc.c:1646  */
    {
                pushNode("<b>");
              }
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 163 "html_parser.y" /* yacc.c:1646  */
    {
              popNode();  
            }
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 166 "html_parser.y" /* yacc.c:1646  */
    {
                  pushNode("<u>");
                }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 170 "html_parser.y" /* yacc.c:1646  */
    {
                popNode();
              }
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 173 "html_parser.y" /* yacc.c:1646  */
    {
                  pushNode("<em>");
                }
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 177 "html_parser.y" /* yacc.c:1646  */
    {
                popNode();
              }
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 180 "html_parser.y" /* yacc.c:1646  */
    {
                  pushNode("<tt>");
                }
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 184 "html_parser.y" /* yacc.c:1646  */
    {
                popNode();
              }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 187 "html_parser.y" /* yacc.c:1646  */
    {
                  pushNode("<strong>");
                }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 191 "html_parser.y" /* yacc.c:1646  */
    {
                popNode();
              }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 194 "html_parser.y" /* yacc.c:1646  */
    {
                  pushNode("<small>");
                }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 198 "html_parser.y" /* yacc.c:1646  */
    {
                popNode();
              }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 201 "html_parser.y" /* yacc.c:1646  */
    {
                  pushNode("<center>");
                }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 205 "html_parser.y" /* yacc.c:1646  */
    {
                popNode();
              }
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 208 "html_parser.y" /* yacc.c:1646  */
    {
                  pushNode("<font size>");
                }
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 212 "html_parser.y" /* yacc.c:1646  */
    {
                popNode();
              }
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 215 "html_parser.y" /* yacc.c:1646  */
    {
                pushNode("<i>");
              }
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 219 "html_parser.y" /* yacc.c:1646  */
    {
              popNode();
            }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 226 "html_parser.y" /* yacc.c:1646  */
    {
                      pushNode("<ul>");
                    }
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 232 "html_parser.y" /* yacc.c:1646  */
    {
                    popNode();
                  }
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 235 "html_parser.y" /* yacc.c:1646  */
    {
                      pushNode("<ol>");
                    }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 241 "html_parser.y" /* yacc.c:1646  */
    {
                    popNode();
                  }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 248 "html_parser.y" /* yacc.c:1646  */
    {
                          pushNode("<li>");
                        }
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 252 "html_parser.y" /* yacc.c:1646  */
    {
                        popNode();
                      }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 256 "html_parser.y" /* yacc.c:1646  */
    {
                          pushNode("<dl>");
                        }
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 260 "html_parser.y" /* yacc.c:1646  */
    {
                  popNode();
                }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 267 "html_parser.y" /* yacc.c:1646  */
    {
                          pushNode("<dt>");
                        }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 272 "html_parser.y" /* yacc.c:1646  */
    {
                                popNode();
                              }
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 279 "html_parser.y" /* yacc.c:1646  */
    {
                            pushNode("<dd>");
                          }
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 283 "html_parser.y" /* yacc.c:1646  */
    {
                    popNode();
                  }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1849 "y.tab.c" /* yacc.c:1646  */
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
#line 290 "html_parser.y" /* yacc.c:1906  */
 
  
#include"lex.yy.c" 

//push node in the stack
void pushNode(char*name)
{
  temp_ptr->vertex=top(root,temp_ptr->data);
  addEdge(graph,temp_ptr->vertex,curr_id,temp_ptr->data,name);
  push(&root,curr_id,name);
  curr_id++;
}

void popNode()
{
  temp_ptr->vertex=pop(&root,temp_ptr->data);
  //curr_id--;
}

int isEmptyStack(struct node* root)
{
    return !root;
}
 
void push(struct node** root, int dataVertex, char* dataValue)
{
    struct node* node = createNode(dataVertex,dataValue);
    node->next = *root;
    *root = node;
    //printf("%d->%s pushed to stack\n", dataVertex,dataValue);
}
 
int pop(struct node** root,char*data)
{
    if (isEmptyStack(*root))
        return INT_MIN;
    struct node* temp = *root;
    *root = (*root)->next;
    int popped = temp->vertex;
    strcpy(data,temp->data);
    free(temp);
    //printf("%d->%s popped from stack\n", popped,data);
    return popped;
}
 
int top(struct node* root, char*data)
{
    if (isEmptyStack(root))
        return INT_MIN;
    else{
      strcpy(data,root->data);
      return root->vertex;
    }    
}
 
// BFS algorithm
void bfs(struct Graph* graph, int startVertex, char* startValue) {
  struct queue* q = createQueue();
  int level=1,queuedVertices=0;
  
  graph->numVertices = graph->numEdges+1;
  graph->visited[startVertex] = 1;
  enqueue(q, -20, "null","null");
  enqueue(q, startVertex, startValue,"root");
  queuedVertices++;

  while (!isEmpty(q)) {
    printQueue(q);
    char currentString[20];
    char currentParent[20];
    int currentVertex = dequeue(q,currentString,currentParent);
    if(currentVertex==-20)
    {
        printf("\nLevel %d:\n",level);
        level++;
        if(queuedVertices<graph->numVertices)
        enqueue(q, -20, "null","null");
    }
    else{
        printf("Visited %s -> %s\n", currentParent, currentString);
      
        struct node* temp = graph->adjLists[currentVertex];
        while (temp) {
            int adjVertex = temp->vertex;
            char adjString[20],adjParent[20];
            strcpy(adjString,temp->data);
            strcpy(adjParent,temp->parent);

            if (graph->visited[adjVertex] == 0) {
                graph->visited[adjVertex] = 1;
                enqueue(q, adjVertex, adjString, adjParent);
                queuedVertices++;
            }
            temp = temp->next;
        }
    }
    
  }
}

// Creating a node
struct node* createNode(int v, char* data) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->vertex = v;
  newNode->next = NULL;
  strcpy(newNode->data,data);
  return newNode;
}

// Creating a graph
struct Graph* createGraph(int vertices) {
  struct Graph* graph = malloc(sizeof(struct Graph));
  graph->numVertices = vertices;
  graph->numEdges = 0;
  graph->adjLists = malloc(vertices * sizeof(struct node*));
  graph->visited = malloc(vertices * sizeof(int));

  int i;
  for (i = 0; i < vertices; i++) {
    graph->adjLists[i] = NULL;
    graph->visited[i] = 0;
  }

  return graph;
}

// Add edge
void addEdge(struct Graph* graph, int src, int dest, char* srcValue, char* destValue) {
  // Add edge from src to dest
  struct node* newNode = createNode(dest,destValue);
  strcpy(newNode->parent,srcValue);
  newNode->next = graph->adjLists[src];
  graph->adjLists[src] = newNode;

  /* Add edge from dest to src
  newNode = createNode(src,srcValue);
  newNode->next = graph->adjLists[dest];
  graph->adjLists[dest] = newNode;*/

  printf("\nAdded edge from %s to %s",srcValue,destValue);
  graph->numEdges++;
}

// Create a queue
struct queue* createQueue() {
  struct queue* q = malloc(sizeof(struct queue));
  q->front = -1;
  q->rear = -1;
  return q;
}

// Check if the queue is empty
int isEmpty(struct queue* q) {
  if (q->rear == -1)
    return 1;
  else
    return 0;
}

// Adding elements into queue
void enqueue(struct queue* q, int value, char* data, char* parent) {
  if (q->rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (q->front == -1)
      q->front = 0;
    q->rear++;
    q->items[q->rear].vertex = value;
    strcpy(q->items[q->rear].data,data);
    strcpy(q->items[q->rear].parent,parent);
  }
}

// Removing elements from queue
int dequeue(struct queue* q,char* str, char*parent) {
  int item;
  if (isEmpty(q)) {
    printf("Queue is empty");
    item = -1;
  } else {
    item = q->items[q->front].vertex;
    strcpy(str,q->items[q->front].data);
    strcpy(parent,q->items[q->front].parent);
    q->front++;
    if (q->front > q->rear) {
      //printf("Resetting queue ");
      q->front = q->rear = -1;
    }
  }
  return item;
}

// Print the queue
void printQueue(struct queue* q) {
  int i = q->front;

  if (isEmpty(q)) {
    printf("Queue is empty");
  } else {
    /*printf("\nQueue contains \n");
    for (i = q->front; i < q->rear + 1; i++) {
      printf(" %d->%s ", q->items[i].vertex,q->items[i].data);
    }*/
  }
}

void yyerror(char *msg) 
{ 
  printf("\nError in format!!\n");
  printf("Error | Line: %d\n%s\n",yylineno,msg); 
  exit(0); 
} 

//driver code 
int main()  
{ 
    extern FILE *yyin;
    graph = createGraph(SIZE); 
        /* open the source file  
           in read mode 
           lex file1.l
           yacc file1.y -d
           gcc y.tab.c -lfl -ly
           ./a.out
           */
    printf("\nEnter file name: ");
    char filename[40];
    scanf("%s",&filename);
    yyin=fopen(filename,"r"); 
    //printf("Enter:\t");

    yyparse(); 
    printf("\nEND\n"); 
    return 0; 
} 
