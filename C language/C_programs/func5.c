#include<stdio.h>
int table(int n);
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d",&n);
printf("%d",table(n));
return 0;

}
int table(int n){
    int i=1;
    while(i<=10){printf("%d\n",i*n);
    i++;
    }
    return 0;
}