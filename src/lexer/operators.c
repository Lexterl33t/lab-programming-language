#include <stdio.h>

#include "../../inc/lexer/operators.h"
#include "../../inc/lexer/token.h"


token_t * 
token_plus(lexer_t *lexer)
{
	token_t *tok;

	if (get_peek_byte(lexer) == '+') {
		tok = new_token(INCR, (char *){lexer->curr, get_peek_byte(lexer)});	
		next_token(lexer);
	} else {
		tok = new_token(PLUS, (char *){lexer->curr});
	}

	return (tok);
}

token_t * 
token_minus(lexer_t *lexer)
{
	token_t *tok;

	if (get_peek_byte(lexer) == '-') {
		tok = new_token(DECR, (char *){lexer->curr, get_peek_byte(lexer)});	
		next_token(lexer);
	} else {
		tok = new_token(MINUS, (char *){lexer->curr});
	}

	return (tok);
}

token_t * 
token_div(lexer_t *lexer)
{
	token_t *tok;

	if (lexer->curr == '/') 
		tok = new_token(DIV, (char *){lexer->curr});

	return (tok);
}

token_t * 
token_prod(lexer_t *lexer)
{
    token_t *tok;

	if (get_peek_byte(lexer) == '*') {
		tok = new_token(POWER, (char *){lexer->curr, get_peek_byte(lexer)});
		next_token(lexer);
	} else {
		tok = new_token(PROD, (char *){lexer->curr});
	}

	return (tok);
}

token_t *
token_mod(lexer_t *lexer)
{
	token_t *tok;

	if (lexer->curr == '%')
		tok = new_token(MOD, (char *){lexer->curr});

	return (tok);
}
