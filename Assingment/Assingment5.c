/******************************************************************************

Accept numbers in array a [10] & create another array B [5]. The array B first location fills with sum of first & second location of array A. 
The array B second location fills with sum of third & forth location of array A. Similarly fill all the position of array B & display it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10], b[5], i, o=0, q=0, w=1, d=0;
    printf("Array A\n");
    for(i=0;i<10;i++)
    {
        o=i+1;
        printf("Enter %d Element : ",o);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        b[i]=a[q]+a[w];
        q=q+2;
        w=w+2;
    }
    printf("\nArray B\n");
    for(i=0;i<5;i++)
    {
        d=i+1;
        printf("Element %d of Array B :%d\n",d,b[i]);
    }
}
