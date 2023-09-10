#include<stdio.h>

int main()
{
    int n =1;
    int lines;
    printf("Enter a number ");
    scanf("%d",&lines);
    for(int i= 0; i<lines; i++){
        for(int j = 0; j<2*(lines - 1 -i); j++){
            printf(" ");
        }
        for(int k = 0; k<=i; k++){
            printf("%d   ", n++);
        }
        printf("\n");
    }
    return 0;
}