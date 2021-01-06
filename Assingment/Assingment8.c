/******************************************************************************

Write a program  to open 3 arrays of name A, P & N. Store 15 numbers in array A. 
Shift all the positive even numbers in array P and all the negative odd numbers 
in array N. Finally print the array P & N.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[15],p[15],n[15],i,f=0,g=0;
    printf("------------------------------------------------------------");
    printf("\nEnter the numbers in Array A\n");
    printf("------------------------------------------------------------");
    for(i=0;i<15;i++)
    {
        printf("Enter element :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<15;i++)
    {
        if(a[i]>=0 && a[i]%2==0)
        {
            p[f]=a[i];
            f++;
        }
    }
    for(i=0;i<15;i++)
    {
        if(a[i]<=0 && a[i]%2!=0)
        {
            n[g]=a[i];
            g++;
        }
    }
    printf("------------------------------------------------------------");
    printf("\nArray P");
    printf("------------------------------------------------------------");
    for(i=0;i<f;i++)
    {
        printf("\n%d",p[i]);
    }
    printf("------------------------------------------------------------");
    printf("\nArray N");
    printf("------------------------------------------------------------");
    for(i=0;i<g;i++)
    {
        printf("\n%d",n[i]);
    }
}
