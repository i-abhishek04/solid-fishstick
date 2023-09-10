#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	int arm = 0;
	int arm1 = 1;
	int next=0;
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<=i; j++)
		{
			next=arm+arm1;
			printf("%5d",arm1);
			arm=arm1;
			arm1=next;
		}
		cout<<endl;
	}
	return 0;
}
