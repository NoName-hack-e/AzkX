#include "header/token.h"
#include <stdlib.h>
tkn_T* init_tkn(int type, chat* value){
	tkn_T* tkn=calloc(1,sizeof(struct tkn_stru));
	tkn->type=type;
	tkn->value=value;
	return tkn;
}