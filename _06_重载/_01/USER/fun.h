/*******************************(C) COPYRIGHT 2015 WindRises��л���죩*********************************/
#ifndef __FUN_H
#define __FUN_H

#include "com.h"

class Position
{
//------------------------------------------------------------------------------
	friend Position operator - (const Position & p1,const Position &p2);//����  �������صķ��� 
	friend Position operator - (const Position & p1);
	friend Position operator -- (const Position & p1);
//------------------------------------------------------------------------------
public:		
	Position(int m_x,int m_y); 
//------------------------------------------------------------------------------
	Position &   operator +();//���� 
	Position &   operator ++();//ǰ��һԪ����� ǰ�Լ�  
//------------------------------------------------------------------------------	
	Position    operator +(const Position & posi);//�Ӻ� 
	Position    operator ++(int);//����һԪ�����  ���Լ� 
//------------------------------------------------------------------------------	
	void Print_Position();
	
private:
	int x,y; 
	
};	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
#endif
/*******************************(C) COPYRIGHT 2015 WindRises��л���죩*********************************/



