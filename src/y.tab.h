typedef union
{
    int		numval;		/* a numeric value */
    tuple	*tuple;		/* a code tuple */
    node	*node;		/* an expression-tree node */
} YYSTYPE;
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


extern YYSTYPE yylval;
