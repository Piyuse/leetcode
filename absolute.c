// finding absolute of a number

#include <stdio.h>

int absolute(int num)
{
    if (num < 0)
    {
        num = num * -1;
    }
    return num;
}

int main()
{
    int ab;
    int num;
    printf("enter the number to find absolute");
    scanf("%d", &num);
    num = absolute(num);
    printf("the absolute number is %d", num);
}