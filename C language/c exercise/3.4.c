#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of lenght and breadth of rectangle:\n");
    scanf("%d%d",&x,&y);
    printf("Area is %d\n", x*y);
    printf("Permeter  is %d", 2*(x+y));
}