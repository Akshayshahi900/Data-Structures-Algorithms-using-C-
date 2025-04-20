#include<stdio.h>
int compare(int *a,int *b);
int main()
{ int x,y;
printf("enter the numbers");
scanf("%d%d",&x,&y);
compare(&x,&y);
    return 0;
}
int compare(int *a,int *b)
{
    if(*a>*b)
    {
        printf("a is largest ");
    }
    else
    printf("b is largest");
}