// wap to print all elements of arrays in reverse order
// #include<stdio.h>
// int main()
// {
// int arr[4]={1,2,7,4};
// for(int i=0; i<4;i++){
//  printf("%d\n",*(arr+ i));   // or arr[i]
// }

// return 0;
// }
#include<stdio.h>
void rev(int arr[], int n);
void printarr(int arr[], int n);
int main(){
    int arr[4]={4,1,12,6};
    rev(arr, 4);
    printarr( arr ,4);
    return 0;
}
void rev(int arr[], int n){
    for(int i=0;i<n/2;i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[i] = secondval;
        arr[n-i-1] =firstval;
    }
}
void printarr(int arr[], int n){
    for(int i=0; i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}