#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        for (int i = 0; i < j - 1; i++)
        {
            printf("  ");
        }
        printf("%d", j);
        for (int k = 0; k < (2 * (n - j)) - 1; k++)
        {
            printf("  ");
        }
        printf("%d\n", j);
    }
    // printf("%d\n", n);
    for (int i = n; i > 0; i--)
    {
        for(int j = i-2; j>0; j--)
        {
            printf("  ");
        }
        printf("%d\n",i-1);
        for (int k = n-i+1; k>0 ; k--)
        {
            printf("  ");
        }
        printf("%d\n", i);
    }
    return 0;
}