/*******************************(C) COPYRIGHT 2015 WindRises（谢玉伸）*********************************/
#ifndef __FUN_H
#define __FUN_H

#include "com.h"

class Position
{
//------------------------------------------------------------------------------
	friend Position operator - (const Position & p1,const Position &p2);//减号  友类重载的方法 
	friend Position operator - (const Position & p1);
	friend Position operator -- (const Position & p1);
//------------------------------------------------------------------------------
public:		
	Position(int m_x,int m_y); 
//------------------------------------------------------------------------------
	Position &   operator +();//正号 
	Position &   operator ++();//前置一元运算符 前自加  
//------------------------------------------------------------------------------	
	Position    operator +(const Position & posi);//加号 
	Position    operator ++(int);//后置一元运算符  后自加 
//------------------------------------------------------------------------------	
	void Print_Position();
	
private:
	int x,y; 
	
};	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
#endif
/*******************************(C) COPYRIGHT 2015 WindRises（谢玉伸）*********************************/



