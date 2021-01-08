/******************************************************************************
 Reverse the number - Recursion
#include <stdio.h>
#include<math.h>

int reverse(int n)
{
    int k;
    if(n!=0)
    {
        k=n%10;
        int d = (int) log10(n);
        return ((k*pow(10, d))+reverse(n/10));
    }
    else{
        return 0;
    }
}

int main()
{
    int n,res;
    printf("Enter number");
    scanf("%d",&n);
    res=reverse(n);
    printf("Reserve Order : %d",res);
}

*******************************************************************************/
#include <stdio.h>
int k=0, h;
int reverse(int n)
{
    
    if(n!=0)
    {
        h=n%10;
        k=k*10+h;
        reverse(n/10);
    }
    else{
        return k;
    }
    return k;
}

int main()
{
    int n,res;
    printf("Enter number");
    scanf("%d",&n);
    res=reverse(n);
    printf("Reserve Order : %d",res);
}
