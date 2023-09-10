#include <iostream>

using namespace std;

int main()
{
    // cout<<"enter number of rows : "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
        {
            if((i+j)%2==0) cout<<"1";
            else cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}