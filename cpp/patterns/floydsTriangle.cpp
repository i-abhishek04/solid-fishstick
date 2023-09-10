#include <iostream>

using namespace std;

int main()
{
    // cout<<"enter number of rows : ";
    int n;
    cin>>n;
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
        {
            cout<<a++<<" ";
        }
        cout<<endl;
    }
    return 0;
}