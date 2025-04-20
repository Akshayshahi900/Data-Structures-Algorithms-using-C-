#include <stdio.h>
#include <math.h>
#define pi 3.14
float area(int x1, int x2, int y1, int y2)
{
    float dsqr = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    float d = pow(dsqr, 0.5);
    float r = d / 2;
    float area = pi * r * r;
    return area;
}
int main()
{
    int x1, x2, y1, y2;
    printf("Enter the value of first coordintes:\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the value of second coordintes:\n");
    scanf("%d%d", &x2, &y2);
    printf("%.2f is the area", area(x1, x2, y1, y2));
    return 0;
}