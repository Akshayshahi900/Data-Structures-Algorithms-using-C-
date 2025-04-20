#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,key,n;
    printf("enter the value of n");
    scanf("%d",&n);
    
    int *arr[n];
     arr[n]=(int*) malloc(n * sizeof(int));
     printf("Enter the elements of array");
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
     }
     printf("Enter the value of key");
    scanf("%d",&key);
     for(i=0;i<n;i++){
     if(*arr[i]==key){
        printf("%d is the address of element",i);
        break;
     }
     else{
        printf("Element not found");
     }}
     
     return 0;



}