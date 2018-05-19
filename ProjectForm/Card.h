#ifndef _Card_h_
#define _Card_h_


#include "Mobile.h"
#include <iostream>
using namespace std;
#include <cassert>



enum Type{debit, credit};

class Card
{
	friend class ProcessingCenter;
private:
	
	__int64 _number;
	size_t _password;
	int _balance;
    Mobile &_cell;
	bool _accessible;
	Type _type;

	inline void setBalance(const int amount ){ _balance=amount;return;};
	inline void minus(size_t amount){_balance-=amount; return;};
	inline void add(size_t amount){_balance+=amount; return;};
	inline void setAccessible(const bool access){ _accessible=access;return;};

	Card & operator =(const Card&);
	Card(const Card&);
	
public:

	Card(const __int64 number, const size_t password, const size_t balance, const Type type, Mobile &cell, bool accessible=true );
	~Card(){ return;};
	inline const __int64& getNumber()const{return _number;};
	inline const size_t& getPassword()const{return _password;};
	inline const int & getBalance()const{return _balance;}; 
	inline const bool& getAccessible()const{return _accessible;};
	inline const Type& getType()const{return _type;};
	inline const Mobile& getMobile()const{return _cell;};
};


#endif