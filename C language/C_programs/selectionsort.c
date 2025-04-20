#include<stdio.h>
int main()
{
    int n,arr[50],min,temp,j,i;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the elements");
    for (int i = 0; i < n; i++)
    { scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }}
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        
    }
    printf("sorted array");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}