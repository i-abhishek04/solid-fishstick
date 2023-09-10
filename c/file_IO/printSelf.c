#include<stdio.h>

int main()
{
    char ch='0';
    FILE *ptr=fopen("printSelf.c","r");
    while(ch!=EOF){
        ch=fgetc(ptr);
        printf("%c",ch);
    }
    fclose(ptr);
    return 0;
}