#include<stdio.h>
int isPresent(char st[], char c){
    char *ptr= st;
    int count = 0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    char st[] = "abhi00000shek";
    if(isPresent(st, 'h')){
     printf("is present");
    }
    else{
        printf("not present");
    }
    return 0;
}