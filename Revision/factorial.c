#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n, res;
    printf("Enter the number of factorial needed : ");
    scanf("%d", &n);
    res = factorial(n);
    printf("%d \n", res);
}