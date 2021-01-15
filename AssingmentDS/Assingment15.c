/******************************************************************************

Insertion Sort

*******************************************************************************/
#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main() {
    int n=5,c=0,m=0,i=0;
    int arr[n];
    
    for(;;)
    {
        printf("\n--------------------Menu:-----------------------\n1. Create Array\n2. Display Array\n3.Apply Insertion Sort\n4.Exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                printf("Enter the elements\n");
                for(i=0;i<n;i++)
                {
                    m=i+1;
                    printf("Element %d :",m);
                    scanf("%d",&arr[i]);
                }
                break;
            case 2:
                printArray(arr, n);
                break;
            case 3:
                insertionSort(arr, n);
                break;
            case 4: 
                exit(0);
            default:
                printf("\n------------------------Invalid Choice---------------------\n");
        }
    }
}
