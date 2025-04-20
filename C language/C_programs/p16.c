//wap in c print numbers from 0to n where n is entered by user
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    // int i=0;
    // while (i<=n){printf("%d\n",i);
    // i++;}
    for(int i=0;i<=n;i++){printf("%d\n",i);}
    return 0;

}