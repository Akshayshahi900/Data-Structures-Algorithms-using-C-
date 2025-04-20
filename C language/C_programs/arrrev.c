#include<stdio.h>
int arrayrev(int arr [],int *n);
 int printarr(int arr[],int *n);
int main()
{
    int arr[]={1,2,3,4};
   int size=4;
    arrayrev(arr,&size);
    printarr(arr,&size);
    return 0;
}
int arrayrev(int arr[],int *n)
{
    int i;
    for(i=0;i<*n/2;i++)
    {
        int firstval=arr[i];
        int secondval=arr[*n-i-1];
        arr[i]=secondval;
        arr[*n-i-1]=firstval;
    }
}
int printarr(int arr[],int *n)
{
    int i;
    for( i=0;i<*n;i++)
    {
        printf("%d\t",arr[i]);
    }
}