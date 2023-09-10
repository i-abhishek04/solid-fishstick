#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat1[10][10];
    int mat2[10][10];
    int result[10][10];
    int r1, c1, r2, c2;
    int sum = 0;
    printf("Enter number of rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter number of columns of first matrix: ");
    scanf("%d", &c1);
    printf("Enter number of rows of second matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns of second matrix: ");
    scanf("%d", &c2);

    if (c1 != r2)
    {
        printf("Matrices can't be multiplied as column of first matrix is not equal to row of second matrix.");
    }

    else
    {

        printf("Enter the first matrix\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
            printf("\n");
        }

        printf("Enter the second matrix\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
            printf("\n");
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    sum += mat1[i][k] * mat2[k][j];
                }
                result[i][j] = sum;
                sum = 0;
            }
        }

         printf("The first matrix\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d ", mat1[i][j]);
            }
            printf("\n");
        }

        printf("The second matrix\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", mat2[i][j]);
            }
            printf("\n");
        }

        printf("The resultant matrix is \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}