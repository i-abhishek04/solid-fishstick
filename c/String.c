#include<stdio.h>
#include<string.h>

int main(){
    char *str="Hello";
    printf("%s\n", str);
    char str2[35];
    printf("Enter your name ");
    gets(str2);
    puts(str2);
    printf("Nice name %s", str2);
    return 0;
}