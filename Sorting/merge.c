#include<stdio.h>
#include<stdlib.h>
int main(){
    int n ;
    printf("Enter the number of elements: ");
    scanf("%d" , &n);

    int * arr = (int *)malloc(n*sizeof(int));

    printf("Enter the elements of the array:\n");
    for(int i =0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    //sorting the array using merge sort
    mergeSort(arr, 0 , n-1);

    //printing the sorted array
    printf("Sorted array: ");
    for(int i =0 ; i <n ; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;

}