#include<stdio.h>
int main(){
    int arr[11];
    int temp,n=11;
    for(int i=0; i<11;i++){
        scanf("%d",&arr[i]);

    }
    
     for(int j=0;j<n-1;j++){
    for(int i=0;i<(n-j-1);i++){
        if(arr[i]> arr[i+1]){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;}
       
    }}
    for(int i=0; i<11;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}