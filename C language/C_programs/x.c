#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,a,e,b,c;
    
    printf("Enter the values of principle,rate,time\n");
    scanf("%f%f%f",&p,&r,&t);
    b=1+r;
    c=t;
    e= pow(b,c);
    a=p*e;
    printf("The amount is =%f",a);
    return 0;
}