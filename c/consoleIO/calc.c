#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int num1, num2;
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    // printf("%c", *argv[2]);

    if (*argv[2] == '+')
    {
        printf("%d", num1 + num2);
    }
    else if (*argv[2] == '-')
    {
        printf("%d", num1 - num2);
    }
    else if (*argv[2] == '.')
    {
        printf("%d", num1 * num2);
    }
    else if (*argv[2] == '/')
    {
        printf("%f", (float)num1 / num2);
    }
    return 0;
}
