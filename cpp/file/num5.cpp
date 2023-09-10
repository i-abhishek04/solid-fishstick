#include <iostream>
using namespace std;

int main()
{
	int m,n;
	cout<<"Enter rows and columns: ";
	cin>>m>>n;
	for(int i=0; i<m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i==0||i==(m-1)||j==1||j==n)
				cout<<j;
			else cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
