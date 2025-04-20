//write a program in c to find the factorial of a number.
#include<stdio.h>
int main()
{ int fact=1,num;
    printf("Enter the number\n");
    scanf ("%d",&num);
   
    while(num>0){
        fact=fact*num;
        --num;}
    printf("\n\nThe factorial of a number is %d",fact);
    return 0;
}
// output: here num is input from user and the number should be greater than 0;
// so when number is greater than 0 the equation fact=fact*num;
// will start with 1*num;
// multiply the value till --num =1
   