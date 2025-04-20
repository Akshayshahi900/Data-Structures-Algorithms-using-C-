#include <stdio.h>
int findn(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 1;
    }
    int x=findn(n-1,a,b,c);
    find n
}
int main()
{
    int n, a, b, c;
    printf("Enter the value of n,a,b,c: ");
    scanf("%d %d %d %d", &n, &a, &b, &c);
}