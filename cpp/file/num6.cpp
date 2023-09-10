#include<iostream>
using namespace std;

int main()
{
	int m;
	cout<<"Enter a number: ";
	cin>>m;
	for(int j=1; j<=m; j++)
	{
		for(int i=j; i<m; i++)
			cout<<" ";
		if(j==1||j==m)
		{
			for(int i=0; i<2*j-1; i++)
				cout<<j;
		}
		else
		{
			cout<<j;
			for(int i=1;i<2*(j-1); i++)
				cout<<" ";
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
