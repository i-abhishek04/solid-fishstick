#include<iostream>

using namespace std;

int reverse(int x)
{
	int rev=0;
	while(x)
	{
		rev = (rev * 10) + (x%10);
		x /= 10;
	}
	return rev;
}


int main()
{
	int num;
	cout<<"Enter a number to find its reverse : ";
	cin>>num;
	cout<< "The reverse of "<< num << " is " << reverse(num)<<endl;

	return 0;
	
}
