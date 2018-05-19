#include "Transfer.h"
#include "stdafx.h"

 const int Transfer::dodeposit(ProcessingCenter & center){

	const  int m = center.changeBalanceMinus(getSender(),getAmount());
	const  int p = center.changeBalanceAdd(getReceiver(),getAmount());

	 if(m==-1||p==-1)
		 return -1;

	 if(m==1&&p==1)
		 return 1;

	  return m;
 };