#include <stdio.h>

int main()
{
    int num;
    printf("enter : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for(int j=num-i;j>0;j--)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}
/*
if(i+j<num)
    printf(" ");
else
    printf("%d",)
*/