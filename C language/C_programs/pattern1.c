#include<stdio.h>
int main(){
    int i,j,r;
    printf("Enter the values of row:\n");
    scanf("%d",&r);
    for(i=0;i<=r;i++){
        for(j=r;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}