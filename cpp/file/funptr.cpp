#include <iostream>

using namespace std;
typedef void (*funptr) (int, int);
void add(int a, int b){
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}

void sub(int a, int b){
    cout<<a<<"-"<<b<<"="<<a-b<<endl;
}

int main()
{
    funptr ptr;
    ptr = &add;
    ptr(2,3);
    ptr = &sub;
    ptr(5,3);

    return 0;
}