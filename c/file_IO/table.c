#include<stdio.h>

int main(){
    FILE *ptr;
    // int num;
    // printf("Enter the number you want the table of: ");
    // scanf("%d", &num);
    ptr = fopen("table.txt", "a");
    for(int num = 1; num<=20; num++){
    for(int i = 1; i<=10; i++){
        fprintf(ptr, "\t\t\t%d X %d = %d\n", num, i, num*i);
    }
    fprintf(ptr, "*************************************************\n");
    }
    fclose(ptr);
    // printf("Successfully generated the table of %d in table.txt", num);
    return 0;
}