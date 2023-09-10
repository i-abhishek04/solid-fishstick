#include<stdio.h>

int main(){
    char name1[10], name2[10];
    int salary1, salary2;
    FILE *ptr;
    printf("Enter name1: ");
    scanf("%s", name1);
    printf("Enter salary1: ");
    scanf("%d", &salary1);
    printf("Enter name2: ");
    scanf("%s", name2);
    printf("Enter salary2: ");
    scanf("%d", &salary2);
    ptr = fopen("employee.txt", "w");
    fprintf(ptr, "%s , %d\n", name1, salary1);
    fprintf(ptr, "%s , %d\n", name2, salary2);
    fclose(ptr);
    return 0;
}