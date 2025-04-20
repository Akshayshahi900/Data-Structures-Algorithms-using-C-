#include<stdio.h>
void bubblesort(int arr[] , int n){
    for(int i =0 ; i < n ;i++){
        for(int j =0 ; j < n-i-1 ; j++){
            if(arr[j] >arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //print array after sorting
    for(int i =0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100] ,  n;
    printf("Enter the no of elements of the array");
    scanf("%d",&n);
    printf("Enter the %d elements for array\n" , n);
    for(int i =0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    bubblesort(arr , n);
}