#include<stdio.h>
#include<string.h>

int main(){
    char st1[34];
    char st2[34];
    char c;
    printf("Enter the value of first string ");
    scanf("%s", st1);
    printf("Enter the value of second string character by character ");
     
    int i=0;
     while(c!='\n'){
         fflush(stdin);
         scanf("%c", &c);
         st2[i]=c;
         i++;
        }
        st2[i]='\0';
    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);
    printf("The length of st1 is %d\n", strlen(st1));
    printf("The length of st2 is %d\n", strlen(st2));

    return 0;
}