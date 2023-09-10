#include <iostream>

using namespace std;

int main()
{
    // cout<<"enter number of rows : ";
    int n;
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        for(int j=1;j<=2*n-1;j++)
        { 
            if(j>(n-i)&&j<(n+i))  cout<<" ";
            else cout<<j;

        }
        cout<<endl;
    }
    return 0;
}