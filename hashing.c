#include <stdio.h>
#define MAX 100
#include <math.h>
#include <stdbool.h>
bool hashTable[MAX + 1][2];

void insert(int A[], int n)
{

    int i;
    for (i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            hashTable[A[i]][0] = 1;
        }
        else
            hashTable[abs(A[i])][1] = 1;
    }
}
void search(bool hashTable[MAX + 1][2])
{
    int m;
    printf("enter the element neede to be searched\n");
    scanf("%d", &m);
    if (m >= 0)
    {
        if (hashTable[m][0] == 1)
        {
            printf("Element found\n");
        }
        else
        {
            printf("Element not found\n");
        }
    }
    else
    {
        if (hashTable[abs(m)][1] == 1)
        {
            printf("Element found\n");
        }
        else
        {
            printf("Element not found\n");
        }
    }
}

int main()
{
    int A[20], i, n;
    printf("enter the number  of elements in array\n");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        printf("enter the elemet A[%d]", i);
        scanf("%d", &A[i]);
    }
    insert(A, n);
    search(hashTable);
}