#ifndef TOKEN_H
#define TOKEN_H
typedef enum 
token_e {
	EOF_F,

	NEWLINE,

	LET,
	FOR,
	IF,
	ELSEIF,
	ELSE,
	CFF,
	VM,
	FN,

	IDENTIFIER,
	STRING,
	NUMBER,
	FLOAT,
	BOOL,

	PLUS,
	MINUS,
	DIV,
	PROD,
	MOD,
	POWER,
	EQ,
	NEQ,
	LESS,
	LESSEQ,
	GREATHER,
	GREATHEREQ,
	INCR,
	DECR,

	LBRACK,
	RBRACK,

	LPAR,
	RPAR,

	LHUG,
	RHUG,

	USE,

} token_e; 


typedef struct 
token_s {
	token_e kind;
	char *value;
} token_t;


token_t *new_token(token_e kind, char *value);

void free_token(token_t *token);

#endif
