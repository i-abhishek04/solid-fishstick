#include <iostream>

using namespace std;

int main()
{
    int a=0, b=1;
    int term;
    cout<<"Enter the number of terms you want in the Fibonacci series : ";
    cin>>term;
    cout<<a<<" "<<b;
    for(int i=0; i< term-2; i++){
        b=a+b;
        a=b-a;
        cout<<" "<<b;
    }

    return 0;
}