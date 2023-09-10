#include<stdio.h>
#include<stdlib.h>

int main()
{
        int ch;
        FILE *ptr;
	ptr = fopen("ascii.txt","w");
	if(ptr==NULL){
	  printf("Can't open file\n");
  	  exit(1);
        }
        for(ch=0;ch<256;ch++)
       	     fprintf(ptr, "%d ->  %c\n", ch, ch);
        fclose(ptr);
    return 0;
}
