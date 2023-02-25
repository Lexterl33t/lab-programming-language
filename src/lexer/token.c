#include "../../inc/lexer/token.h"
#include <stdlib.h>



token_t *
new_token(token_e kind, char *value)
{

	token_t *token = malloc(sizeof(token_t));
	
	if (!token)
		return (NULL);

	token->kind = kind;

	token->value = malloc(sizeof(value));
	
	if (!token->value)
		return (NULL);
	
	return (token);	
}

void
free_token(token_t *token)
{
	free(token);
	token = NULL;
}
