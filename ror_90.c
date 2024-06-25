#include <stdio.h>
void rotate_90(int A[20][20], int m, int n)
{
    int i, j, temp, k;
    // transpose of matrix
    for (i = 0; i < m; i++)
    {
        for (j = i; j < n; j++)
        {
            temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    printf("matrix after having 90 degree rotation\n");
    for (j = 0; j < n; j++)
    {
        for (i = 0, temp; i < n; i++)
        {
            temp = A[i][j];
            A[i][j] = A[n - 1 - i][j];
            A[n - 1 - i][j] = temp;
        }
    }
}

void print_matrix(int A[20][20], int m, int n)
{
    int i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int A[20][20], m, n, i, j;
    printf("enter the size of matrix\n");
    scanf("%d", &m);
    scanf("%d", &n);
    printf("enter the matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("enter the elementA[%i][%i]", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("displaying matrix \n");
    print_matrix(A, m, n);
    rotate_90(A, m, n);
    printf("matrix after 90 degree rotation is\n");
    print_matrix(A, m, n);
}