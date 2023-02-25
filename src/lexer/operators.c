#include <stdio.h>

#include "../../inc/lexer/operators.h"
#include "../../inc/lexer/token.h"


token_t * 
token_plus(lexer_t *lexer)
{
	token_t tok;
	char buffer[2];

	if (lexer->curr == '+' && get_token(lexer) == '+') {
		sprintf(buffer, "%c%c");
		tok = new_token(INCR, );	
	}
}
token_t * 
token_minus(lexer_t *lexer)
{

}

token_t * 
token_div(lexer_t *lexer)
{

}

token_t * 
token_prod(lexer_t *lexer)
{
    
}

token_t *
tolen_mod(lexer_t *lexer_t)
{
		
}
