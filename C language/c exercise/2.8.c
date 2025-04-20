#include<stdio.h>
int main(){
    float x,y;
    printf("Enter the floating point integers");
    scanf("%f%f",&x,&y);
    int z;
    z=x+y;
    printf("%d is the sum",z);
    printf("%f%f",x,y);
    return 0;
}