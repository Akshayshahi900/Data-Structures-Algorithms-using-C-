#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], r, c, i, j;
    printf("enter the value of r and c ");
    scanf("%d%d", &r, &c);
    printf("enter the elements ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("transposed matrix=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", b[i][j]);
        }
        if(j==r-1);
        printf("\n");
    }
    return 0;
}