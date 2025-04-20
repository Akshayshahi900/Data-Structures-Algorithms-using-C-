#include<stdio.h>
int main(){
    int p=0,n=0,a;
    printf("Enter the numbers:\n");
    

    do{
        scanf("%d",&a);
        if(a>0){ p++;}
        else if (a<0){ n++;}
    }while(a!=0);
    printf("Count of positive numbers is %d\n",p);
    printf("Count of negative numbers is %d",n);
    return 0;
}