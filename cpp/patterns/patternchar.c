#include <stdio.h>

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    int i;
    for (int j = 0; j < num; j++)
    {
        i=64+num;
        for (int k=0;k<=j;k++)
        {

            printf("%c", i--);
        }
        printf("\n");
    }
    return 0;
}