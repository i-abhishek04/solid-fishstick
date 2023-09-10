#include<stdio.h>

int main(){
    FILE * ptr = NULL;
    FILE * ptr1 = NULL;
    char str[50]= "This file is created by intro.c";
    char str1[30];
    ptr = fopen("intro.txt", "a");
    fprintf(ptr, "%s\n", str);
    fclose(ptr);
    ptr1 = fopen("intro.txt", "r");
    fscanf(ptr1, "%s", str1);
    printf("%s\n", str1);
    fclose(ptr1);
    return 0;
}