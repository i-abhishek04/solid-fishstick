#include<string.h>
#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
void show(struct employee e){
    printf("Code: %d\n", e.code);
    printf("Name: %s\n", e.name);
    printf("Salary: %f\n", e.salary);
}
int main(){
    struct employee e1;
    e1.code= 34;
    e1.salary = 345.33;
    strcpy(e1.name, "Abhishek");
    show(e1);
    return 0;
}