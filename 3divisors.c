#include <stdio.h>

int main()
{
    int n, i, count, j;
    printf("Enter the limit to find 3 factors\n");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 3)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
