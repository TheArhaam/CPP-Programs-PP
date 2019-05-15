//Operator Overloading
#include<iostream>
using namespace std;
class OpEx
{
	private:
		int a,b,c;
	public:
		OpEx(int a1,int b1,int c1)
		{
			a=a1;
			b=b1;
			c=c1;
		}
		void operator -()
		{
			a=-a;
			b=-b;
			c=-c;
		}
		void dispData()
		{
			cout<<"a= "<<a<<endl;
			cout<<"b= "<<b<<endl;
			cout<<"c= "<<c<<endl;
		}
};
int main()
{
	OpEx a=OpEx(1,2,3);
	cout<<"Before,"<<endl;
	a.dispData();
	cout<<"After,"<<endl;
	-a;
	a.dispData();
	return 0;
}
