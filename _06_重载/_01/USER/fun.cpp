/*******************************(C) COPYRIGHT 2015 WindRises（谢玉伸）*********************************/
#include "fun.h"

Position::Position(int m_x,int m_y)
{
	x=m_x;
	y=m_y; 
}

//------------------------------------------------------------------------------	
//------------------------------------------------------------------------------
	
Position  operator - (const Position &p1,const Position &p2) //减号 
{
	Position Po_temp(0,0); 
	
	Po_temp.x = p1.x - p2.x;
	Po_temp.y = p1.y - p2.y;
	return Po_temp;	
}


Position  operator - (const Position &p1) //负号  
{
	Position Po_temp(0,0); 
	
	Po_temp.x = -p1.x;
	Po_temp.y = -p1.y;
	return Po_temp;	
}	


Position  operator -- (const Position &p1) //前自减 
{
	Position Po_temp(0,0); 
	
	Po_temp.x = p1.x-1;
	Po_temp.y = p1.y-1;
	return Po_temp;	
}	

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

Position & Position :: operator +() //正号 
{
	x=x;
	y=y;
	return *this;
} 


Position & Position :: operator ++() //前自加
{
	x++;
	y++;
	return *this;
} 

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

Position Position :: operator +(const Position & posi) //加号 
{
		
		
	
} 


Position Position :: operator ++(int) //后自加 
{
	Position old(*this);
	x++;		
	y++;
	return old;	
} 

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

void Position :: Print_Position()
{
	cout <<"("<<x<<","<<y<<")"<<endl;
	
}


/*******************************(C) COPYRIGHT 2015 WindRises（谢玉伸）*********************************/


