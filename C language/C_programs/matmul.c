#include <stdio.h>
int main()
{
    int a[100][100],b[100][100],mul[100][100],r,c,i,j,k;
    printf("Enter the value of row and column");
    scanf("%d %d", &r,&c);
    printf("enter the first matrix\n");
    for (i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
         
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("result matrix\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            mul[i][j]=0;
            for( k=0;k<c;k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
            
            

        }
    }

     for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
