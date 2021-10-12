
#ifndef LEXER_H
#define LEXER_H

#include "tkn.h"


typedef struct lexer
{
	char x;
	unsigned int i;
	char* ctn;
} lexer_T;

lexer_T* init_lexer(char* ctn);

void lexer_adv(lexer_T* lexer);

void skip_spac(lexer_T* lexer);

tkn_T* get_nxt_tkn(lexer_T* lexer);

tkn_T* lexer_get_id(lexer_T* lexer);

tkn_T* lexer_adv_tkn(lexer_T* lexer, tkn_T tkn);

char* lever_get_char2str(lexer_T* lexer);


#endif