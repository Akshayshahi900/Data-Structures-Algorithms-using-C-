#include<stdio.h>
int main()
{
    int num,i,rem,j,fact,sum=0;
printf("enter any number");
scanf("%d",&num);
for(j=num;j>0;j=j/10)
{
rem=j%10;
fact=1;
for(i=1;i<=rem;i++)
fact=fact*i;
sum=sum+fact;
}
if(num==sum)
{
    printf("yes");
}
else
{printf("no");
}
}
