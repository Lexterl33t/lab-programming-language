
lexer: src/lexer/lexer.c main.c
	gcc -o bin/lexer src/lexer/lexer.c src/lexer/token.c src/lexer/operators.c src/lexer/symbols.c main.c 
