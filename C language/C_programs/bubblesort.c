#include <stdio.h>
int main()
{
    int n, arr[50], temp;
    printf("enter the value of n");
    scanf("%d", &n);
    printf("enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("sorted array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}