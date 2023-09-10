#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt","r");// to read a file
    // ptr = fopen("sample.txt","w");// to write to a file

    return 0;
}