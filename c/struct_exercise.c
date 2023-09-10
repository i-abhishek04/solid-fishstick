#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct driver
{
    char name[30];
    char dl[25];
    char route[30];
    float kms;
} driv;

driv input()
{
    driv d;
    static int num=1;
    printf("Enter details of driver number %d\n", num++);
    printf("Enter your name: ");
    gets(d.name);
    printf("Enter your driving license number: ");
    gets(d.dl);
    printf("Enter your route: ");
    gets(d.route);
    printf("Enter total kilometers drived: ");
    scanf("%f", &d.kms);
    printf("Thank You for your cooperation!\n");
    sleep(2);
    return d;

}

void output(driv *d)
{
    static int num = 1;
    printf("The details of driver d%d are as follows:-\n", num);
    printf("Name:-                                    %s\n", d->name);
    printf("Driving License number:-                  %s\n", d->dl);
    printf("Route:-                                   %s\n", d->route);
    printf("Total kilometers drived:-                 %f\n", d->kms);
    num++;
}

int main()
{
    driv d1, d2, d3;
    
    fflush(stdin);
    d1 = input();
    system("cls");
    
    fflush(stdin);
    d2 = input();
    system("cls");

    fflush(stdin);
    d3 = input();
    system("cls");

    output(&d1);
    printf("\n");

    output(&d2);
    printf("\n");
    
    output(&d3);
    printf("\n");
    
    return 0;
}