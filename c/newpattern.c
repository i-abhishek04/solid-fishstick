#include <stdio.h>
int main()
{
    int x, n, tr, tc, lr, lc;
    scanf("%d", &x);
    n = x + (x - 1);
    tr = 0;
    tc = 0;
    lr = n - 1;
    lc = n - 1;
    int a[n][n];
    while (x > 0)
    {
        for (int i = tr; i <= lr; i++)
        {
            for (int j = tc; j <= lc; j++)
            {

                if (i == tr || i == lr || j == tc || j == lc)
                {
                    a[i][j] = x;
                }
                else
                {
                    a[i][j] = 0;
                }
            }
        }
        tr++;
        tc++;
        lr--;
        lc--;
        x--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}