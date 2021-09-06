#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    if (a == 0)
    {
        return b;
    }
    return gcd(b, a % b);
}

int main()
{
    int a = 0, b = 0, res;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    res = gcd(a, b);
    printf("\n %d",res);
}