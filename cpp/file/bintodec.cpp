#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long bin;
	int dec=0;
	cout<<"Enter a binary number : ";
	cin>>bin;
	long temp=bin;
	int digit=0;
	for(int i =0;bin!=0 ; i++)
	{
		digit=bin%10;
		dec += digit*pow(2,i);
		bin/=10;
	}
	cout<<"Decimal of "<<temp<<" is "<<dec<<endl;
	return 0;
}

