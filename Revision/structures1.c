#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Points
{
    double x, y;
};

int substract(double a, double b)
{
    double c;
    c = b - a;
    return c;
}

int add(double a, double b)
{
    double c;
    c = b + a;
    return c;
}

int formula(struct Points p1, struct Points p2)
{
    double a,b,c,d,e,f;
    a = substract(p1.x, p2.x);
    b = substract(p1.y, p2.y);
    c = a*a;
    d = b*b;
    e = add(c,d);
    printf("\n%f",e);
    f = sqrt(e);
    return f;
}

int main()
{
    double d,e;
    struct Points p1 = {-3,-1};
    struct Points p2 = {2,3};
    
    printf("%f, %f", p1.x, p1.y);
    printf("\n");
    printf("%f, %f", p2.x, p2.y);
    d = formula(p1, p2);
    printf("\n");
    printf("%f", d);
    return 0;
}
