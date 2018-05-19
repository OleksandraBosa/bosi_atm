#include"CashDispenser.h"
#include "stdafx.h"

const size_t CashDispenser::processing(const size_t amount)
{
	if(amount >_cash)  
		return 0;
	if(amount < _cash) 
		return 1;
	if(amount==_cash) 
		return 2;
} 
const size_t CashDispenser::change(const size_t amount)
{
	return amount> _cash? amount - _cash : _cash - amount ;
} 