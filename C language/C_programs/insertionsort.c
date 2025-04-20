#include <stdio.h>
int main()
{
    int n, arr[50], min, temp, j;
    printf("enter the value of n");
    scanf("%d", &n);
    printf("enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   for(int i=0;i<n;i++)
   {
    temp=arr[i];
    j=i-1;
    while(j>=0&&arr[j]>temp)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
   }
    printf("sorted array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}
 