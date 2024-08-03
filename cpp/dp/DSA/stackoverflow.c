#include<stdio.h>
int a=0;
void f(){
    a++;
    if(a==50000)    return;
    f();
    printf("%d\n",a);
}

int main()
{
    f();
    return 0;
}