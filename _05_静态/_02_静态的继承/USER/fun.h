/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/
#ifndef __FUN_H
#define __FUN_H

#include "com.h"

class Fun1
{
public:
	void GeneralSet(int value);	
	static void StaticSet(int value);
	void PrintInfo();

private:
	int _General=0;
	static int _Static; 
		
};
	
	
class Fun2 : public Fun1
{
						
							
			
};	
	
	
		
	
	
	
	
	
	
	
#endif
/*******************************(C) COPYRIGHT 2015 WindRises£®–ª”Ò…Ï£©*********************************/

