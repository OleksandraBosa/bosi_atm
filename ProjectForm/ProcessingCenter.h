#ifndef _ProcessingCentre_h_
#define _ProcessingCentre_h_

#include <iostream>
using namespace std;
#include "Card.h"
#include <hash_map>
#include "MobileOperator.h"

typedef pair <const __int64, Card&> card_Pair; 
class ProcessingCenter
{
	
private:
	hash_map<__int64, Card&> _base;
	static const int limit;
	ProcessingCenter(const ProcessingCenter&);
	ProcessingCenter & operator=(const ProcessingCenter&);
public:
	ProcessingCenter(){return;}
	~ProcessingCenter(){return;}
	void addCard( Card &card){ _base.insert(card_Pair(card.getNumber(),card));return;}
	void removeCard( Card &card){ _base.erase(card.getNumber());return;}
	void removeCard(const size_t number){ _base.erase(number);return;}
	const int changeBalanceAdd(const __int64 number, const size_t amount);
	const int changeBalanceMinus(const __int64 number, const int amount);
	const int balanceWithPerc(const int balance, const size_t amount);
    const int checkCard(const __int64 number,const size_t password=0);
	const int refillMobile(const __int64 number, const size_t amount, MobileOperator& mo);
	const __int64& getCardMobile(const __int64 number){return  _base.at(number).getMobile().getNumber(); }
    const bool isAccessible(const __int64 number){ return _base.at(number).getAccessible();}
    void makeAccessible(const __int64 number){ _base.at(number).setAccessible(true);}
    void makeInAccessible(const __int64 number){ _base.at(number).setAccessible(false);}
    const int showBalance(const __int64 number){return _base.at(number).getBalance();}
    const size_t generator();
    System::String ^ smsGenerator(const __int64 number, const size_t password,MobileOperator& mo);

};

#endif