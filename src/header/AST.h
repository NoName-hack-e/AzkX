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
	
	{
		
	};
}

#endif