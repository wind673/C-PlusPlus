/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/
#include "fun.h"


int Fun1 :: _Static = 0; 
			
void Fun1 :: GeneralSet(int value)
{
	_General=value;
}

void Fun1 :: StaticSet(int value)
{
	_Static=value;
}	
	
void Fun1 :: PrintInfo()
{
	cout<<"_General="<<_General<<endl;
	cout<<"_Static="<<_Static<<endl<<endl;
}	
	
	
/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/


