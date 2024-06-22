// Given three numbers A, B, and M. The task is to print the sum of A and B under modulo M.
#include <stdio.h>
int main()
{
    int A, B, sum, M, result;
    printf("enter the number A");
    scanf("%d", &A);
    printf("enter the number B");
    scanf("%d", &B);
    sum = A + B;
    printf("enter the number M");
    scanf("%d", &M);
    result = sum % M;
    printf("the modulo additon result is %d", result);
}