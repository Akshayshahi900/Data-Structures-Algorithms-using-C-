#include <stdio.h>
#include <math.h>
int area(int a, int b, int c)
{
    int s = (a + b + c) / 2;
    int area = pow(s * s * (s - a) * (s - b) * (s - c), 0.5);
    return area;
}
int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);

    printf("%d", area(x, y, z));
    return 0;
}