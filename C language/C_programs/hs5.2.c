// write a function to print square root of a function
#include<stdio.h>
#include<math.h>
int root(int n);
int main(int  n){
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",root(n));
    return 0;
}
int root(int n){
    return pow(n,0.5);
}