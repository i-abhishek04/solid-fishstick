#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	cout<<"Enter a number ";
	cin>>num;
	for(int i =1; i<=sqrt(num); i++)
	{
		if(num%i==0)
			cout<<i<<" "<<num/i<<" ";
	}
	return 0;
}
