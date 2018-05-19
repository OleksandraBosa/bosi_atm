#ifndef _Receipt_h_
#define _Receipt_h_

#include <iostream>
using namespace std;
#include "Card.h"
#include "Mobile.h"
#include <time.h>


class ReceiptPrint
{
private:
	const struct tm * _date;
	const int _amount;
	static size_t _freeId;
	const size_t _id;
	ReceiptPrint(const ReceiptPrint&);
	ReceiptPrint & operator=(const ReceiptPrint&);
public:
	ReceiptPrint(const int amount): _date(setTime()), _amount(amount), _id(++_freeId) {return;};
	~ReceiptPrint(){return;};
	System::String ^ receiptAdd(const __int64 );
	System::String ^  receiptMobile(const __int64 );
	System::String ^  receiptTransfer(const __int64 , const __int64 );
	System::String ^  receiptWithdraw(const __int64);
	System::String ^  receiptBalance(const __int64 card);
	System::String ^  receiptMobilefromCard(const __int64 card, const __int64 number);
	const struct tm *setTime();


};
#endif