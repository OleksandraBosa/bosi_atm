#include "ProcessingCenter.h"
#include "StdAfx.h"
#include<time.h>

const int ProcessingCenter::limit = -10000;

const int ProcessingCenter::changeBalanceAdd(const __int64 number, const size_t amount)
{
		if(_base.at(number).getAccessible()) {
			if (_base.at(number).getType()==credit&& _base.at(number).getBalance() < 0 )
				{
					_base.at(number).add(balanceWithPerc(_base.at(number).getBalance(),amount)) ;
				    return 1;
				}
			else
			{
				_base.at(number).add(amount); 
				return 1;
			}
		}

	 return -1;
}
const int ProcessingCenter::changeBalanceMinus(const __int64 number, const int amount)
{
	if(_base.at(number).getAccessible())
		{

			if(_base.at(number).getType()==debit)
			{
				if( _base.at(number).getBalance()< amount) return 2;

				_base.at(number).minus(amount);
			    return 1;
			}
			
			else 
			if(_base.at(number).getType()==credit)
			{
				
				if(abs(_base.at(number).getBalance()-amount) > abs(limit)) return 3;

					 _base.at(number).minus(amount);
					 return 1;
			}
			 
		}
		return -1;
}

const int ProcessingCenter::balanceWithPerc(const int balance, const size_t amount)
{
	return abs(amount - abs(balance)*0.1);
}

const int ProcessingCenter::checkCard(const __int64 number,const size_t password) 
{
		if(_base.find(number)==_base.end()) return -1;
		else if (_base.at(number).getPassword()==password) return 1;

		return 0;
};

const int ProcessingCenter::refillMobile(const __int64 number, const size_t amount,MobileOperator& mo)
{

	if (changeBalanceMinus(number,amount)==1)
	{
		mo.addBalanceMobile(_base.at(number).getMobile().getNumber(),amount);
	    return 1;
	}

	return changeBalanceMinus(number,amount);

}


const size_t ProcessingCenter::generator()
{
	srand ( time(NULL) );
	size_t password = rand() % 9000 + 1000;

	return password;
}


System::String ^ ProcessingCenter::smsGenerator(const __int64 number, const size_t password,MobileOperator& mo)
{
	return mo.showSmsGenerator(_base.at(number).getMobile().getNumber(),password);
}


