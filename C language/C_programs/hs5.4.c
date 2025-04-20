#include<stdio.h>
int pwr(int a, int b);
int main(){
    int a, b;
    printf("Enter the number");
    scanf("%d",&a);
    printf("Enter the power of number");
    scanf("%d",&b);
    printf("The Answer is %d",pwr(a,b));
    return 0;
}
int pwr(int a , int b){
    int i=0, value=1;
    while(i<=b){
        value = a*a;
        i++;
    }
    return value;

}