#include<stdio.h>
int main(){
    int x,y,z,temp;
   printf("Enter the value of x,y,z:\n");
   scanf("%d%d%d",&x,&y,&z);
    temp=x;
    x=y;
    y=z;
    z=temp;
    printf(" x =%d , y=%d ,z=%d",x,y,z);
    return 0;

}