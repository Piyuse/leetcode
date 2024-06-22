// Given a number N. Find its unique prime factors in increasing order.
#include <stdio.h>
int main()
{
    int n, i;
    printf("enter the unique number \n");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n != 0)
        {
            if (n % i == 0)
            {
                printf("%d\n", i);
                n = n / i;
            }
        }
    }
}