/*******************************(C) COPYRIGHT 2015 WindRises��л���죩*********************************/
#include "fun.h"

Person::Person()
{
	weight=70;
	public_lover="public_Secret_Person";
 	protected_lover="protected_Secret_Person";
	private_lover="private_Secret_Person";
	cout<<"Person::Person()    ----end"<<endl<<endl<<endl; 
}

I::I()
{
	weight=80;
	public_lover="public_Secret_I";
	protected_lover="protected_Secret_I";
	cout<<"I::I()     ----end"<<endl<<endl<<endl; 
}


void Person::eat()
{
	cout<<"What fuck you eating?"<<"	    ----By Person::eat"<<endl; 
	cout<<private_lover<<"	    ----By Person::eat"<<endl; //˽�����ܹ���ʹ�� 
}


void I :: Show_Everything()
{
	eat();	
	cout<<weight<<"	    ----By I :: Show_Everything"<<endl; 
	cout<<public_lover<<"	    ----By I :: Show_Everything"<<endl; 
	
//	cout<<lover<<"		----By I"<<endl;  //˽���಻�ܱ��̳� 
}





/*******************************(C) COPYRIGHT 2015 WindRises��л���죩*********************************/


