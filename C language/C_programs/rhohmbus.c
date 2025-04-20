#include<stdio.h>
int main()
{ int rows,i,j;
    printf("enter the number of rows");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i;j++)
        {
            printf(" ");

        }
        for(j=0;j<rows;j++)
        {
            printf("%ch",j);
        }
        printf("\n");
    }
    return 0;
}