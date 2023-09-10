#include<stdio.h>
int occurence(char* ptr, char c){
    // char *ptr= st;
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
    char st[] = "abhi64254603284shek";
    int num = occurence(st, '6');
    printf("6 has occured %d times", num);
    return 0;
}