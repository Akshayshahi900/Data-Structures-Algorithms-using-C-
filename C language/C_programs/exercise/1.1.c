#include <stdio.h>
int factrec(int x);
int main()
{
    int a, f;
    printf("enter the number");
    scanf("%d", &a);
    f = fact(a);
    return 0;
}
intfactrec(int x)
{
    int f;
    if (x == 1)
        return 1;
    else
        f = x * fact(x - 1);
    return f;
}