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



#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "genksyms.h"

static int is_typedef;
static int is_extern;
static char *current_name;
static struct string_list *decl_spec;

static void yyerror(const char *);

static inline void
remove_node(struct string_list **p)
{
  struct string_list *node = *p;
  *p = node->next;
  free_node(node);
}

static inline void
remove_list(struct string_list **pb, struct string_list **pe)
{
  struct string_list *b = *pb, *e = *pe;
  *pb = e;
  free_list(b, e);
}

/* Record definition of a struct/union/enum */
static void record_compound(struct string_list **keyw,
		       struct string_list **ident,
		       struct string_list **body,
		       enum symbol_type type)
{
	struct string_list *b = *body, *i = *ident, *r;

	if (i->in_source_file) {
		remove_node(keyw);
		(*ident)->tag = type;
		remove_list(body, ident);
		return;
	}
	r = copy_node(i); r->tag = type;
	r->next = (*keyw)->next; *body = r; (*keyw)->next = NULL;
	add_symbol(i->string, type, b, is_extern);
}




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
   by #include "parse.tab.h".  */
#ifndef YY_YY_SCRIPTS_GENKSYMS_PARSE_TAB_H_INCLUDED
# define YY_YY_SCRIPTS_GENKSYMS_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ASM_KEYW = 258,
    ATTRIBUTE_KEYW = 259,
    AUTO_KEYW = 260,
    BOOL_KEYW = 261,
    BUILTIN_INT_KEYW = 262,
    CHAR_KEYW = 263,
    CONST_KEYW = 264,
    DOUBLE_KEYW = 265,
    ENUM_KEYW = 266,
    EXTERN_KEYW = 267,
    EXTENSION_KEYW = 268,
    FLOAT_KEYW = 269,
    INLINE_KEYW = 270,
    INT_KEYW = 271,
    LONG_KEYW = 272,
    REGISTER_KEYW = 273,
    RESTRICT_KEYW = 274,
    SHORT_KEYW = 275,
    SIGNED_KEYW = 276,
    STATIC_KEYW = 277,
    STRUCT_KEYW = 278,
    TYPEDEF_KEYW = 279,
    UNION_KEYW = 280,
    UNSIGNED_KEYW = 281,
    VOID_KEYW = 282,
    VOLATILE_KEYW = 283,
    TYPEOF_KEYW = 284,
    VA_LIST_KEYW = 285,
    EXPORT_SYMBOL_KEYW = 286,
    ASM_PHRASE = 287,
    ATTRIBUTE_PHRASE = 288,
    TYPEOF_PHRASE = 289,
    BRACE_PHRASE = 290,
    BRACKET_PHRASE = 291,
    EXPRESSION_PHRASE = 292,
    CHAR = 293,
    DOTS = 294,
    IDENT = 295,
    INT = 296,
    REAL = 297,
    STRING = 298,
    TYPE = 299,
    OTHER = 300,
    FILENAME = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SCRIPTS_GENKSYMS_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */



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
#define YYLAST   531

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      50,    51,    52,     2,    49,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,    47,
       2,    53,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    48,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   115,   119,   119,   125,   125,   127,   127,
     129,   130,   131,   132,   133,   134,   138,   152,   153,   157,
     165,   178,   184,   185,   189,   190,   194,   200,   204,   205,
     206,   207,   208,   212,   213,   214,   215,   219,   221,   223,
     227,   229,   231,   236,   239,   240,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   260,
     265,   266,   270,   271,   275,   275,   275,   276,   284,   285,
     289,   298,   307,   309,   311,   313,   320,   321,   325,   326,
     327,   329,   331,   333,   335,   340,   341,   342,   346,   347,
     351,   352,   357,   362,   364,   368,   369,   377,   381,   383,
     385,   387,   389,   394,   403,   404,   409,   414,   415,   419,
     420,   424,   425,   429,   431,   436,   437,   441,   442,   446,
     447,   448,   452,   456,   457,   461,   462,   466,   467,   470,
     475,   483,   487,   488,   492
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ASM_KEYW", "ATTRIBUTE_KEYW",
  "AUTO_KEYW", "BOOL_KEYW", "BUILTIN_INT_KEYW", "CHAR_KEYW", "CONST_KEYW",
  "DOUBLE_KEYW", "ENUM_KEYW", "EXTERN_KEYW", "EXTENSION_KEYW",
  "FLOAT_KEYW", "INLINE_KEYW", "INT_KEYW", "LONG_KEYW", "REGISTER_KEYW",
  "RESTRICT_KEYW", "SHORT_KEYW", "SIGNED_KEYW", "STATIC_KEYW",
  "STRUCT_KEYW", "TYPEDEF_KEYW", "UNION_KEYW", "UNSIGNED_KEYW",
  "VOID_KEYW", "VOLATILE_KEYW", "TYPEOF_KEYW", "VA_LIST_KEYW",
  "EXPORT_SYMBOL_KEYW", "ASM_PHRASE", "ATTRIBUTE_PHRASE", "TYPEOF_PHRASE",
  "BRACE_PHRASE", "BRACKET_PHRASE", "EXPRESSION_PHRASE", "CHAR", "DOTS",
  "IDENT", "INT", "REAL", "STRING", "TYPE", "OTHER", "FILENAME", "';'",
  "'}'", "','", "'('", "')'", "'*'", "'='", "'{'", "':'", "$accept",
  "declaration_seq", "declaration", "$@1", "declaration1", "$@2", "$@3",
  "simple_declaration", "init_declarator_list_opt", "init_declarator_list",
  "init_declarator", "decl_specifier_seq_opt", "decl_specifier_seq",
  "decl_specifier", "storage_class_specifier", "type_specifier",
  "simple_type_specifier", "ptr_operator", "cvar_qualifier_seq_opt",
  "cvar_qualifier_seq", "cvar_qualifier", "declarator",
  "direct_declarator", "nested_declarator", "direct_nested_declarator",
  "parameter_declaration_clause", "parameter_declaration_list_opt",
  "parameter_declaration_list", "parameter_declaration",
  "m_abstract_declarator", "direct_m_abstract_declarator",
  "function_definition", "initializer_opt", "initializer", "class_body",
  "member_specification_opt", "member_specification", "member_declaration",
  "member_declarator_list_opt", "member_declarator_list",
  "member_declarator", "member_bitfield_declarator", "attribute_opt",
  "enum_body", "enumerator_list", "enumerator", "asm_definition",
  "asm_phrase_opt", "export_definition", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,    59,   125,    44,
      40,    41,    42,    61,   123,    58
};
# endif

#define YYPACT_NINF -136

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-136)))

#define YYTABLE_NINF -111

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -136,    24,  -136,   210,  -136,  -136,    19,  -136,  -136,  -136,
    -136,  -136,  -136,    -9,  -136,    26,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,     6,  -136,    11,  -136,  -136,
    -136,    39,  -136,    40,   -18,  -136,  -136,  -136,  -136,  -136,
      28,   487,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,    17,    34,  -136,  -136,    43,   106,  -136,   487,
      43,  -136,   487,    55,  -136,  -136,  -136,    28,    -3,    51,
      50,  -136,    28,     5,    23,  -136,  -136,    48,    21,  -136,
     487,  -136,    35,   -29,    54,   158,  -136,  -136,    28,  -136,
     399,    52,    53,    57,  -136,    -3,  -136,  -136,    28,  -136,
    -136,  -136,  -136,  -136,   258,    68,  -136,   -26,  -136,  -136,
    -136,    64,  -136,    12,    69,    41,  -136,    25,    83,    88,
    -136,  -136,  -136,    91,  -136,   109,  -136,  -136,     3,    44,
    -136,    27,  -136,    95,  -136,  -136,  -136,   -21,    92,    93,
     108,    96,  -136,  -136,  -136,  -136,  -136,    97,  -136,    98,
    -136,  -136,   118,  -136,   305,  -136,   -29,   101,  -136,   104,
    -136,  -136,   352,  -136,  -136,   120,  -136,  -136,  -136,  -136,
    -136,   447,  -136,  -136,   111,   131,  -136,  -136,  -136,   138,
     139,  -136,  -136,  -136,  -136,  -136,  -136,  -136
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     4,     2,     0,     1,     3,     0,    28,    55,    57,
      46,    64,    53,     0,    31,     0,    52,    32,    48,    49,
      29,    67,    47,    50,    30,     0,     8,     0,    51,    54,
      65,     0,    56,     0,     0,    66,    36,    58,     5,    10,
      17,    23,    24,    26,    27,    33,    34,    11,    12,    13,
      14,    15,    39,     0,    43,     6,    37,     0,    44,    22,
      38,    45,     0,     0,   131,    70,    71,     0,    60,     0,
      18,    19,     0,   132,    69,    25,    42,   129,     0,   127,
      22,    40,     0,   115,     0,     0,   111,     9,    17,    41,
      95,     0,     0,     0,    59,    61,    62,    16,     0,    68,
     133,   103,   123,    74,     0,     0,   125,     0,     7,   114,
     108,    78,    79,     0,     0,     0,   123,    77,     0,   116,
     117,   121,   107,     0,   112,   132,    96,    58,     0,    95,
      92,    94,    35,     0,    75,    63,    20,   104,     0,     0,
      86,    89,    90,   130,   126,   128,   120,     0,    78,     0,
     122,    76,   119,    82,     0,   113,     0,     0,    97,     0,
      93,   100,     0,   134,   124,     0,    21,   105,    73,    72,
      85,     0,    84,    83,     0,     0,   118,   102,   101,     0,
       0,   106,    87,    91,    81,    80,    99,    98
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,   159,  -136,  -136,  -136,  -136,   -52,  -136,  -136,
      73,    -1,   -62,   -33,  -136,  -136,  -136,   -80,  -136,  -136,
     -51,   -31,  -136,   -95,  -136,  -135,  -136,  -136,   -61,   -42,
    -136,  -136,  -136,  -136,   -22,  -136,  -136,   110,  -136,  -136,
      37,    85,    78,   145,  -136,    94,  -136,  -136,  -136
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    38,    80,    59,    39,    69,    70,
      71,    83,    41,    42,    43,    44,    45,    72,    94,    95,
      46,   125,    74,   116,   117,   139,   140,   141,   142,   130,
     131,    47,   166,   167,    58,    84,    85,    86,   118,   119,
     120,   121,   137,    54,    78,    79,    48,   102,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,    91,    40,   115,   157,    61,    11,    87,    75,    73,
     129,   111,   164,   147,    77,   112,    21,    96,   149,   175,
     151,   113,   144,    68,     4,    30,   114,   180,   108,    64,
      35,    52,   165,   115,    81,   115,    93,   100,    89,   -95,
     101,    99,    90,   126,   135,    53,    56,   158,   129,   129,
      55,    60,   148,   128,   -95,    68,   112,    75,    88,   103,
      57,   153,   113,   161,    68,    57,    50,    51,    65,   106,
     107,    53,    66,   104,    77,   154,   115,   162,    67,    88,
      68,   148,   109,   110,   126,   112,   159,   160,   158,    62,
      63,   113,    90,    68,   128,    92,    68,    57,    97,    98,
      90,   105,   122,   132,   133,   143,   150,    82,   134,    90,
     183,     7,     8,     9,    10,    11,    12,    13,    14,   114,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     155,    27,    28,    29,    30,    31,    32,   156,   109,    35,
      36,   100,   163,   168,   169,   171,   -22,   170,   172,   173,
      37,   164,   177,   -22,  -109,   178,   -22,   181,   -22,   123,
       5,   -22,   184,     7,     8,     9,    10,    11,    12,    13,
      14,   136,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   185,    27,    28,    29,    30,    31,    32,   186,
     187,    35,    36,   176,   152,   124,   146,    76,   -22,     0,
       0,   145,    37,     0,     0,   -22,  -110,     0,   -22,     0,
     -22,     6,     0,   -22,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     0,
     -22,     0,     0,     0,    37,     0,     0,   -22,     0,   138,
     -22,     0,   -22,     7,     8,     9,    10,    11,    12,    13,
      14,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    27,    28,    29,    30,    31,    32,     0,
       0,    35,    36,     0,     0,     0,     0,   -88,     0,     0,
       0,     0,    37,     0,     0,     0,   174,     0,     0,   -88,
       7,     8,     9,    10,    11,    12,    13,    14,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      27,    28,    29,    30,    31,    32,     0,     0,    35,    36,
       0,     0,     0,     0,   -88,     0,     0,     0,     0,    37,
       0,     0,     0,   179,     0,     0,   -88,     7,     8,     9,
      10,    11,    12,    13,    14,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    27,    28,    29,
      30,    31,    32,     0,     0,    35,    36,     0,     0,     0,
       0,   -88,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,   -88,     7,     8,     9,    10,    11,    12,
      13,    14,     0,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    27,    28,    29,    30,    31,    32,
       0,     0,    35,    36,     0,     0,     0,     0,     0,   126,
       0,     0,     0,   127,     0,     0,     0,     0,     0,   128,
       0,    68,     7,     8,     9,    10,    11,    12,    13,    14,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    27,    28,    29,    30,    31,    32,     0,     0,
      35,    36,     0,     0,     0,     0,   182,     0,     0,     0,
       0,    37,     7,     8,     9,    10,    11,    12,    13,    14,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    27,    28,    29,    30,    31,    32,     0,     0,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37
};

static const yytype_int16 yycheck[] =
{
      62,    62,     3,    83,     1,    27,     9,    59,    41,    40,
      90,    40,    33,     1,    40,    44,    19,    68,   113,   154,
     115,    50,    48,    52,     0,    28,    55,   162,    80,    47,
      33,    40,    53,   113,    56,   115,    67,    32,    60,    36,
      35,    72,   104,    40,    95,    54,    40,    44,   128,   129,
      24,    40,    40,    50,    51,    52,    44,    90,    59,    36,
      54,    36,    50,    36,    52,    54,    47,    48,    40,    48,
      49,    54,    44,    50,    40,    50,   156,    50,    50,    80,
      52,    40,    47,    48,    40,    44,   128,   129,    44,    50,
      50,    50,   154,    52,    50,    40,    52,    54,    47,    49,
     162,    53,    48,    51,    51,    37,    37,     1,    51,   171,
     171,     5,     6,     7,     8,     9,    10,    11,    12,    55,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      47,    25,    26,    27,    28,    29,    30,    49,    47,    33,
      34,    32,    47,    51,    51,    49,    40,    39,    51,    51,
      44,    33,    51,    47,    48,    51,    50,    37,    52,     1,
       1,    55,    51,     5,     6,     7,     8,     9,    10,    11,
      12,    98,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    51,    25,    26,    27,    28,    29,    30,    51,
      51,    33,    34,   156,   116,    85,   111,    52,    40,    -1,
      -1,   107,    44,    -1,    -1,    47,    48,    -1,    50,    -1,
      52,     1,    -1,    55,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,     1,
      50,    -1,    52,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,     1,    -1,    -1,    51,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,     1,    -1,    -1,    51,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    -1,    -1,    33,    34,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    51,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    52,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    44,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,    59,     0,    58,     1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    44,    60,    63,
      67,    68,    69,    70,    71,    72,    76,    87,   102,   104,
      47,    48,    40,    54,    99,    24,    40,    54,    90,    62,
      40,    90,    50,    50,    47,    40,    44,    50,    52,    64,
      65,    66,    73,    77,    78,    69,    99,    40,   100,   101,
      61,    90,     1,    67,    91,    92,    93,    63,    67,    90,
      68,    84,    40,    77,    74,    75,    76,    47,    49,    77,
      32,    35,   103,    36,    50,    53,    48,    49,    63,    47,
      48,    40,    44,    50,    55,    73,    79,    80,    94,    95,
      96,    97,    48,     1,    93,    77,    40,    44,    50,    73,
      85,    86,    51,    51,    51,    76,    66,    98,     1,    81,
      82,    83,    84,    37,    48,   101,    97,     1,    40,    79,
      37,    79,    98,    36,    50,    47,    49,     1,    44,    85,
      85,    36,    50,    47,    33,    53,    88,    89,    51,    51,
      39,    49,    51,    51,     1,    81,    96,    51,    51,     1,
      81,    37,    39,    84,    51,    51,    51,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    59,    58,    61,    60,    62,    60,
      60,    60,    60,    60,    60,    60,    63,    64,    64,    65,
      65,    66,    67,    67,    68,    68,    69,    69,    70,    70,
      70,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    73,
      74,    74,    75,    75,    76,    76,    76,    76,    77,    77,
      78,    78,    78,    78,    78,    78,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    81,    82,    82,
      83,    83,    84,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    87,    88,    88,    89,    90,    90,    91,
      91,    92,    92,    93,    93,    94,    94,    95,    95,    96,
      96,    96,    97,    98,    98,    99,    99,   100,   100,   101,
     101,   102,   103,   103,   104
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     0,     4,     0,     3,
       1,     1,     1,     1,     2,     2,     3,     0,     1,     1,
       3,     4,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     1,     1,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     4,     4,     2,     3,     2,     1,     1,     1,
       4,     4,     2,     3,     3,     2,     1,     3,     0,     1,
       1,     3,     2,     2,     1,     0,     1,     1,     4,     4,
       2,     3,     3,     3,     0,     1,     2,     3,     3,     0,
       1,     1,     2,     3,     2,     0,     1,     1,     3,     2,
       2,     1,     2,     0,     2,     3,     4,     1,     3,     1,
       3,     2,     0,     1,     5
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
        case 4:

    { is_typedef = 0; is_extern = 0; current_name = NULL; decl_spec = NULL; }

    break;

  case 5:

    { free_list(*(yyvsp[0]), NULL); *(yyvsp[0]) = NULL; }

    break;

  case 6:

    { is_typedef = 1; }

    break;

  case 7:

    { (yyval) = (yyvsp[0]); }

    break;

  case 8:

    { is_typedef = 1; }

    break;

  case 9:

    { (yyval) = (yyvsp[0]); }

    break;

  case 14:

    { (yyval) = (yyvsp[0]); }

    break;

  case 15:

    { (yyval) = (yyvsp[0]); }

    break;

  case 16:

    { if (current_name) {
		    struct string_list *decl = (*(yyvsp[0]))->next;
		    (*(yyvsp[0]))->next = NULL;
		    add_symbol(current_name,
			       is_typedef ? SYM_TYPEDEF : SYM_NORMAL,
			       decl, is_extern);
		    current_name = NULL;
		  }
		  (yyval) = (yyvsp[0]);
		}

    break;

  case 17:

    { (yyval) = NULL; }

    break;

  case 19:

    { struct string_list *decl = *(yyvsp[0]);
		  *(yyvsp[0]) = NULL;
		  add_symbol(current_name,
			     is_typedef ? SYM_TYPEDEF : SYM_NORMAL, decl, is_extern);
		  current_name = NULL;
		  (yyval) = (yyvsp[0]);
		}

    break;

  case 20:

    { struct string_list *decl = *(yyvsp[0]);
		  *(yyvsp[0]) = NULL;
		  free_list(*(yyvsp[-1]), NULL);
		  *(yyvsp[-1]) = decl_spec;
		  add_symbol(current_name,
			     is_typedef ? SYM_TYPEDEF : SYM_NORMAL, decl, is_extern);
		  current_name = NULL;
		  (yyval) = (yyvsp[0]);
		}

    break;

  case 21:

    { (yyval) = (yyvsp[0]) ? (yyvsp[0]) : (yyvsp[-1]) ? (yyvsp[-1]) : (yyvsp[-2]) ? (yyvsp[-2]) : (yyvsp[-3]); }

    break;

  case 22:

    { decl_spec = NULL; }

    break;

  case 24:

    { decl_spec = *(yyvsp[0]); }

    break;

  case 25:

    { decl_spec = *(yyvsp[0]); }

    break;

  case 26:

    { /* Version 2 checksumming ignores storage class, as that
		     is really irrelevant to the linkage.  */
		  remove_node((yyvsp[0]));
		  (yyval) = (yyvsp[0]);
		}

    break;

  case 31:

    { is_extern = 1; (yyval) = (yyvsp[0]); }

    break;

  case 32:

    { is_extern = 0; (yyval) = (yyvsp[0]); }

    break;

  case 37:

    { remove_node((yyvsp[-1])); (*(yyvsp[0]))->tag = SYM_STRUCT; (yyval) = (yyvsp[0]); }

    break;

  case 38:

    { remove_node((yyvsp[-1])); (*(yyvsp[0]))->tag = SYM_UNION; (yyval) = (yyvsp[0]); }

    break;

  case 39:

    { remove_node((yyvsp[-1])); (*(yyvsp[0]))->tag = SYM_ENUM; (yyval) = (yyvsp[0]); }

    break;

  case 40:

    { record_compound((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), SYM_STRUCT); (yyval) = (yyvsp[0]); }

    break;

  case 41:

    { record_compound((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), SYM_UNION); (yyval) = (yyvsp[0]); }

    break;

  case 42:

    { record_compound((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), SYM_ENUM); (yyval) = (yyvsp[0]); }

    break;

  case 43:

    { add_symbol(NULL, SYM_ENUM, NULL, 0); (yyval) = (yyvsp[0]); }

    break;

  case 44:

    { (yyval) = (yyvsp[0]); }

    break;

  case 45:

    { (yyval) = (yyvsp[0]); }

    break;

  case 58:

    { (*(yyvsp[0]))->tag = SYM_TYPEDEF; (yyval) = (yyvsp[0]); }

    break;

  case 59:

    { (yyval) = (yyvsp[0]) ? (yyvsp[0]) : (yyvsp[-1]); }

    break;

  case 60:

    { (yyval) = NULL; }

    break;

  case 63:

    { (yyval) = (yyvsp[0]); }

    break;

  case 67:

    { /* restrict has no effect in prototypes so ignore it */
		  remove_node((yyvsp[0]));
		  (yyval) = (yyvsp[0]);
		}

    break;

  case 68:

    { (yyval) = (yyvsp[0]); }

    break;

  case 70:

    { if (current_name != NULL) {
		    error_with_pos("unexpected second declaration name");
		    YYERROR;
		  } else {
		    current_name = (*(yyvsp[0]))->string;
		    (yyval) = (yyvsp[0]);
		  }
		}

    break;

  case 71:

    { if (current_name != NULL) {
		    error_with_pos("unexpected second declaration name");
		    YYERROR;
		  } else {
		    current_name = (*(yyvsp[0]))->string;
		    (yyval) = (yyvsp[0]);
		  }
		}

    break;

  case 72:

    { (yyval) = (yyvsp[0]); }

    break;

  case 73:

    { (yyval) = (yyvsp[0]); }

    break;

  case 74:

    { (yyval) = (yyvsp[0]); }

    break;

  case 75:

    { (yyval) = (yyvsp[0]); }

    break;

  case 76:

    { (yyval) = (yyvsp[0]); }

    break;

  case 80:

    { (yyval) = (yyvsp[0]); }

    break;

  case 81:

    { (yyval) = (yyvsp[0]); }

    break;

  case 82:

    { (yyval) = (yyvsp[0]); }

    break;

  case 83:

    { (yyval) = (yyvsp[0]); }

    break;

  case 84:

    { (yyval) = (yyvsp[0]); }

    break;

  case 85:

    { (yyval) = (yyvsp[0]); }

    break;

  case 87:

    { (yyval) = (yyvsp[0]); }

    break;

  case 88:

    { (yyval) = NULL; }

    break;

  case 91:

    { (yyval) = (yyvsp[0]); }

    break;

  case 92:

    { (yyval) = (yyvsp[0]) ? (yyvsp[0]) : (yyvsp[-1]); }

    break;

  case 93:

    { (yyval) = (yyvsp[0]) ? (yyvsp[0]) : (yyvsp[-1]); }

    break;

  case 95:

    { (yyval) = NULL; }

    break;

  case 96:

    { /* For version 2 checksums, we don't want to remember
		     private parameter names.  */
		  remove_node((yyvsp[0]));
		  (yyval) = (yyvsp[0]);
		}

    break;

  case 97:

    { remove_node((yyvsp[0]));
		  (yyval) = (yyvsp[0]);
		}

    break;

  case 98:

    { (yyval) = (yyvsp[0]); }

    break;

  case 99:

    { (yyval) = (yyvsp[0]); }

    break;

  case 100:

    { (yyval) = (yyvsp[0]); }

    break;

  case 101:

    { (yyval) = (yyvsp[0]); }

    break;

  case 102:

    { (yyval) = (yyvsp[0]); }

    break;

  case 103:

    { struct string_list *decl = *(yyvsp[-1]);
		  *(yyvsp[-1]) = NULL;
		  add_symbol(current_name, SYM_NORMAL, decl, is_extern);
		  (yyval) = (yyvsp[0]);
		}

    break;

  case 104:

    { (yyval) = NULL; }

    break;

  case 106:

    { remove_list((yyvsp[0]), &(*(yyvsp[-1]))->next); (yyval) = (yyvsp[0]); }

    break;

  case 107:

    { (yyval) = (yyvsp[0]); }

    break;

  case 108:

    { (yyval) = (yyvsp[0]); }

    break;

  case 109:

    { (yyval) = NULL; }

    break;

  case 112:

    { (yyval) = (yyvsp[0]); }

    break;

  case 113:

    { (yyval) = (yyvsp[0]); }

    break;

  case 114:

    { (yyval) = (yyvsp[0]); }

    break;

  case 115:

    { (yyval) = NULL; }

    break;

  case 118:

    { (yyval) = (yyvsp[0]); }

    break;

  case 119:

    { (yyval) = (yyvsp[0]) ? (yyvsp[0]) : (yyvsp[-1]); }

    break;

  case 120:

    { (yyval) = (yyvsp[0]); }

    break;

  case 122:

    { (yyval) = (yyvsp[0]); }

    break;

  case 123:

    { (yyval) = NULL; }

    break;

  case 125:

    { (yyval) = (yyvsp[0]); }

    break;

  case 126:

    { (yyval) = (yyvsp[0]); }

    break;

  case 129:

    {
			const char *name = strdup((*(yyvsp[0]))->string);
			add_symbol(name, SYM_ENUM_CONST, NULL, 0);
		}

    break;

  case 130:

    {
			const char *name = strdup((*(yyvsp[-2]))->string);
			struct string_list *expr = copy_list_range(*(yyvsp[0]), *(yyvsp[-1]));
			add_symbol(name, SYM_ENUM_CONST, expr, 0);
		}

    break;

  case 131:

    { (yyval) = (yyvsp[0]); }

    break;

  case 132:

    { (yyval) = NULL; }

    break;

  case 134:

    { export_symbol((*(yyvsp[-2]))->string); (yyval) = (yyvsp[0]); }

    break;



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



static void
yyerror(const char *e)
{
  error_with_pos("%s", e);
}
