#include "Receipt.h"
#include "StdAfx.h"
#include <string>

 size_t ReceiptPrint::_freeId = 0;


System::String ^  ReceiptPrint::receiptAdd(const __int64  card) 
{ 
return "Operation: Refill account\nId: #AD" + _id + "\nDate: " +_date->tm_mday+"."+_date->tm_mon+"."+(_date->tm_year+1900)+" "+ _date->tm_hour+":"+_date->tm_min+":"+_date->tm_sec+"\nCard: "+card + "\nAmount: " + _amount + "\n"; 
} 
System::String ^ ReceiptPrint::receiptMobile(const __int64  number) 
{ 
return "Operation: Refill mobile\nId: #MB" + _id + "\nDate:" +_date->tm_mday+"."+_date->tm_mon+"."+(_date->tm_year+1900)+" "+ _date->tm_hour+":"+_date->tm_min+":"+_date->tm_sec + "\nNumber:" +number
+ "\nAmount:" + _amount + "\n"; 
}
System::String ^  ReceiptPrint::receiptMobilefromCard(const __int64  card, const __int64  number) 
{ 
return "Operation: Refill mobile\nId: #MB" + _id + "\nDate:" +_date->tm_mday+"."+_date->tm_mon+"."+(_date->tm_year+1900)+" "+ _date->tm_hour+":"+_date->tm_min+":"+_date->tm_sec +"\nCard number: " +card+ "\nPhone number:" +number
+ "\nAmount: " + _amount + "\n"; 
}
System::String ^ ReceiptPrint::receiptTransfer(const __int64  from, const __int64  to) 
{ 
return "Operation: Transfer\nId: #TF" + _id + "\nDate: " +_date->tm_mday+"."+_date->tm_mon+"."+(_date->tm_year+1900)+" "+ _date->tm_hour+":"+_date->tm_min+":"+_date->tm_sec+ "\nSender: " + from
+ "\nReceiver: " +to + "\nAmount: " + _amount + "\n"; 
}
System::String ^  ReceiptPrint::receiptWithdraw(const __int64  card) 
{ 
return "Operation: Withdraw\nId: #WD" + _id + "\nDate: "  +_date->tm_mday+"."+_date->tm_mon+"."+(_date->tm_year+1900)+" "+ _date->tm_hour+":"+_date->tm_min+":"+_date->tm_sec + "\nCard: " +card + 
"\nAmount: " + _amount + "\n"; 
}
System::String ^ ReceiptPrint::receiptBalance(const __int64  card) 
{ 
	
return "Operation: Show balance\nId: #BC" + _id + "\nDate:" +_date->tm_mday+"."+_date->tm_mon+"."+(_date->tm_year+1900)+" "+ _date->tm_hour+":"+_date->tm_min+":"+_date->tm_sec+ "\nCard: " + card + 
"\nBalance: " + _amount + "\n"; 
}

const struct tm * ReceiptPrint::setTime()
{
 time_t rawtime;
 struct tm * timeinfo;
 time ( &rawtime );
 timeinfo = localtime ( &rawtime );
 return timeinfo;

}