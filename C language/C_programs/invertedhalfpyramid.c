#include<stdio.h>
int main()
{
    int rows;
    printf("enter the number of rows");
    scanf("%d",&rows);
    for(int i=0;i<=rows;i++)
    {
        for( int j=i;j<=rows-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}