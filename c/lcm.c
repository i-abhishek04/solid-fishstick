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

int lcm(int n1, int n2){
    // int gc = gcd(n1, n2);
    int lcm = (n1*n2)/gcd(n1, n2);
    return lcm;
}

int main()
{
    int num1 , num2;
    printf("Enter two numbers to find their LCM \n");
    scanf("%d%d", &num1, &num2);
    if(num1>num2){
        printf("The LCM of %d and %d is   %d\n", num1, num2, lcm(num1, num2));
    }
    else
        printf("The LCM of %d and %d is   %d\n", num1, num2, lcm(num2, num1));
    
    return 0;
}