/******************************************************************************

Create two arrays A and B of size 5 and C of size 10. Accept numbers in two arrays A and B. 
Fill the array C in such a way that the first five positions occupy the numbers present in 
array A and rest of five positions occupy the numbers present in array B.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,e=0,k=0,l=0,o=1;
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
    
    for(i=0;i<k;i++)
    {
        z[i]=m[i];
    }
    for(i=k;i<l;i++)
    {
        z[i]=n[e];
        e++;
    }
    printf("\nConcatinated Array");
    for(i=0;i<l;i++)
    {
        printf("\n%d Element %d",o,z[i]);
        o++;
    }
}
