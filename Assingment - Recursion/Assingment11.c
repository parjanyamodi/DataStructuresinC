/******************************************************************************

Find the smallest value from the given array. - Recursion

*******************************************************************************/
#include<stdio.h>

int small(int a[],int n)
{
    int min;

    if(n==1)
        return a[0];
    else {
        min=small(a,n-1);

        if(min<a[n-1])
        {
            return min;
        }
        else
        {
            return a[n-1];
        }
    }

} 

int main()
{
    int i,j,n,a[20];
    printf("Enter the size of array :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter value %d : ",i);
        scanf("%d",&a[i-1]);  
    }
    printf("\nThe smallest value is : %d",small(a,n));
}
