/*******************************(C) COPYRIGHT 2015 WindRises（谢玉伸）*********************************/
#ifndef __FUN_H
#define __FUN_H

#include "com.h"

class A
{
public:
	A(float x,float y);//普通析构函数，在成员被实例化时调用
	A(const A&a);//拷贝构造函数，在成员被拷贝是调用,参量a是指‘=’后面的成员 
	~A();//析构函数，在成员被销毁时 调用 
	
	float Count();//普通成员函数 
	
private:
	float m_x,m_y;
	
};













#endif
/*******************************(C) COPYRIGHT 2015 WindRises（谢玉伸）*********************************/

