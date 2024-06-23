#include <stdio.h>

int toh(n, from, to, aux)
{
    if (n == 1)
    {
        printf("movement is from %d to %d\n ", from, to);
        return 1;
    }
    else
    {
        int count = 0;
        count = count + toh(n - 1, from, aux, to);
        printf("movement is from %d to %d\n", from, to);
        count++;
        count = count + toh(n - 1, aux, to, from);

        return count;
    }
}

int main()
{
    int n;
    printf("enter the  number of dics involved \n");
    scanf("%d", &n);
    int mov = toh(n, 1, 3, 2);
    printf("total moves is %d", mov);
}