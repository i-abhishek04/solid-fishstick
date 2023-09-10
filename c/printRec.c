#include<stdio.h>

void sum(int n){
    if(n==1)
        printf("1 ");
    else{
        printf("%d ", n);
        sum(n-1);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    sum(num);
    
    return 0;
}