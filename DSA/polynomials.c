#include <stdio.h>

typedef struct term
{
    int coef;
    int power;
} term;

typedef struct polynomial
{
    term t[10];
    int n;
} poly;

void init(poly *p)
{
    p->n = 0;
}

void insert(poly *ptr, term t)
{
    int i;
    for (i = ptr->n - 1; (ptr->t[i]).power > t.power && i >= 0; i--)
    {
        ptr->t[i + 1] = ptr->t[i];
    }
    ptr->t[i + 1] = t;
    ptr->n = ptr->n + 1;
}

void read(poly *ptr)
{
    int n, i, power, coef;
    term t;
    init(ptr);
    printf("Enter number of terms : ");
    scanf("%d", &n);
    printf("Power  Coefficient\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &power, &coef);
        t.power = power;
        t.coef = coef;
        insert(ptr, t);
    }
}

void print(poly *ptr)
{
    printf("\n");
    for (int i = 0; i < ptr->n; i++)
    {
        printf("%5dx^%d\t", (ptr->t[i]).coef, (ptr->t[i]).power);
    }
}

int main()
{
    poly p1;
    read(&p1);
    printf("The polynomial you entered is\n");
    print(&p1);
    return 0;
}