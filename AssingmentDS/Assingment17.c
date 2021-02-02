
#include <stdio.h>
#include<stdlib.h>
int q[5], r = -1, f = -1;

void insertfront (int data)
{
    if (r == 4)
    {
        printf ("\nOueue Overflow !");
    }
    else if (f == -1 && r == -1)
    {
        f = 0;
        q[++r] = data;
    }
    else
    {
        q[++r] = data;
    }
}
void insertrear()
{
    if(rear==4)
    {
        printf("queue overflow\n");
    }
    else
    {
        q[++r]=data;
    }
}

void display ()
{
    int i;
    if (r < f || r == -1)
    {
        printf ("Queue Underflow !");
    }
    else
    {
        for (i = f; i <= r; i++)
	    {
	        printf ("%d\t", q[i]);
	    }
    }
}

int main ()
{
    int ch,x;
    for(;;)
    {
        printf ("\nEnter the choice:\n1.Insert Front\2.Insert Rear\n3.Display\n4.Exit\n");
        scanf ("%d",&ch);
        switch (ch)
	    {
	        case 1:
	            if (r == 4)
	            {
	                printf ("\nQueue Overflow !");
	            }
	            else
	            {
	                printf ("Enter data: ");
	                scanf ("%d", &x);
	                insertfront(x);
	            }
	            break;
	       case 2;
	            if (r == 4)
	            {
	                printf ("\nQueue Overflow !");
	            }
	            else
	            {
	                printf ("Enter data: ");
	                scanf ("%d", &x);
	                insertrear(x);
	            }
	            break;
	       case 3:
	            display ();
	            break;
	       case 4:
	            exit(0);
	       default :
	            printf("Invalid Choice !");
	            break;
	    }
    }
}
