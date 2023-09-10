#include<iostream>
using namespace std;

int main()
{
	int m;
	cout<<"Enter a number: ";
	cin>>m;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<=i; j++)
			cout<<(j+1);
		cout<<endl;
	}
	return 0;
}
