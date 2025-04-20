#include<stdio.h>
 int binarysearch(int arr[],int size,int key)
 {
    int low ,mid,high;
 low=0;
 high=size-1;
 while(low<=high)
 {
 mid=(low+high)/2;
 if(arr[mid]==key)
 {
    return mid;
 }
 if(arr[mid]<key)
 {
    low=mid+1;
 }
 else{
    high=mid-1;
 }
 }
 return -1;
}
int main()
{
    int n,arr[50],size,result,key;
    size=sizeof(arr)/sizeof(arr[0]);
    printf("enter he value of n");
    scanf("%d",&n);
    printf("enter the elements in array");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key");
    scanf("%d",&key);
    result=binarysearch(arr,size,key);
    printf("%d",result);
    return 0;
}