#ifndef _MobileOperator_h_
#define _MobileOperator_h_

#include <iostream>
using namespace std;
#include "Mobile.h"


typedef pair <const __int64, Mobile&> mobile_Pair; 
class MobileOperator
{
private:
	hash_map<__int64, Mobile&> _mobileBase;
	
	MobileOperator(const MobileOperator&);
	MobileOperator & operator=(const MobileOperator&);
public:
	MobileOperator(){return;}
	~MobileOperator(){return;}
	void addMobile( Mobile& mobile){_mobileBase.insert(mobile_Pair(mobile.getNumber(),mobile));return;}
	void removeMobile( Mobile&mobile){ _mobileBase.erase(mobile.getNumber());return;}
	void removeMobile(const size_t number){_mobileBase.erase(number);return;}
	const size_t addBalanceMobile(const __int64 number, const size_t amount){_mobileBase.at(number).addBalance(amount); return 1;};
	const bool checkMobile(const __int64 number){return _mobileBase.find(number)==_mobileBase.end();};
    const size_t showBalance(const __int64 number){return _mobileBase.at(number).getBalance();}
    System::String ^ showsms(const __int64 number, const size_t amount){return _mobileBase.at(number).sms(amount);}
	System::String ^ showSmsGenerator(const __int64 number, const size_t password){return _mobileBase.at(number).smsUnlock(password); };




};
#endif