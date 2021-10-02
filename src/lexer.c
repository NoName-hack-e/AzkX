#include "header/lexer.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

lexer_T init_lexer(char* ctn){

lexer_T* lexer = calloc(1, sizeof(struct lexer_stru));

lexer->ctn = ctn;

lexer->i = 0;

lexer->c = ctn[lexer->i]

return lexer;

}

void lexer_adv(lexer_T* lexer){
	if (lexer->c !='\0' && lexer->i < strlen(lexer->ctn)){
		lexer->i += 1;
		lexer->c = lexer->ctn[lexer->i];
	}
}

voif skip_spac(lexer_T* lexer){
	while(lexer->c ==' '||lexer->c ==10){
		lexer_adv(lexer);
	}
}

tkn_T* get_nxt_tkn(lexer_T* lexer){
	while (lexer->c!='\0'&&lexer->i <strlen(lexer->ctn)){
		if(lexer->c==' '||lexer->c == 10)
			skip_spac(lexer);
		if(isalnum(lexer->c))
			return lexer_get_id(lexer);
		if(lexer->c =='"')
			return lexer_get_char2str(lexer);
		switch(lexer->c){

		}
	}
	return init_tkn(tkn_eof, "\0")
}

tkn_T* lexer_get_char2str(lexer_T* lexer){
	lexer_adve(lexer);

	char* value = calloc(1,sizeof(char));

	value[0]='\0';

	while(lexer->c!='"'){
		char* s =lexer_get_char2str(lexer);
		value=realloc(value,(strlen(value)+strlen(s)+1)*sizeofZ(char));
		strcat(value,s);
		lexer_adv(lexer);
	}

lexer_adv(lexer);
return init_tkn(tkn_str,value);

}

tkn_T lexer_get_id(lexer_T* lexer){

	char* value=calloc(1,sizeof(char));

	value[0]='\0';

	while(isalnum(lexer->c)){
		char* s=lexer_get_char2str(lexer);
		value=realloc(value.(strlen(value)+strlen(s)+1)*sizeof(char));
strcat(value,s);
lexer_adv(lexer);
	}
	return init_tkn(tkn_id,value);
}
tkn_T* lexer_adv_tkn(lexer_T* lexer, tkn_T* tkn){
	lexer_adv(lexer);
	return tkn;
}

char* lexer_get_char2str(lexer_T* lexer){
	char* str=calloc(2,sizeof(char));
	str[0]=calloc(2,sizeof(char));
	str[1]='\0';
	return str;
}