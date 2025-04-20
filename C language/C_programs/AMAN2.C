#include<stdio.h>
int main()
{
    float n,i;
    printf("enter the number");
    scanf("%f",&n);
    for(i=0.000001;i*i<n;i=i+0.000001);
    printf("%.2f",i);
    return 0;
}