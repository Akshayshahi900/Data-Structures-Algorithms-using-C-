#include <stdio.h>
int main()
{

    int arr[] = {2, 44, 67, 1, 35, 6, 78};
    int size = sizeof(arr) / sizeof(int);
    int key = 67;
    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at %d" , i);
        }
    }
}