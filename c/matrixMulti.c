#include <stdio.h>

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

void getMatrix(int *arr, int row, int col)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", (arr + i * col + j));
}

void matrixMulti(int ar1[][3], int ar2[][3])
{
    int res[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                res[i][j] += ar1[i][k] * ar2[k][j];
            }
        }
    }
    print(*res, 3, 3);
}

int main()
{
    int a[3][3], b[3][3];
    printf("Enter first matrix:\n");
    getMatrix(*a, 3, 3);
    printf("Enter second matrix:\n");
    getMatrix(*b, 3, 3);
    printf("The first matrix is\n");
    print(*a, 3, 3);
    printf("The second matrix is\n");
    print(*b, 3, 3);
    printf("Matrix 1 * Matrix 2\n");
    matrixMulti(a, b);
    printf("Matrix 2 * Matrix 1\n");
    matrixMulti(b, a);
    return 0;
}