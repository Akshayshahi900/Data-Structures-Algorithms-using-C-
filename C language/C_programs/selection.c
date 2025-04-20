#include<stdio.h>
int main(){
    int arr[5]={12,3,45,64,34};
    int i,n;
    printf("The array is :\n");
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the value of n:\n");
    scanf("%d",&n);

    for(i=0;i<5;i++){
        if(arr[i]==n){
            printf("ELEMENT FOUND");
            printf("%d is the location of that element",i+1);
            break;
        }
      else{printf("NOT FOUND");}
    }
    
    return 0;
    
}