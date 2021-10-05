#include <stdio.h>
#include <string.h>
#include "header/lexer.h"
#include "header/tkn.h"
#include "header/extra.h"
#include "header/tooMuchError.h"


int main(int argc, char *argv[]){
int max_limit=20;
	if (argc >=2){

		for(int i =1;i< argc; i++){

			int len = strlen(argv[i]);

			char* last_four=&argv[i][len-6];

			if(strcmp(last_four,".AzkX")==0){
				lexer_T
			}
			lexer=init_lexer(get_file_ctn(argv[i]));


			parser_T* paeser=init_parser(lexer);

			AST_T* root =paeser_parse(parser,parser->scope);

			viseter_T* viseter=init_viseter();

			visiter_vsit(viseter,root);

		}
	}
int RT =0;

}if (RT==0) {
		char inpit[max_limit];
		while(1){
			printf("AzkX lang");
			fgets(input,max_limit,stdin);
			lexer_T* lexer=init_lexer(input);
			parser_T* parser= init_parser(parser,parser->scope);
			viseter_T* viseter=init_viseter();
			visiter_vsit(viseter,root);
			RT++;

		}

	}else {
		return 1;
}

	return 0;
}
