#include<stdio.h>

int main(){
    FILE *ptr;
    int num, num2, num3;
    ptr= fopen("s.txt", "r");
    if(ptr == NULL){
        printf("This file does not exist");
    }
    else{
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fscanf(ptr, "%d", &num3);
    fclose(ptr);
    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);
    printf("The value of num3 is %d\n", num3);
    }
    return 0;
}