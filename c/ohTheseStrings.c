#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int len(char * ptr)
{
    int count = 0;
    int i =0;
    while(ptr[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

void copy(char *s1, char *s2)
{
    while
}

int main()
{
    char s1[30], s2[30];
    printf("Enter a string : \n");
    gets(s1);
    printf("The length of the string entered is %d\n", strlen(s1));
    strcpy(s2, s1);
    printf("First string = %s\n",s1);    
    printf("Second string = %s\n",s2);    
    printf("On comparing the strings we get %d\n",strcmp(s1, s2));
    printf("On concatinating the strings we get %s\n", strcat(s1,s2));
    printf("On comparing the strings again we get %d\n",strcmp(s1, s2));
    printf("The length of the string is %d", len(s1));

    return 0;
}