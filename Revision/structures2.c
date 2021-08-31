#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Fraction
{
    double x, y;
};

int add(double a, double b)
{
    double c;
    c = b + a;
    return c;
}

int formula(double x1, double y1, double x2, double y2)
{
    double a,b,c;
    a = x1/y1;
    printf("\n%.2f", a);
    b = x2/y2;
    printf("\n%.2f", b);
    c = add(a,b);
    return c;
}

int main()
{
    double d,e;
    struct Fraction a = {1,5};
    struct Fraction b = {2,9};
    
    printf("%.2f/%.2f", a.x, a.y);
    printf("\n");
    printf("%.2f/%.2f", b.x, b.y);
    d = formula(a.x, a.y, b.x, b.y);
    printf("\n");
    printf("%.2f", d);
    return 0;
}
