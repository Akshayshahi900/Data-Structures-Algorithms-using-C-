#include<stdio.h>
#include<math.h>
int main(){
    float x;
    int i;
    printf("enter the value of x:");
    scanf("%f",&x);
    
    printf("%d\n", (int)x % 100); 
    printf("%d\n", (int)x % 10); 

}