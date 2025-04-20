//wap to check whether a number is a robinson number or not
#include<stdio.h>
int main()
{int n,i,fact=1;
printf("enter the number");
scanf("%d",&n);
if(n<0)
{printf("factorial of number=%d",fact);
}
else{
    for(i=1;i<=n;i++)
    {fact=fact+i;
    }
    printf("factorial of given number=%d",fact);
}
}