#include<stdio.h>
int temp();
int main(){
    int n;
    printf("Enter the temperature");
    scanf("%d",&n);
    temp(n);
    return 0;
    
}
int temp(int n){
    if(n>=25){ printf("HOT !!");}
    else{ printf("COLD !!");
    return 0;}
}