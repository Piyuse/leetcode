#include <stdio.h>
#include <stdlib.h>

int factorial(fact)
{
    if (fact == 1)
    {
        return 1;
    }
    else
    {
        fact = factorial(fact - 1) * fact;
        return fact;
    }
}
int number(fac)
{
    int count = 0;
    while (fac != 0)
    {
        fac = fac / 10;
        count = count + 1;
    }
    return count;
}

int main()
{
    int fact, fac, digits;
    printf("Enter the number to find factorial");
    scanf("%d", &fact);
    fac = factorial(fact);
    printf("factorial is %d\n ", fac);
    digits = number(fac);
    printf(" and number of digits is %d", digits);
}