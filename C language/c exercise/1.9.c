#include<stdio.h>
int main(){
    float c, f;
    printf("Enter the temperature in celsius:\n");
    scanf("%d",&c);
    f = ((9*c)/5) + 32;
    printf("Temperature in Farenhiet is : %.2f",f);
    return 0; 
}