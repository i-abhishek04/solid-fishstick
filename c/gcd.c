#include<stdio.h>

int gcd(int n1, int n2)
{
    int r=1;
    while(r!=0){
        r=n1%n2;
        n1 = n2;
        n2 = r;
    }
    return n1;
}

int main()
{
    int num1 , num2;
    printf("Enter two numbers to find their GCD \n");
    scanf("%d%d", &num1, &num2);
    if(num1>num2){
        printf("The GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));
    }
    else
        printf("The GCD of %d and %d = %d\n", num1, num2, gcd(num2, num1));
        
    return 0;
}