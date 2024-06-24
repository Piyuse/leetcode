#include <stdio.h>

int main()
{
    int A[20][20];
    int m, n, i, j, upper = 0, lower = 0;
    printf("enter the dimension of matrix\n");
    scanf("%d", &m);
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("enter the dimension of A[%i][%i]", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("the matrix is \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }

    printf("upper triangular matrix is\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i <= j)
            {
                printf("%d", A[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("calculating the sum of upper and lower trianlge\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i <= j)
            {
                upper = upper + A[i][j];
            }
            else
            {
                lower = lower + A[i][j];
            }
        }
    }
    printf("sum of upper is %d\n", upper);
    printf("sum of lower is %d\n", lower);
}