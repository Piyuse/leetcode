#include <stdio.h>

int find(a, d, n)
{
    int i, A[100];

    for (i = 0; i < n + 1; i++)
    {
        if (i == 0)
        {
            A[i] = a;
        }
        else
        {

            A[i] = A[i - 1] * d;
        }
    }
    return A[n - 1];
}
int main()
{
    int a, d, n, term;
    printf("enter first term of gp");
    scanf("%d", &a);
    printf("enter the commmn difference\n");
    scanf("%d", &d);
    printf("enter the term that needed to be found out\n");
    scanf("%d", &n);
    term = find(a, d, n);
    printf("the term is %d", term);
}