#include <stdio.h>

int reverseNum(int num)
{
    int rev = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}
int main()
{
    int num;
    printf("Enter a number to find its reverse ");
    scanf("%d", &num);

    int rev = reverseNum(num);
    printf("The reverse of %d is %d", num, rev);
    return 0;
}