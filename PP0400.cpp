//Operator Overloading
#include<iostream>
using namespace std;
class BinEx
{
	private:
		int a,b;
	public:
		BinEx(){}
		BinEx(int a1,int b1)
		{
			a=a1;
			b=b1;
		}
		BinEx operator +(BinEx be)
		{
			BinEx temp=BinEx();
			temp.a=a+be.a;
			temp.b=b+be.b;
			return temp;
		}
		void dispData()
		{
			cout<<"a= "<<a<<endl;
			cout<<"b= "<<b<<endl;
		}
};
int main()
{
	BinEx A=BinEx(1,2);
	BinEx B=BinEx(3,4);
	BinEx sum;
	cout<<"A"<<endl;
	A.dispData();
	cout<<"B"<<endl;
	B.dispData();
	cout<<"SUM"<<endl;
	sum=A+B;
	sum.dispData();
	return 0;
}
