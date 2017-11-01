/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/
#ifndef __FUN_H
#define __FUN_H

#include "com.h"


class Person
{
public:
	void eat();	
};

class Worker : virtual public Person 
{
public:
	 void work();
};

class Farmer : virtual public Person
{
public:
	void till();//∏˚÷÷
	 
};

class Farmer_Worker : public Worker,public Farmer
{
public:
	void bulding();
	 
};







#endif
/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/

