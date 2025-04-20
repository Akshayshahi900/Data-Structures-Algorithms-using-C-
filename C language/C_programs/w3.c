// wap to find sum of even numbers from 1 to 100;
#include<stdio.h>
int main()
{
    int num=2,sum=0;
    while(num<=10){
        sum+=num;
        num+=2;
    }
    printf("\n\nThe sum of even numbers is %d",sum);
    return 0;
}
//2+2=4