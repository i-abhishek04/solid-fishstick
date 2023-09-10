#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        if((i == 0)||(i == n-1)){
            for(int j =0; j<n-1; j++)
                printf("*");
            printf("\n");
        }
        else{
                printf("*");
                for(int k=0; k<n-3; k++){
                    printf(" ");
                }
                printf("*\n");
            }
    }
    return 0;
}