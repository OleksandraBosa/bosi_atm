#ifndef _Deposit_h_
#define _Deposit_h_

#include <iostream>
using namespace std;

#include "Card.h" 
#include "ProcessingCenter.h"

class Deposit
{
private:
	
	__int64 _receiver;
    size_t _amount;

	Deposit(const Deposit&);
	Deposit & operator=(const Deposit&);
	virtual const int dodeposit(ProcessingCenter & center){return center.changeBalanceAdd(_receiver,_amount);};
	virtual const __int64&dogetReceiver()const{return _receiver;};
	virtual const size_t&dogetAmount()const{return _amount;};

public:
	Deposit(__int64  receiver,const size_t amount): _receiver(receiver), _amount(amount){return;};
	~Deposit(){return;};
	inline const __int64& getReceiver(){return dogetReceiver();};
	inline const size_t& getAmount(){return dogetAmount();};
	inline const int deposit(ProcessingCenter & center){return dodeposit(center);};
	


};


#endif
