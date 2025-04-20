#include <stdio.h>
int main()
{
    int n, arr[50], size, result, key;
    size = sizeof(arr) / sizeof(arr[0]);
    printf("enter he value of n");
    scanf("%d", &n);
    printf("enter the elements in array");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the key");
    scanf("%d", &key);
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("%d", mid);
        }
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}