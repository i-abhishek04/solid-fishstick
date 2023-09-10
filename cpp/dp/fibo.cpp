#include <iostream>

using namespace std;

long long term[100];

long long fib(int n){
    if(n<=1) return n;
    if(!term[n-2]) term[n-2]=fib(n-2);
    if(!term[n-1]) term[n-1]=fib(n-1);
    return term[n-2]+term[n-1];
}

int main()
{
    int num;
    cin>>num;
    cout<<fib(num);

    return 0;
}