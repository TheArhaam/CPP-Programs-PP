//Virtual function
#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		A(){a=10;}
		virtual void dispData()
		{
			cout<<"a= "<<a<<endl;
		}
};
class B:public A
{
	public:
		int b;
		B(){b=20;}
		void dispData()
		{
			cout<<"a= "<<a<<endl;
			cout<<"b= "<<b<<endl;
		}
};
int main()
{
	A a1=A();
	B b1=B();
	cout<<"A"<<endl;
	a1.dispData();
	cout<<"B"<<endl;
	b1.dispData();
	return 0;
}
