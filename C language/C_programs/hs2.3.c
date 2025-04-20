//Wap to print smallest of two numbers
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the values of a and b");
    scanf("%f%f",&a,&b);
    if(a>b){
        printf("The value of a is greater than b");

    }else if(a==b) {
        printf("The numbers are equal");

    }else {
        printf("The value of b is greater than a");

    }return 0;

}
