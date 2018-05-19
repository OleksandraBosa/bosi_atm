#ifndef _CashDispenser_h_
#define _CashDispenser_h_

#include <iostream>
using namespace std;

class CashDispenser{
private:
    size_t _cash;

	CashDispenser(const CashDispenser& );
	CashDispenser & operator = (const CashDispenser& );
public: 
	CashDispenser(const size_t cash=0): _cash(cash) {return;};
	~CashDispenser(){return;};
	inline size_t & setCash(){return _cash;};
	inline const size_t & getCash()const{return _cash;};
	const size_t processing(const size_t amount); 
	const size_t change(const size_t amount);
};
#endif