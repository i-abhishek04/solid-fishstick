#include<stdio.h>

int n=50;

void change(){
    n=100;
}

int main()
{
    printf("%d\n",n);
    change();
    printf("%d\n",n);
    
    return 0;
}