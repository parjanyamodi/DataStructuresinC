#include<stdio.h>

int length(char str[], int i)
{
    int j=0;
    if(str[i]=='\0')
    {
        return j;
    }
    else
    {
        if(str[i]>=65 && str[i]<=90)
        {
            j++;
        }
        return j+length(str,++i);
    }
}
 
int main()
{
    char str[20];
    int len;
 
    printf("Enter any string : ");
    scanf("%s", str);
    len = length(str, 0);
    printf("\nNumber of Uppercase in [ %s ] is %d.\n", str, len);
}
 
