/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/
#include "com.h"

int main(void)
{
	Person p1;
	Worker w1;
	Farmer f1;
	Farmer_Worker f_w1;
	
	
	cout<<"Running eat();"<<endl;  
	p1.eat();
	w1.eat();
	f1.eat();
	cout<<endl<<endl<<endl; 
	
	cout<<"Running w1.work(); & f1.till();"<<endl;  
	w1.work();
	f1.till();
	cout<<endl<<endl<<endl; 
	
	
	cout<<"Running f_w1 "<<endl;  
	f_w1.eat();
	f_w1.work();
	f_w1.till();
	cout<<endl<<endl<<endl; 
	
	
system("pause");
return 0;
}





/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/


