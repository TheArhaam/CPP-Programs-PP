//Convert different number systems to decimal 
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int hexNum(char);
int main()
{
	int num,r,base,decimal=0,size,n=0,i;
	char numh[10],rh,numh2[10];
	cout<<"Enter the base of the number:";
	cin>>base;
	cout<<"Enter the number of digits:";
	cin>>size;
	cout<<"Enter the number:";
	if(base==16)
	{
		cin>>numh;
	}
	else
	{
		cin>>num;
	}
	if(base==2||base==8)
	{
		for(n=0;n<size;n++)
		{
			r=num%10;
			decimal=decimal+(r*pow(base,n));
			num=num/10;
		}
	}
	else if(base==16)
	{
		i=0;
		for(n=size-1;n>=0;n--)
		{
			rh=numh[n];
			if((int)rh>=65&&(int)rh<=70)
			{
				r=hexNum(rh);
			}
			else
			{
				numh2[0]=rh;
				r=atoi(numh2);
			}
			decimal=decimal+(r*pow(base,i));
			i++;
		}
	}
	else if(base==10)
	{
		decimal=num;
	}
	else
	{
		cout<<"Invalid base.";
		goto EXIT;	
	}	
	cout<<"Decimal= "<<decimal;
	EXIT:
	return 0;
}
int hexNum(char ch)
{
	switch(ch)
	{
		case 'A':return 10;
		case 'B':return 11;
		case 'C':return 12;
		case 'D':return 13;
		case 'E':return 14;
		case 'F':return 15;
		default:return ch;
	}
}

