#include<stdio.h>
#include<stdlib.h>

int main(){
    int len;
    printf("Enter the length of employee ID ");
    scanf("%d", &len);
    char* ptr = (char*)malloc(len*sizeof(char));
    free(ptr); 
    return 0;
}