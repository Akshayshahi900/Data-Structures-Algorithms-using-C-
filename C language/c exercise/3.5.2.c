



#include <stdio.h>
#include <math.h>
int main()
{
    int x, i, j, digits = 0, n;
    printf("Enter the value of x:\n");
    scanf("%d", &x);
    // calculating no of digits
    n = x;
    while (x != 0)
    {
        x = x / 10;
        digits++;
    }
    // printing digits
    printf("The no of digits %d\n", digits);
    printf("%d\n", n);

    for (i = 1; i < digits; i++)
    {
        x = n % (int)pow(10, digits - i);
        printf("%d\n", x);
    }

    return 0;
}