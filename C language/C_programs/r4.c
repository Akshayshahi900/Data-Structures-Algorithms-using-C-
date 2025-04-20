#include<stdio.h>
int  fact(int n);

int main() {
 
 printf(" The factorial is %d",fact(5));
 return 0;
}
int fact(int n){
    if (n==0){ return 1;}
    // printf("Calculate fact of n: %d\n",n);
    int factm1 = fact(n-1);
    int factn= factm1 * n;
    return factn;
}

