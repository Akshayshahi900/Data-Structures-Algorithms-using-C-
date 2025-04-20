#include<stdio.h>
int main(){
    int i,num,temp=0;
printf("Enter the number to check");
scanf("%d",&num);
    for (int i=2;i<=num/2;i++){
        if(num%i == 0){
            temp++;
            break;
        }
    }
    if(temp==0 && num!=1){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
    return 0;
}