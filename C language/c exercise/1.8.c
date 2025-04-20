#include<stdio.h>
int calculate(int a ,int b, int c){
    if(b!=c){
    return a /(b-c);}
    else return 0;
}
int main(){
    int a,b,c;
printf("Enter the value of a, b and c:\n");
scanf("%d%d%d",&a,&b,&c);
printf("Answer is: %d",calculate(a,b,c));
return 0;
}