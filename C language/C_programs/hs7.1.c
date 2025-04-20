#include<stdio.h>
void count(int arr[]);
int main(){
    int x[10]={1,2,1,12,1,21,1,1,1};
    count(&x);

}
void count(int arr[]){
    int n;
    printf("ENter the value of n");
    scanf("%d", &n);
    arr[9]=n;
    
}