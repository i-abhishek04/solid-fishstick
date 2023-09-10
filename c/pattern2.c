#include<stdio.h>

int main()
{
     for(int i =5; i>0; i--){
        for(int j= 0; j<i; j++){
            printf("* ");
        }
        for(int k=2*(5-i); k>0;k--){
            printf("  ");
        }
        for(int l=i; l>0; l--){
            printf("* ");
        }
        printf("\n");
    }
    for(int i =0; i<5; i++){
        for(int j= 0; j<=i; j++){
            printf("* ");
        }
        for(int k=0; k<2*(5-i-1);k++){
            printf("  ");
        }
        for(int l=i+1; l>0; l--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}