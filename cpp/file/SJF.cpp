#include<iostream>
using namespace std;

int main()
{
	int os[5][4];
	int i, j, bt, wt, total, temp;
	float avg_wt, avg_tat;
	for(i=0; i<5; i++)
	{
		os[i][0]=i+1; 
		cout<<"Enter burst time for P"<<i+1<<" : ";
		cin>>os[i][1];
	}
	for(i=0;i<4;i++)
	{
		for(int j=i+1; j<5;j++)
		{
			if(os[i][1]>os[j][1])
			{
				temp=os[j][1];
				os[j][1]=os[i][1];
				os[i][1]=temp;

				temp=os[j][0];
				os[j][0]=os[i][0];
				os[i][0]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<os[i][0]<<" "<<os[i][1]<<endl;
	}
return 0;
}