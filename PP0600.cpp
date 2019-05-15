//Multiple inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		void dispA()
		{
			cout<<"Class A"<<endl;
		}
};
class B
{
	public:
		void dispB()
		{
			cout<<"Class B"<<endl;
		}
};
class C:public A,public B //Multiple inheritance
{
	public:
		void dispC()
		{
			cout<<"Class C"<<endl;
		}
};
int main()
{
	C c=C();
	c.dispA();
	c.dispB();
	c.dispC();
	return 0;
}
