#include <stdio.h>

int findpos(num)
{
    if (num == 0)
    {
        return 0;
    }
    int position = 1;
    while (!(num & 1))
    {
        num = num >> 1;
        position = position + 1;
    }
    return position;
}

int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    int pos = findpos(num);
    printf("the postion of rigt most zero is %d", pos);
}