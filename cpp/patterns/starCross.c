#include<stdio.h>

int main()
{
    int n;
    printf("enter no of rows : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||j+i+1==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}