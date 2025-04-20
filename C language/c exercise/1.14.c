#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a , b, c:\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Equation of line is :\n");
    printf("%dx + %dy = %d", a, b, c);
    return 0;
}