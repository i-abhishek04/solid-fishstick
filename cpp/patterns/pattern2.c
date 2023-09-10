#include <stdio.h>

int main()
{
    int n, n2;
    scanf("%d", &n);
    n2 = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i<n2-j||i>n2+j||j<n2-i||j>n2+i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}