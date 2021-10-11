#ifndef viseter_H
#define viseter_H
#include "AST.h"
typedef struct visior_stru {

}; viseter_T;

viseter_T* init_viseter();

AST_T* viseter_visit(viseter_T*, AST_T* node);

AST_T* visiter_vsit_var_def(viseter* viseter,AST_T* node);

AST_T* viseter_visit_fun_def(viseter_T* viseter, AST_T* node);

AST_T* viseter_visit_var(viseter_T* viseter,AST_T* node);

AST_T* viseter_visit_str(viseter_T* viseter,AST_T* node);

AST_T* viseter_visit_compund(viseter_T* viseter,AST_T* node);

#endif
