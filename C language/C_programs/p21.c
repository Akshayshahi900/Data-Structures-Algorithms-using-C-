// keep taking numbers as input as user enters a multiple of 7
#include<stdio.h>
int main()
{
int a,i;
do{printf("enter the number");
scanf("%d",&a);
if(a%7==0){break;}}
while(1);
return 0;
}