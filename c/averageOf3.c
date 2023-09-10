#include<stdio.h>


int main(){
    int num1 , num2 , num3;
    float avg;
    printf("Enter num1:\n");
    scanf("%d",&num1);
    printf("Enter num2:\n");
    scanf("%d",&num2);
    printf("Enter num3:\n");
    scanf("%d",&num3);
    avg=(float)(num1 + num2 + num3)/3;
    printf("The average of %d,%d & %d = %f", num1, num2, num3, avg);
    return 0;
}