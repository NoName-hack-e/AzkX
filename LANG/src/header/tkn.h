#ifndef TKN_H
#define TKN_H
typedef struct tkn_stru{
	enum {

		tkn_id,
		// token id
		tkn_eql_eql,
		// ==
		tkn_n_eql,
		// !=
		tkn_n,
		//!
		tkn_gr_eql,
		// >=
		tkn_les_eql,
		//<=
		tkn_eql,
		//=
		tkn_str,
		// "
		tkn_semi,
		// ,
		tkn_l_p,
		// (
		tkn_r_p,
		// )
		tkn_r_br,
		//  }
		tkn_l_br,
		// {
		tkn_dot,
		// .
		tkn_eof
		// error
		
	}tt_type;
	char* value;
}tkn_T;
tkn_T* init_tkn(int type,char* value);
#endif