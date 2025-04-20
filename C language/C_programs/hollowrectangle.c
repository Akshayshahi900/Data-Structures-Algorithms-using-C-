#include<stdio.h>
int main()
{
    int rows ,col;
    printf("enter the number of rows and columns:");
    scanf("%d%d",&rows,&col);
    for(int i=1;i<=rows;i++)
    {
        for( int j=1;j<=col;j++)
        { 
            if(i==1||i==rows||j==1||j==col){

            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}