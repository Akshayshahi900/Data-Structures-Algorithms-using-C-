#include<stdio.H>
/*Write a program in C to find the maximum number 
between two numbers using a pointer.*/
 void greatest(int *a , int *b);
int main(){
int x,y;
printf("Enter the value of  x and y  numbers");
scanf("%d %d",&x ,&y);
greatest( &x ,&y);
// printf("%d is greatest", greatest(&x ,&y));

return 0;
}
//function for greatest number
void greatest(int *a ,int *b){
    if(*a > *b){
    printf("x is greatest i.e %d",*a);
}
else{
    printf("y is greatest i.e %d",*b);
}
}