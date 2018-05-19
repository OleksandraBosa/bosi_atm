#include "Card.h"
#include "stdafx.h"


Card::Card(const __int64 number, const size_t password, const size_t balance, const Type type, Mobile &cell, bool accessible):
	  _number(number), _password(password), _balance(balance), _type(type), _cell (cell)
	  {
		  if(_type==debit)assert(_balance>=0); 
		  else assert(_balance>-10000);  return;
	  };