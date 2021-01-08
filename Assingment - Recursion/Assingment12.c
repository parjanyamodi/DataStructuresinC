/******************************************************************************

Find the smallest value from the given array. - Recursion

*******************************************************************************/
#include<stdio.h>

int length(char str[], int i)
{
    if (str[i] == '\0')
    {
        return 0;
    }
    return (1 + length(str, i + 1));
}
 
int main()
{
    char str[20];
    int len;
 
    printf("Enter any string : ");
    scanf("%s", str);
    len = length(str, 0);
    printf("\nThe length is string [ %s ] is %d.\n", str, len);
}
 

