#include<stdio.h>
int main()
{int i,j,n,r,f,s=0;
printf("n: ");
scanf("%d",&n);
for(j=n;j>0;j=j/10){
    f=1;
    r=j%10;
    for(i=1;i<=r;i++){
        f=f*i;}
        s=s+f;}
if(n==s){
    printf("yes it a robinson number");
}
else{
    printf("No it is not a robinson number");
}
return 0;
}
