/*******************************(C) COPYRIGHT 2015 WindRises��л���죩*********************************/
#include "fun.h"

A::A(float x,float y)
{
	cout<<"���ڵ�����ͨ���캯��......"<<endl;
	m_x=x,m_y=y;
	
} 

A::A(const A&a)
{
	cout<<"���ڵ��ÿ������캯��......"<<endl;
	m_x=a.m_x,m_y=a.m_y;
} 

A::~A()
{
	cout<<"���ڵ�����������......"<<endl;	
}
 
float A::Count()
{
	cout<<"���ڵ�����ͨ����......"<<endl;	
	cout<<"���ƽ��ֵ��"<<(m_x+m_y)/2<<endl;
	return 	(m_x+m_y)/2.0;	
}




/*******************************(C) COPYRIGHT 2015 WindRises��л���죩*********************************/


