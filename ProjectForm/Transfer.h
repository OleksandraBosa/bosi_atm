#ifndef _Transfer_h_
#define _Transfer_h_

#include <iostream>
using namespace std;
#include "Deposit.h"
#include "Card.h"



class Transfer: public Deposit
{
private:
	__int64 _sender;

	Transfer(const Transfer&);
	Transfer & operator=(const Transfer&);
	virtual const int dodeposit(ProcessingCenter & center);
public:
	Transfer( __int64  receiver, const size_t amount, __int64 sender):Deposit(receiver,amount),_sender(sender){return;}
	~Transfer(){return;};
	inline const __int64 & getSender()const{return _sender;};

};


#endif