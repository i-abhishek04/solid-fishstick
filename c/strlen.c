#include<stdio.h>
#include<string.h>
int length(char str[]){
    int len =0;
    while(str[len]!='\0'){
        len++;
        }
        return len;
}

int main(){
    char str[35];
    printf("Enter your name ");
    gets(str);
    // int len = strlen(str);
    printf("The length of the string is %d", length(str));
    return 0;
}