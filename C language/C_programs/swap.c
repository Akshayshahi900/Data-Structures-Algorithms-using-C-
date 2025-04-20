#include<stdio.h>
void swap(inta,intb);
void  main()
{
    int x,y;
    printf("entre the value of x and y");
    scanf("%d%d",&x,&y);
    printf("before swapping\n x=%d\n y=%d\n");
    swap(x,y);
    printf("after swapping\n x=%d\n y=%d\n");
}
void swap(int a,int b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
}

  