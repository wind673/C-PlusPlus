/*******************************(C) COPYRIGHT 2015 WindRises（谢玉伸）*********************************/
#include "fun.h"

A::A(float x,float y)
{
	cout<<"正在调用普通构造函数......"<<endl;
	m_x=x,m_y=y;
	
} 

A::A(const A&a)
{
	cout<<"正在调用拷贝构造函数......"<<endl;
	m_x=a.m_x,m_y=a.m_y;
} 

A::~A()
{
	cout<<"正在调用析构函数......"<<endl;	
}
 
float A::Count()
{
	cout<<"正在调用普通函数......"<<endl;	
	cout<<"输出平均值："<<(m_x+m_y)/2<<endl;
	return 	(m_x+m_y)/2.0;	
}




/*******************************(C) COPYRIGHT 2015 WindRises（谢玉伸）*********************************/


