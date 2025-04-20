#include <Stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for (j = 1; j <= (2 * n - 1); j++)
        {
            printf("%d ", n); // prints the value of 'n'
        }
        printf("\n");
        n--;
    
    }
}