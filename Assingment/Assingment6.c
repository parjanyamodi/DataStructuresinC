/******************************************************************************

Accept data into two integers array A & B of size 5 elements each. The program 
should create another array T that finds the intersection of the two arrays and 
M that finds the remaining.
	
For e.g. if A = {1,3,5,7,8} & B = {7,4,2,8,9} 
Then T = {7,8} and M = {1,3,5,4,2,9}

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5], i , j , p , b[5] , m[10], t[10] , l=0 , g=0;
    
    printf("\n---------------Enter the elements of 1st Array---------------\n");
    for(i=0;i<5;i++)
    {
        printf("\nEnter value for index %d of 1st Array :", i);
        scanf("%d",&a[i]);
    }
    
    printf("\n---------------Enter the elements of 2nd Array---------------\n");
    for(i=0;i<5;i++)
    {
        printf("\nEnter value for index %d of 2nd Array :", i);
        scanf("%d",&b[i]);
    }
    
    for(i=0; i<5; i++)
    {
        p=0;
        for(j=0;j<5;j++)
        {
            if(a[i]==b[j])
            {
                t[g]=a[i];
                p++;
                g++;
            }
        }
        if(p==0)
        {
            m[l]=a[i];
            l++;
        }
    }
    for(i=0; i<5; i++)
    {
        p=0;
        for(j=0;j<5;j++)
        {
            if(b[i]==a[j])
            {
                p++;
            }
        }
        if(p==0)
        {
            m[l]=b[i];
            l++;
        }
    }
    printf("\nIntersection of Array");
    for(i=0;i<g;i++)
    {
        printf("\n Element %d",t[i]);
        
    }
    printf("\nUnion of Complement of Intersection of Array");
    for(i=0;i<l;i++)
    {
        printf("\n Element %d",m[i]);
        
    }
}
