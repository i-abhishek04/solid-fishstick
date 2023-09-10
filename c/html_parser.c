#include <stdio.h>
#include <string.h>
#include<time.h>

void parser(char *string)
{
    int in = 0, index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 0;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 1;
            continue;
        }
        if (in == 1)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    clock_t start, end;
    start = clock();
    char string[] = "<h1>      This is a sentence     </h1>";
    parser(string);
    printf("The string is ~~%s~~\n", string);
    end = clock();
    double time = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time elapsed in seconds = %f", time);
    return 0;
}