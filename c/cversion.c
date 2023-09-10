#include <stdio.h>

int main()
{
    if(__STDC_VERSION__>= 201710L) 
        printf("We are using C18\n");
    else if (__STDC_VERSION__>= 201112L)
    {
       printf("We are using C11\n");
    }
    
    return 0;
}