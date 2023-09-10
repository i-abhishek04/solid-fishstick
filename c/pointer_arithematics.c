#include<stdio.h>

int main(){
    float i = 5.8;
    float* ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    return 0;
}