#include<stdio.h>
int fib(int n);
int main(int n){
printf("%d",fib(n));
return 0;
}
int fib(int n){
    if(n!=0){
    int fibn = fib(n-1) + fib(n-2);
  return fibn;  
}}