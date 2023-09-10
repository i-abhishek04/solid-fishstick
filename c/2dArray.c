#include <stdio.h>
#include <stdlib.h>

void print(int *arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%3d  ", *(arr + i * col + j));
        printf("\n\n");
    }
    printf("\n");
}

int main()
{
    int n = 0;
    int arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 3 && j == 3)
            {
                arr[i][j] = ' ';
            }
            else
                arr[i][j] = ++n;
        }
    }
    system("cls");
    print(*arr, 4, 4);
    // _getch();
    // int ch = _getch();
    // int ch1 = _getch();
    // printf("%d\n", ch);
    // printf("%d\n", ch1);
    return 0;
}