#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to obtain pattern: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = num - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k < i; k++)
        {
            printf("%d", k);
        }
        for (int l = i; l > 0; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}