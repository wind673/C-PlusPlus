/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/
#include "com.h"

int main(void)
{
	Fun1 f1,f2;
	f1.GeneralSet(111);
	f1.StaticSet(222);
	f1.PrintInfo();
	
	f2.GeneralSet(666);
	f2.StaticSet(777);
	f1.PrintInfo();
		
	Fun1::StaticSet(123);
	f1.PrintInfo();
	f2.PrintInfo();
	
system("pause");
return 0;
}





/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/


