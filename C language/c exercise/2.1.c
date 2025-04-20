#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0.00;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (1.0 / i);
    }
    printf("Sum of the Harmonic series is %.2f", sum);
    return 0;
}