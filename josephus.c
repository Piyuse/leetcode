#include <stdio.h>

int josephus(int n, int k)
{

    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (josephus(n - 1, k) + k) % n;
    }
}

int main()
{
    int n, k;

    printf("enter the number of people\n");
    scanf("%d", &n);
    printf("enter the position of people neede to be killed\n");
    scanf("%d", &k);
    int position = josephus(n, k);
    printf("The safest position is %d", position + 1);
}