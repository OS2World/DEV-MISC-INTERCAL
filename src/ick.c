
/*  A Bison parser, made from ick.y with Bison version GNU Bison version 1.22
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	GETS	258
#define	RESIZE	259
#define	NEXT	260
#define	FORGET	261
#define	RESUME	262
#define	STASH	263
#define	RETRIEVE	264
#define	IGNORE	265
#define	REMEMBER	266
#define	ABSTAIN	267
#define	REINSTATE	268
#define	DISABLE	269
#define	ENABLE	270
#define	GIVE_UP	271
#define	READ_OUT	272
#define	WRITE_IN	273
#define	COME_FROM	274
#define	DO	275
#define	PLEASE	276
#define	NOT	277
#define	MESH	278
#define	ONESPOT	279
#define	TWOSPOT	280
#define	TAIL	281
#define	HYBRID	282
#define	MINGLE	283
#define	SELECT	284
#define	SPARK	285
#define	EARS	286
#define	SUB	287
#define	BY	288
#define	BADCHAR	289
#define	NUMBER	290
#define	UNARY	291
#define	OHOHSEVEN	292
#define	GERUND	293
#define	LABEL	294
#define	INTERSECTION	295
#define	SPLATTERED	296
#define	TESTNZ	297
#define	C_AND	298
#define	C_OR	299
#define	C_XOR	300
#define	C_NOT	301
#define	EQUALS	302
#define	AND	303
#define	OR	304
#define	XOR	305
#define	FIN	306
#define	MESH32	307
#define	WHIRL	308
#define	WHIRL2	309
#define	WHIRL3	310
#define	WHIRL4	311
#define	WHIRL5	312
#define	HIGHPREC	313


#include <stdio.h>
#include "sizes.h"
#include "ick.h"
#include "feh.h"
#include "lose.h"

extern int yyerror(char*);

/* Intervene our first-stage lexer. */
extern int lexer(void);
#define yylex() lexer()

static node *rlist;	/* pointer to current right-hand node list */
/*static node *llist;*/	/* pointer to current left-hand node list */
static node *np;	/* variable for building node lists */

extern int stbeginline;	/* line number of last seen preamble */
static int thisline;	/* line number of beginning of current statement */
static tuple *splat(void);

#define GETLINENO					\
    {if (stbeginline < 0) thisline = -stbeginline;	\
     else {thisline = stbeginline; stbeginline = 0;}}

#define ACTION(x, nt, nn)	\
    {x = newtuple(); x->type = nt; x->lineno = thisline; x->u.node = nn;}
#define TARGET(x, nt, nn)	\
    {x = newtuple(); x->type = nt; x->lineno = thisline; x->u.target = nn;}
#define NEWFANGLED	if (traditional) lose(E111,yylineno,(char*)NULL); else


typedef union
{
    int		numval;		/* a numeric value */
    tuple	*tuple;		/* a code tuple */
    node	*node;		/* an expression-tree node */
} YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		144
#define	YYFLAG		-32768
#define	YYNTBASE	59

#define YYTRANSLATE(x) ((unsigned)(x) <= 313 ? yytranslate[x] : 85)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     7,    11,    15,    20,    22,    24,    27,
    31,    35,    38,    41,    44,    47,    50,    53,    56,    59,
    62,    65,    68,    71,    74,    76,    79,    81,    83,    85,
    89,    91,    93,    95,    97,   100,   103,   106,   109,   113,
   117,   120,   122,   126,   128,   130,   132,   136,   138,   140,
   142,   144,   146,   150,   152,   156,   158,   160,   164,   168,
   171,   174,   176,   178,   180,   182,   186,   190,   192,   196,
   200,   204,   208,   212,   216,   218,   220,   222,   224,   226,
   228,   230,   234,   239,   244,   248
};

static const short yyrhs[] = {    -1,
    59,    60,     0,    61,    62,     0,    61,    37,    62,     0,
    39,    61,    62,     0,    39,    61,    37,    62,     0,     1,
     0,    20,     0,    20,    22,     0,    65,     3,    82,     0,
    67,     3,    75,     0,    39,     5,     0,     6,    82,     0,
     7,    82,     0,     8,    70,     0,     9,    70,     0,    10,
    70,     0,    11,    70,     0,    12,    39,     0,    12,    63,
     0,    13,    39,     0,    13,    63,     0,    18,    72,     0,
    17,    74,     0,    16,     0,    19,    39,     0,    34,     0,
     1,     0,    38,     0,    63,    40,    38,     0,    66,     0,
    67,     0,    66,     0,    76,     0,    24,    35,     0,    25,
    35,     0,    26,    35,     0,    27,    35,     0,    26,    36,
    35,     0,    27,    36,    35,     0,    23,    35,     0,    64,
     0,    70,    40,    64,     0,    66,     0,    76,     0,    67,
     0,    71,    40,    72,     0,    71,     0,    66,     0,    76,
     0,    69,     0,    67,     0,    73,    40,    74,     0,    73,
     0,    82,    33,    75,     0,    82,     0,    77,     0,    67,
    32,    78,     0,    67,    32,    79,     0,    84,    78,     0,
    84,    79,     0,    77,     0,    81,     0,    84,     0,    81,
     0,    68,    32,    78,     0,    68,    32,    79,     0,    84,
     0,    84,    29,    84,     0,    84,    29,    76,     0,    84,
    29,    80,     0,    84,    28,    84,     0,    84,    28,    76,
     0,    84,    28,    80,     0,    76,     0,    80,     0,    23,
     0,    24,     0,    25,     0,    64,     0,    69,     0,    83,
    36,    35,     0,    30,    36,    82,    30,     0,    31,    36,
    82,    31,     0,    30,    82,    30,     0,    31,    82,    31,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   108,   109,   118,   120,   122,   124,   126,   131,   132,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   158,   160,
   169,   169,   171,   171,   173,   179,   187,   193,   203,   211,
   222,   234,   235,   241,   241,   241,   242,   243,   247,   247,
   247,   247,   248,   249,   255,   256,   260,   261,   263,   265,
   266,   268,   269,   270,   274,   275,   278,   283,   284,   285,
   286,   287,   288,   289,   290,   291,   294,   294,   294,   296,
   297,   300,   318,   324,   331,   332
};

static const char * const yytname[] = {   "$","error","$illegal.","GETS","RESIZE",
"NEXT","FORGET","RESUME","STASH","RETRIEVE","IGNORE","REMEMBER","ABSTAIN","REINSTATE",
"DISABLE","ENABLE","GIVE_UP","READ_OUT","WRITE_IN","COME_FROM","DO","PLEASE",
"NOT","MESH","ONESPOT","TWOSPOT","TAIL","HYBRID","MINGLE","SELECT","SPARK","EARS",
"SUB","BY","BADCHAR","NUMBER","UNARY","OHOHSEVEN","GERUND","LABEL","INTERSECTION",
"SPLATTERED","TESTNZ","C_AND","C_OR","C_XOR","C_NOT","EQUALS","AND","OR","XOR",
"FIN","MESH32","WHIRL","WHIRL2","WHIRL3","WHIRL4","WHIRL5","HIGHPREC","program",
"command","please","perform","gerunds","variable","lvalue","scalar","array",
"oparray","constant","varlist","initem","inlist","outitem","outlist","byexpr",
"subscr","subscr1","sublist","sublist1","osubscr","osubscr1","expr","preftype",
"unambig",""
};
#endif

static const short yyr1[] = {     0,
    59,    59,    60,    60,    60,    60,    60,    61,    61,    62,
    62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
    62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
    64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
    69,    70,    70,    71,    71,    71,    72,    72,    73,    73,
    73,    73,    74,    74,    75,    75,    76,    76,    77,    78,
    78,    79,    79,    79,    80,    80,    81,    82,    82,    82,
    82,    82,    82,    82,    82,    82,    83,    83,    83,    84,
    84,    84,    84,    84,    84,    84
};

static const short yyr2[] = {     0,
     0,     2,     2,     3,     3,     4,     1,     1,     2,     3,
     3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     1,     2,     1,     1,     1,     3,
     1,     1,     1,     1,     2,     2,     2,     2,     3,     3,
     2,     1,     3,     1,     1,     1,     3,     1,     1,     1,
     1,     1,     3,     1,     3,     1,     1,     3,     3,     2,
     2,     1,     1,     1,     1,     3,     3,     1,     3,     3,
     3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
     1,     3,     4,     4,     3,     3
};

static const short yydefact[] = {     1,
     0,     7,     8,     0,     2,     0,     9,     0,    28,     0,
     0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
     0,     0,     0,     0,     0,    27,     0,     0,     3,     0,
    33,     0,    34,    57,     0,     5,    77,    78,    79,     0,
     0,     0,     0,    80,    31,    32,     0,    81,    75,    76,
    65,    13,     0,    68,    14,    42,    32,    15,    16,    17,
    18,    29,    19,    20,    21,    22,     0,    49,    52,    51,
    54,    24,    50,    44,    46,    48,    23,    45,    26,    35,
    36,    37,    38,     4,    12,     0,     0,     0,     6,    41,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    10,    11,    56,    32,     0,    62,
    58,    59,    63,    64,    39,    40,     0,    85,     0,    86,
    66,    67,    82,    73,    74,    72,    70,    71,    69,    43,
    30,    53,    47,     0,     0,     0,    60,    61,    83,    84,
    55,    64,     0,     0
};

static const short yydefgoto[] = {     1,
     5,     6,    29,    64,    44,    30,    45,    46,    47,    48,
    58,    76,    77,    71,    72,   106,    49,    34,   111,   112,
    50,    51,   107,    53,    54
};

static const short yypact[] = {-32768,
    57,-32768,   -17,    -4,-32768,   115,-32768,   149,-32768,   216,
   216,    80,    80,    80,    80,    21,    27,-32768,   120,    80,
   -16,     8,    13,    18,    32,-32768,   183,    45,-32768,    53,
-32768,    15,-32768,-32768,   183,-32768,    39,     8,    13,    34,
    37,   188,   202,-32768,-32768,    48,    51,-32768,-32768,-32768,
-32768,-32768,    58,    64,-32768,-32768,-32768,    47,    47,    47,
    47,-32768,-32768,    61,-32768,    61,    39,-32768,    48,-32768,
    69,-32768,-32768,-32768,    48,    72,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   216,   216,   216,-32768,-32768,
   100,   101,   216,   107,   216,   117,   216,   103,   216,   216,
    80,   113,   120,    80,-32768,-32768,   130,   121,   132,-32768,
-32768,-32768,-32768,   154,-32768,-32768,   139,-32768,   140,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   216,   216,   216,-32768,-32768,-32768,-32768,
-32768,-32768,   170,-32768
};

static const short yypgoto[] = {-32768,
-32768,   168,    36,   165,    12,-32768,    14,    -6,   -46,   -18,
    -3,-32768,    81,-32768,    84,    63,    11,   -36,   -82,   -52,
    20,   -33,    -7,-32768,   -60
};


#define	YYLAST		247


static const short yytable[] = {    32,
    70,    32,    52,    55,     7,    57,    57,    57,    57,    59,
    60,    61,    69,    75,   121,     3,    33,    87,    33,    31,
    32,    31,    79,    56,    56,    56,    56,   114,    32,    73,
    78,   137,    68,    74,    94,    96,   114,    33,   126,   129,
    31,   109,    80,    36,   122,    33,    88,    81,    31,    85,
   109,   110,    82,   114,   113,    86,   143,     2,    62,    63,
   110,   138,    84,   113,    62,    65,    83,   109,    82,    91,
    89,    83,    92,    90,   142,   142,     3,   110,   105,    88,
   113,   108,    97,   122,    70,   117,   101,   119,   109,   109,
   108,    99,   100,    98,    57,     4,    69,    75,   110,   110,
   102,   113,   113,    22,    23,    24,    25,   108,   103,   124,
   127,   104,   130,    73,    78,     9,    68,    74,   125,   128,
    10,    11,    12,    13,    14,    15,    16,    17,   108,   108,
    18,    19,    20,    21,   115,   116,   118,   123,    22,    23,
    24,    25,    67,    22,    23,    24,    25,   120,    26,     9,
   131,    27,   135,    28,    10,    11,    12,    13,    14,    15,
    16,    17,   134,   136,    18,    19,    20,    21,   139,   144,
   140,     8,    22,    23,    24,    25,    37,    38,    39,    40,
    41,    66,    26,     9,   133,    35,   132,    28,    10,    11,
    12,    13,    14,    15,    16,    17,   141,     0,    18,    19,
    20,    21,     0,     0,     0,     0,    22,    23,    24,    25,
    37,    38,    39,    40,    41,     0,    26,    42,    43,     0,
     0,    28,     0,    93,    37,    38,    39,    40,    41,     0,
     0,    42,    43,     0,     0,     0,     0,    95,    37,    38,
    39,    40,    41,     0,     0,    42,    43
};

static const short yycheck[] = {     6,
    19,     8,    10,    11,    22,    12,    13,    14,    15,    13,
    14,    15,    19,    20,    97,    20,     6,     3,     8,     6,
    27,     8,    39,    12,    13,    14,    15,    88,    35,    19,
    20,   114,    19,    20,    42,    43,    97,    27,    99,   100,
    27,    88,    35,     8,    97,    35,    32,    35,    35,     5,
    97,    88,    35,   114,    88,     3,     0,     1,    38,    39,
    97,   114,    27,    97,    38,    39,    35,   114,    35,    36,
    35,    35,    36,    35,   135,   136,    20,   114,    86,    32,
   114,    88,    32,   136,   103,    93,    40,    95,   135,   136,
    97,    28,    29,    36,   101,    39,   103,   104,   135,   136,
    40,   135,   136,    24,    25,    26,    27,   114,    40,    99,
   100,    40,   101,   103,   104,     1,   103,   104,    99,   100,
     6,     7,     8,     9,    10,    11,    12,    13,   135,   136,
    16,    17,    18,    19,    35,    35,    30,    35,    24,    25,
    26,    27,    23,    24,    25,    26,    27,    31,    34,     1,
    38,    37,    32,    39,     6,     7,     8,     9,    10,    11,
    12,    13,    33,    32,    16,    17,    18,    19,    30,     0,
    31,     4,    24,    25,    26,    27,    23,    24,    25,    26,
    27,    17,    34,     1,   104,    37,   103,    39,     6,     7,
     8,     9,    10,    11,    12,    13,   134,    -1,    16,    17,
    18,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
    23,    24,    25,    26,    27,    -1,    34,    30,    31,    -1,
    -1,    39,    -1,    36,    23,    24,    25,    26,    27,    -1,
    -1,    30,    31,    -1,    -1,    -1,    -1,    36,    23,    24,
    25,    26,    27,    -1,    -1,    30,    31
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */


/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Bob Corbett and Richard Stallman

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */


#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#define YYLEX		yylex(&yylval, &yylloc)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_bcopy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_bcopy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_bcopy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif


int
yyparse()
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_bcopy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_bcopy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_bcopy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 3:
{yyvsp[0].tuple->label = 0; yyvsp[0].tuple->exechance = yyvsp[-1].numval * 100;;
    break;}
case 4:
{yyvsp[0].tuple->label = 0; yyvsp[0].tuple->exechance = yyvsp[-2].numval * yyvsp[-1].numval;;
    break;}
case 5:
{checklabel(yyvsp[-2].numval); yyvsp[0].tuple->label = yyvsp[-2].numval; yyvsp[0].tuple->exechance = yyvsp[-1].numval * 100;;
    break;}
case 6:
{checklabel(yyvsp[-3].numval); yyvsp[0].tuple->label = yyvsp[-3].numval; yyvsp[0].tuple->exechance = yyvsp[-2].numval * yyvsp[-1].numval;;
    break;}
case 7:
{lose(E017, yylineno, (char *)NULL);;
    break;}
case 8:
{GETLINENO; yyval.numval = 1;;
    break;}
case 9:
{GETLINENO; yyval.numval = -1;;
    break;}
case 10:
{ACTION(yyval.tuple, GETS,      cons(GETS,yyvsp[-2].node,yyvsp[0].node));;
    break;}
case 11:
{ACTION(yyval.tuple, RESIZE,    cons(RESIZE,yyvsp[-2].node,yyvsp[0].node));;
    break;}
case 12:
{TARGET(yyval.tuple, NEXT,      yyvsp[-1].numval);;
    break;}
case 13:
{ACTION(yyval.tuple, FORGET,    yyvsp[0].node);;
    break;}
case 14:
{ACTION(yyval.tuple, RESUME,    yyvsp[0].node);;
    break;}
case 15:
{ACTION(yyval.tuple, STASH,     rlist);;
    break;}
case 16:
{ACTION(yyval.tuple, RETRIEVE,  rlist);;
    break;}
case 17:
{ACTION(yyval.tuple, IGNORE,    rlist);;
    break;}
case 18:
{ACTION(yyval.tuple, REMEMBER,  rlist);;
    break;}
case 19:
{TARGET(yyval.tuple, ABSTAIN,   yyvsp[0].numval);;
    break;}
case 20:
{ACTION(yyval.tuple, DISABLE,   rlist);;
    break;}
case 21:
{TARGET(yyval.tuple, REINSTATE, yyvsp[0].numval);;
    break;}
case 22:
{ACTION(yyval.tuple, ENABLE,    rlist);;
    break;}
case 23:
{ACTION(yyval.tuple, WRITE_IN,  yyvsp[0].node);;
    break;}
case 24:
{ACTION(yyval.tuple, READ_OUT,  yyvsp[0].node);;
    break;}
case 25:
{ACTION(yyval.tuple, GIVE_UP,   0);;
    break;}
case 26:
{NEWFANGLED {TARGET(yyval.tuple,COME_FROM,yyvsp[0].numval)};
    break;}
case 27:
{yyclearin; yyval.tuple = splat();;
    break;}
case 28:
{yyclearin; yyval.tuple = splat();;
    break;}
case 29:
{rlist = np = newnode(); np->constant = yyvsp[0].numval;;
    break;}
case 30:
{
		    np->rval = newnode();
		    np = np->rval;
		    np->constant = yyvsp[0].numval;
		;
    break;}
case 35:
{
		    yyval.node = newnode();
		    yyval.node->opcode = ONESPOT;
		    yyval.node->constant = intern(ONESPOT, yyvsp[0].numval);
		;
    break;}
case 36:
{
		    yyval.node = newnode();
		    yyval.node->opcode = TWOSPOT;
		    yyval.node->constant = intern(TWOSPOT, yyvsp[0].numval);
		;
    break;}
case 37:
{
		    yyval.node = newnode();
		    yyval.node->opcode = TAIL;
		    yyval.node->constant = intern(TAIL, yyvsp[0].numval);
		;
    break;}
case 38:
{
		    yyval.node = newnode();
		    yyval.node->opcode = HYBRID;
		    yyval.node->constant = intern(HYBRID, yyvsp[0].numval);
		;
    break;}
case 39:
{
		    yyval.node = newnode();
		    yyval.node->opcode = yyvsp[-1].numval;
		    yyval.node->rval = newnode();
		    yyval.node->rval->opcode = TAIL;
		    yyval.node->rval->constant = intern(TAIL, yyvsp[0].numval);
		;
    break;}
case 40:
{
		    yyval.node = newnode();
		    yyval.node->opcode = yyvsp[-1].numval;
		    yyval.node->rval = newnode();
		    yyval.node->rval->opcode = HYBRID;
		    yyval.node->rval->constant = intern(HYBRID, yyvsp[0].numval);
		;
    break;}
case 41:
{
		    /* enforce the 16-bit constant constraint */
		    if ((unsigned int)yyvsp[0].numval > Max_small)
			lose(E017, yylineno, (char *)NULL);
		    yyval.node = newnode();
		    yyval.node->opcode = MESH;
		    yyval.node->constant = yyvsp[0].numval;
		;
    break;}
case 42:
{rlist = np = yyvsp[0].node;;
    break;}
case 43:
{np = np->rval = yyvsp[0].node;
							/* newnode(); */ ;
    break;}
case 47:
{yyval.node=cons(INTERSECTION,yyvsp[-2].node,yyvsp[0].node);;
    break;}
case 48:
{yyval.node=cons(INTERSECTION,yyvsp[0].node,0);;
    break;}
case 53:
{yyval.node=cons(INTERSECTION,yyvsp[-2].node,yyvsp[0].node);;
    break;}
case 54:
{yyval.node=cons(INTERSECTION,yyvsp[0].node,0);;
    break;}
case 55:
{yyval.node = cons(BY, yyvsp[-2].node, yyvsp[0].node);;
    break;}
case 56:
{yyval.node = cons(BY, yyvsp[0].node, 0);;
    break;}
case 57:
{yyval.node = yyvsp[0].node;;
    break;}
case 58:
{yyval.node = cons(SUB, yyvsp[-2].node, yyvsp[0].node);;
    break;}
case 59:
{yyval.node = cons(SUB, yyvsp[-2].node, yyvsp[0].node);;
    break;}
case 60:
{yyval.node = cons(INTERSECTION, yyvsp[-1].node, yyvsp[0].node);;
    break;}
case 61:
{yyval.node = cons(INTERSECTION, yyvsp[-1].node, yyvsp[0].node);;
    break;}
case 62:
{yyval.node = cons(INTERSECTION, yyvsp[0].node, 0);;
    break;}
case 63:
{yyval.node = cons(INTERSECTION, yyvsp[0].node, 0);;
    break;}
case 64:
{yyval.node = cons(INTERSECTION, yyvsp[0].node, 0);;
    break;}
case 65:
{yyval.node = yyvsp[0].node;;
    break;}
case 66:
{yyval.node = yyvsp[-2].node; yyval.node->rval = cons(SUB, yyval.node->rval, yyvsp[0].node);;
    break;}
case 67:
{yyval.node = yyvsp[-2].node; yyval.node->rval = cons(SUB, yyval.node->rval, yyvsp[0].node);;
    break;}
case 68:
{yyval.node = yyvsp[0].node;;
    break;}
case 69:
{yyval.node = cons(SELECT, yyvsp[-2].node, yyvsp[0].node);;
    break;}
case 70:
{yyval.node = cons(SELECT, yyvsp[-2].node, yyvsp[0].node);;
    break;}
case 71:
{yyval.node = cons(SELECT, yyvsp[-2].node, yyvsp[0].node);;
    break;}
case 72:
{yyval.node = cons(MINGLE, yyvsp[-2].node, yyvsp[0].node);;
    break;}
case 73:
{yyval.node = cons(MINGLE, yyvsp[-2].node, yyvsp[0].node);;
    break;}
case 74:
{yyval.node = cons(MINGLE, yyvsp[-2].node, yyvsp[0].node);;
    break;}
case 75:
{yyval.node = yyvsp[0].node;;
    break;}
case 76:
{yyval.node = yyvsp[0].node;;
    break;}
case 77:
{yyval.numval=MESH; ;
    break;}
case 78:
{yyval.numval=ONESPOT;;
    break;}
case 79:
{yyval.numval=TWOSPOT;;
    break;}
case 80:
{yyval.node = yyvsp[0].node;;
    break;}
case 81:
{yyval.node = yyvsp[0].node;;
    break;}
case 82:
{
		    yyval.node = newnode();
		    yyval.node->opcode = yyvsp[-1].numval;
		    yyval.node->rval = newnode();
		    yyval.node->rval->opcode = yyvsp[-2].numval;
		    if(yyvsp[-2].numval == MESH) {
			    /* enforce the 16-bit constant constraint */
			    if ((unsigned int)yyvsp[0].numval > Max_small)
				lose(E017, yylineno, (char *)NULL);
			    yyval.node->rval->constant = yyvsp[0].numval;
		    }
		    else {
			yyval.node->rval->constant = intern(yyvsp[-2].numval, yyvsp[0].numval);
		    }
		;
    break;}
case 83:
{
		    yyval.node = newnode();
		    yyval.node->opcode = yyvsp[-2].numval;
		    yyval.node->rval = yyvsp[-1].node;
		;
    break;}
case 84:
{
		    yyval.node = newnode();
		    yyval.node->opcode = yyvsp[-2].numval;
		    yyval.node->rval = yyvsp[-1].node;
		;
    break;}
case 85:
{yyval.node = yyvsp[-1].node;;
    break;}
case 86:
{yyval.node = yyvsp[-1].node;;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */


  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}


static tuple *splat(void)
/* try to recover from an invalid statement. */
{
    tuple *sp;
    int tok, i;
    extern bool re_send_token;

    /*
     * The idea
     * here is to skip to the next DO, PLEASE or label, then unget that token.
     * which we can do with a tricky flag on the lexer (re_send_token).
     */

    /*	fprintf(stderr,"attempting to splat at line %d....\n",yylineno); */
    for(i = 0,re_send_token = FALSE;;i++) {
	tok = lexer();
	if (!tok)
	{
	    re_send_token = TRUE;
	    tok = ' ';		/* scanner must not see a NUL */
	    break;
	}
	else if (tok == DO || tok == PLEASE || tok == LABEL) {
	    re_send_token = TRUE;
	    break;
	}
    }
    /*
	fprintf(stderr,"found %d on line %d after %d other tokens.\n",
		tok,yylineno,i);
     */

    /* generate a placeholder tuple for the text line */
    TARGET(sp, SPLATTERED, 0);

    return(sp);
}

/* ick.y ends here */
