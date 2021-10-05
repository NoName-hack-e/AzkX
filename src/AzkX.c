#include <stdio.h>
#include <string.h>
#include "header/lexer.h"
#include "header/tkn.h"


#define max_limit 20
void print_help(){
	printf("Usage:\nhello.out <filename>\n");
	printf("document {url}\n", );

	exit(1);
}

int int main(int argc, char *argv[]){
	if (argc >=2){
		for(int i =1;i< argc; i++){
			int len = strlen(argv[i]);
			char* last_four=&argv[i][len-6];
			if(strcmp(last_four,".AzkX")==0){
				lexer_T
			} lexer=init_lexer(get_file_ctn(argv[i]));
			parser_T* paeser=init_parser(lexer);
			AST_T* root =paeser_parse(parser,parser->scope);
			viseter_T* viseter=init_viseter();
			visiter_vsit(viseter,root);

		}
	}
	else{
		print_help();
	}else{
		char inpit[max_limit];
		while(1){
			printf("AzkX lang");
			fgets(input,max_limit,stdin);
			lexer_T* lexer=init_lexer(input);
			parser_T* parser= init_parser(parser,parser->scope);
			viseter_T* viseter=init_viseter();
			visiter_vsit(viseter,root)
		}
	}


	return 0;
}
