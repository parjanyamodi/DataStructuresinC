/******************************************************************************

Create two arrays A and B of size 5 and C of size 10. Accept numbers in two arrays A and B. 
Fill the array C in such a way that the all odd positions occupy the numbers present in array 
A and all even positions occupy the numbers present in array B.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,e=0,k=0,l=0,o=0,p=1;
    printf("Enter the size of Array :");
    scanf("%d",&k);
    l=k*2;
    int m[k], n[k], z[l];
    printf("\n---------------Enter the elements of 1st Array---------------\n");
    for(i=0;i<k;i++)
    {
        printf("\nEnter value for index %d of 1st Array :", i);
        scanf("%d",&m[i]);
    }
    
    printf("\n---------------Enter the elements of 2nd Array---------------\n");
    for(i=0;i<k;i++)
    {
        printf("\nEnter value for index %d of 2nd Array :", i);
        scanf("%d",&n[i]);
    }
    
    for(i=0;i<l;)
    {
        z[i]=m[o];
        i=i+2;
        o++;
    }
    for(i=1;i<l;)
    {
        z[i]=n[e];
        i=i+2;
        e++;
    }
    printf("\nConcatinated Array");
    for(i=0;i<l;i++)
    {
        printf("\n%d Element %d",p,z[i]);
        p++;
    }
}
