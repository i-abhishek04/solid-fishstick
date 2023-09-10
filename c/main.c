#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    printf("The value of argc is %d\n", argc);
    printf("Let's see the values in argv\n");
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            printf("argv[%d] = %s \n", i, argv[i]);
            sum += atoi(argv[i]);
        }
        printf("The sum of all inputs is %d", sum);
    }
    return 0;
}