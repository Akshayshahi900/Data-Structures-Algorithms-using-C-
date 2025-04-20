#include <stdio.h>
int main()
{
    int arr[100], i, j, n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    // Input matrix
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements of array:");
        scanf("%d", &arr[i]);
    }
    // Bubble sort
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
    //Printing Matrix
    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;

}