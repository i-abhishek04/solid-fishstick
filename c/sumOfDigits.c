#include <stdio.h>

int sumOfDigits(int num)
{
    int sum = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter a number to find sum of its digits ");
    scanf("%d", &num);

    int sum = sumOfDigits(num);
    printf("The sum of digits of %d is %d", num, sum);
    return 0;
}