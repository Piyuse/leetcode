#include <stdio.h>

int fah_converter(temp)
{
    int fah;
    fah = ((temp * 9 / 5) + 32);
    return fah;
}

int main()
{
    int temp, tem;
    printf("Enter the temperature in celcius");
    scanf("%d", &temp);
    tem = fah_converter(temp);
    printf("Temperture in fahrenheit is %d", tem);
}