#ifndef _Mobile_h_
#define _Mobile_h_

#include <iostream>
#include <string>
#include <hash_map>
using namespace std;


class Mobile
{
	friend class MobileOperator;
	
private:
	
	__int64  _number;
	size_t  _balance;
	Mobile(const Mobile&);
	Mobile & operator=(const Mobile&);
	inline void addBalance(const size_t amount){_balance += amount; return;};
public:
	Mobile(__int64 number, size_t balance):_number(number), _balance(balance){return;}
	~Mobile(){return;};
	inline const __int64 & getNumber()const{return _number;};
	inline const size_t & getBalance()const{return _balance;};
	System::String ^ sms(const size_t amount){return "Your balance \nhas been recharged for\n"+ amount + " UAH! \nCurrent balance is "+ getBalance()+"UAH";};
	System::String ^ smsUnlock(const size_t password){ return "Enter this password\nto make your card accessible:\n " + password; };
};


#endif