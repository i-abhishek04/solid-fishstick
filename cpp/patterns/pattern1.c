#include<stdio.h>

int main()
{
    int num;
    printf("enter ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        int p=i+1;
        for(int j=0;j<2*num;j++){
            if(j<num -i||j>num+i)
                printf(" ");
            else if(j<num)   printf("%d",p++);
            else printf("%d",p--);
        }
        printf("\n");
    }
    return 0;
}