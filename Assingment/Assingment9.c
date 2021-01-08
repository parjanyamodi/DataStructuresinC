/******************************************************************************

There are 10 elements in an array, Write a program to arrange first 5 elements 
of the array in ascending order and rest 5 elements into descending order.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int arr[10];
    int n=10, i, j, tmp1, tmp2;
	
       printf("Input %d elements in the array :\n",n);
       for(i=1;i<=n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[j] <arr[i])
            {
                tmp1 = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp1;
            }
        }
    }
    for(i=5; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(arr[j] >arr[i])
            {
                tmp2 = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp2;
            }
        }
    }
    printf("\nSorted Array\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
	        printf("\n\n");
}
