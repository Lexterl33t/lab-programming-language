/*
 * Native import
 */
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



/*
 * Extern import
 */

#include "../../inc/lexer/lexer.h"
#include "../../inc/lexer/operators.h"



const sym_token_t sym_table[] = {
	{'+', &token_plus},
	{'-', &token_minus},
	{'/', &token_div},
	{'*', &token_prod},
};

lexer_t *new_lexer(char *source) {
  	if (!source)
    	return (NULL);

  	lexer_t *lexer = malloc(sizeof(lexer_t));

  	if (!lexer)
    	return (NULL);

  	lexer->source = malloc(sizeof(source));

  	if (!lexer->source)
    	return (NULL);
	

	lexer->source = source;	
  	lexer->curr = *lexer->source;
  	lexer->pos = 0;
	lexer->end = strlen(source);

  	return (lexer);
}

char 
get_peek_byte(lexer_t *lexer)
{
	if (!lexer)
		return (0);

	if ((lexer->pos+1) >= lexer->end)
		return (0);
	else
		return (*(lexer->source + lexer->pos+1));
}

/*
 *
 * If token is not EOF eat
 * 
*/
void 
next_token(lexer_t *lexer)
{
	lexer->source++;
	lexer->pos++;

	if (lexer->pos >= lexer->end) 
		lexer->curr = 00;
	else
		lexer->curr = *lexer->source;
}

// Method to skip comments
void 
skip_comments(lexer_t *lexer)
{	
	if (lexer->curr == '#') {
		while (lexer->curr != '\n')
			next_token(lexer);

		next_token(lexer);
	}
}

// Method to skip whitespace
void
skip_whitespace(lexer_t *lexer)
{
	while (lexer->curr == ' ')
		next_token(lexer);
}


token_t *
get_token(lexer_t *lexer)
{
	token_t *token;
	
	skip_comments(lexer);
	skip_whitespace(lexer);
	
				
	next_token(lexer);

	return (token);
}

// Free lexer structure
void free_lexer(lexer_t *lexer) {
  	free(lexer);
  	lexer = NULL;
}
