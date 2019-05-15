//Sum of Complex numbers
#include<iostream>
using namespace std;
class Complex
{
	private:
		float real,img;
	public:
		Complex(){};
		Complex(float a)
		{
			real=img=a;
		}
		Complex(float r,float i)
		{
			real=r;
			img=i;
		}
		friend Complex sum(Complex c1,Complex c2)
		{
			Complex c3=Complex();
			c3.real=c1.real+c2.real;
			c3.img=c1.img+c2.img;
			return c3;
		}
		friend void show(Complex c)
		{
			cout<<"Real= "<<c.real<<endl;
			cout<<"Imaginary= "<<c.img;			
		}
};
int main()
{
	Complex c1=Complex(2,4);
	Complex c2=Complex(5,6);
	Complex c3=sum(c1,c2);
	show(c3);
	return 0;	
}
