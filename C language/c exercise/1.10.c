#include <stdio.h> 
#include <math.h>
float area(int a, int b, int c)
{
    int s = a + b + c;
    float area =pow(s*(s-a)*(s-b)*(s-c), 0.5);
    return area;
}
int main(){
    int a,b,c;
    printf("Enter the value of sides:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("AREA : %f",area(a,b,c));
    return 0;
}