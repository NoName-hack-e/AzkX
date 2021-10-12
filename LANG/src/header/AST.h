#ifndef AST_H
#define AST_H
#include <stdlib.h>

typedef struct AST_stru{
	enum{
		AST_var_def,
		AST_fun_def,
		AST_var,
		AST_fun_call,
		AST_str,
		AST_compound,
		AST_noop
	}AST_type;

	struct SCOPE_stru* scope;
//var def	
char* var_def_var_name;

struct AST_stru* var_def_var_valu;

//fun def
struct AST_stru* fun_def_body;
char* fun_def_name;
struct AST_stru** fun_def_args;
size_t fun_def_args_size;

// ast var
char* var var_name;

// AST_fun_call
char* fun_call_name;
struct AST_stru** fun_call_arg;
size_t compound_size;
} AST_t;
AST_T* init_ast(int type);

#endif