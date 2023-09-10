#include<stdio.h>

int main()
{
    // int num=0;
    for(int i=0; i<5; i++){
        
        for(int j=0; j<=i; j++){
            printf("%d ", j+1);
        }
        for(int k=0; k<2*(5-i-1);k++){
            printf("  ");
        }
        for(int l=i+1; l>0; l--){
            printf("%d ", l);
        }
        printf("\n");
    }
   
    return 0;
}