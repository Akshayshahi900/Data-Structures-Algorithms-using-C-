// write a function to find the sum of digits of the number
#include<stdio.h>
int noofdigit(int n ,int sum);
int main(int n){ 
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d"
  
}
int noofdigits(int n , int sum){
    sum =0
    int digit;
    while(n!=0){
        digit = n%10;
        sum = sum + digit;
        n = n/10;}
        return sum;

    }
    
