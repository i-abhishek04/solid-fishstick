#include <stdio.h>
#include <conio.h>

int main()
{
    int no, dec, space;
    char ch;
    do
    {
        printf("Enter 1 for star pyramid and 2 for inverse star pyramid\n");
        scanf("%d", &dec);
        printf("Enter the no of rows you want in the pattern\n");
        scanf("%d", &no);
        if (dec == 1)
        {
            for (int i = 1; i <= no; i++)
            {
                for (space = 2 * (no - i); space > 0; space--)
                {
                    printf(" ");
                }
                for (int j = 1; j < 2 * i; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }
        else if (dec == 2)
        {
            for (int i = no; i >= 1; i--)
            {
                for (space = 0; space < 2*(no -i); space++)
                {
                    printf(" ");
                }
                for (int j = 1; j < 2 * i; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }
        fflush(stdin);
        printf("Do it again? y/n\n");
        scanf("%c", &ch);
    } while (ch == 'y');

    return 0;
}