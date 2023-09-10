#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1;
    e1.code= 34;
    e1.salary = 345.33;
    strcpy(e1.name, "Abhishek");
    printf("code = %d\n", e1.code);
    printf("salary = %.2f\n", e1.salary);
    printf("name = %s\n", e1.name);
    return 0;
}