#include<stdio.h>
#include<string.h>

int main()
{
   char str[10];
   gets(str);
   int a = str[0] - '0';
   int b = str[1] - '0';
   int c = str[3] - '0';
   int d = str[4] - '0';
   int e = str[5] - '0';
   int f = str[7] - '0';
   int g = str[8] - '0';
   if(((str[2]=='A') || (str[2]=='E') || (str[2]=='I') || (str[2]=='O') || (str[2]=='U') || (str[2]=='Y')) && (((a+b)%2==0) && ((c+d)%2==0) && ((d+e)%2==0) && ((f+g)%2==0)))
   {
       printf("valid");
   }
   else
   {
       printf("invalid");
   }
   return 0;
}