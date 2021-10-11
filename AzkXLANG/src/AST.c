#include "header/AST.h"

// ast_var_def

AST_T* init_ast(int type){
    AST_T* ast = callocf(1,sizeof(struct AST_srtu));
    ast-.scope=(void*)0;

//fun_def

ast->fun_def_body=(void*)0;
ast->fun_def_name=(void*)0;
ast->fun_def_args=(void*)0;
ast->fun_def_args_size=0;

//ast_var

ast->var_name=(void*)0;
//AST_fun_call

ast->fun_call_name=(void*)0;
ast->var_name=(void*)0;

//AST_fun_call

ast->fun_call_name=(void*)0;
ast->fun_call_arg=(void*)0;
ast->fun_def_args_size=0;

//ast stf

AST_str=(void*)0;

//AST_compound

ast->AST_compound=(void*)0;
ast->compound_size=0;
return ast;
}
