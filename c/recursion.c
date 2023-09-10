#include<stdio.h>

int fact(int a)
{
    if(a==1 || a==0)
    return 1;
    else
    return a*fact(a-1);
}

int main(){
    int num, fac;
    printf("Enter a number to find factarial:");
    scanf("%d",&num);
    fac=fact(num);
    printf("The factorial of %d is %d", num, fac);
    return 0;
}