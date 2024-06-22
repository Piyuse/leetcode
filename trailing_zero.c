// For an integer N find the number of trailing zeroes in N!.
#include <stdio.h>

int count(fact)
{
    int digit, rem, count = 0;
    while (fact != 0)
    {
        rem = fact % 10;
        if (rem == 0)
        {
            count++;
        }
        fact = fact / 10;
    }
    return count;
}

int factorial(num)
{

    if (num == 1)
    {
        return 1;
    }
    else
    {
        return factorial(num - 1) * num;
    }
}
int main()
{
    int num, fact, zeros;
    printf("enter the number to find factorial zeros");
    scanf("%d", &num);
    fact = factorial(num);
    zeros = count(fact);
    printf("number of zeros is %d", zeros);
}