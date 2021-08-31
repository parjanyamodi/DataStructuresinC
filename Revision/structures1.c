#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Cartesian
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

int formula(double x1, double y1, double x2, double y2)
{
    double a,b,c,d,e,f;
    a = substract(x1, x2);
    printf("\n%f",a);
    b = substract(y1, y2);
    printf("\n%f",b);
    c = a*a;
    printf("\n%f",c);
    d = b*b;
    printf("\n%f",d);
    e = add(c,d);
    printf("\n%f",e);
    f = sqrt(e);
    return f;
}

int main()
{
    double d,e;
    struct Cartesian p1 = {-3,-1};
    struct Cartesian p2 = {2,3};
    
    printf("%f, %f", p1.x, p1.y);
    printf("\n");
    printf("%f, %f", p2.x, p2.y);
    d = formula(p1.x, p1.y, p2.x, p2.y);
    printf("\n");
    printf("%f", d);
    return 0;
}
