#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int result(char you, char comp)
{
    if (you == comp)
        return -1;
    if (you == 'r' && comp == 'p')
        return 0;
    else if (you == 'r' && comp == 's')
        return 1;
    if (you == 'p' && comp == 's')
        return 0;
    else if (you == 'p' && comp == 'r')
        return 1;
    if (you == 's' && comp == 'r')
        return 0;
    else if (you == 's' && comp == 'p')
        return 1;
}

int main()
{
    int ran_num, res;
    char you, comp;
    int yscore = 0, cscore = 0;

    srand(time(NULL));

    ran_num = rand() % 100;

    if (ran_num < 33)
        comp = 'r';
    else if (ran_num > 33 && ran_num < 66)
        comp = 'p';
    else
        comp = 's';

    fflush(stdin);
    printf("Enter (r)ock (p)aper (s)cissor: ");
    scanf("%c", &you);
    // fflush(stdin);

    res = result(you, comp);

    if (res == 1)
    {
        printf("You win!!\n");
        // yscore++;
    }
    if (res == 0)
    {
        printf("You lose\n");
        // cscore++;
    }
    if (res == -1)
        printf("Tie\n");

    printf("You chose %c and computer chose %c \n", you, comp);
    

    return 0;
}