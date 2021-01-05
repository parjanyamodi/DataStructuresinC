/******************************************************************************

Accept 10 numbers into an array and then calculate the sum of numbers present in odd positions and even positions respectively.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,e=0,o=0,k=0;
    printf("Enter the size of Array :");
    scanf("%d",&k);
    int m[k];
    printf("\nEnter the elements of Array\n");
    for(i=0;i<k;i++)
    {
        printf("\nEnter value for index %d :", i);
        scanf("%d",&m[i]);
    }
    //Uncomment this loop for different method yet same answer
    //for(i=0;i<k;i++)
    //{
    //    if(i%2==0)
    //    {
    //        e=e+m[i];
    //    }
    //    else if(i%2==!0)
    //    {
    //        o=o+m[i];
    //    }
    //}
    
    for(i=0;i<k;)
    {
        e=e+m[i];
        i=i+2;
    }
    
    for(i=1;i<k;)
    {
        o=o+m[i];
        i=i+2;
    }
    
    
    printf("\nThe total of numbers at even positions is : %d",e);
    printf("\nThe total of numbers at odd positions is : %d",o);
}
