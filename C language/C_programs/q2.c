#include<stdio.h>
int fact(int x);
int main()
{
    int a,f;
    printf("enter the number");
    scanf("%d",&a);
    f=fact(a);
   printf("%d",fact(a));

}
int fact(int x)
{
    int f1;
    if(x>1)
   { f1=x*fact(x-1);
 
   }
   else{
    return 1;
   }
}