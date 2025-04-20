#include<stdio.h>
int main()
{
    int i,j,k,l,n,m;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("%d",j);
            m=(2*j)-1;
            for(k=9;k>=m;k--)
                printf(" ");
        for(n=i;n>=1;n--)
        {
        if(n==5)
            continue;
        else
            printf("%d",n);
        }
        printf("\n");
    }
return 0;
}
