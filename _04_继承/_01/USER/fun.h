/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/
#ifndef __FUN_H
#define __FUN_H

#include "com.h"



class Person 
{
public:
	Person();
	void eat();
	string public_lover;
protected:
	int weight;
	string protected_lover;

private:
	string private_lover;
	
}; 

class I : public Person
{
	public:
	I();
	void Show_Everything();
	
	
};









#endif
/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/

