#include<stdio.h>
#define PI 3.14159

int main(){
    int rad;
    printf("Enter the radius of circle:\n");
    scanf("%d", &rad);
    printf("The area of the circle is %f", PI*rad*rad);
    return 0;
}
