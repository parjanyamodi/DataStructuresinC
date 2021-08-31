#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Points
{
    float x, y;
};

int formula(struct Points p1, struct Points p2)
{
    float a,f;
    a = (((p2.x - p1.x)*(p2.x - p1.x))+((p2.y - p1.y)*(p2.y - p1.y)));
    printf("\n%f",a);
    f = sqrt(a);
    return f;
}

int main()
{
    float d,e;
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
