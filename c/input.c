#include<stdio.h>

int main(){
    int* ptr;
    int* ptr2= NULL;
    int a;
    ptr = &a;
    printf("Enter a number ");
    scanf("%d", ptr);
    printf("You entered %d\n", *ptr);
    printf("You entered %x\n", ptr);
    printf("You entered %x\n", &ptr);
    printf("You entered %d\n", a);
    printf("You entered %x\n", &a);
    // printf("You entered %\n", &a);
    printf("You entered %d\n", &a);
    printf("You entered %d\n", *ptr2);
    return 0;
}