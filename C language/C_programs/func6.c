#include<stdio.h>
int rectangle(int a, int b);
int circle(int r);
int triangle(int base, int height);
int main(){
    int n,a,b,r,base,height;
    printf("Enter the figure for which you want to calculate  the area (1: rectangle, 2: circle, 3:traingle) :");
    scanf("%d",&n);
    switch(n){
        case 1: printf("A: \n, B:");
                scanf("%d%d",&a,&b);
                
                printf("The area of rectangle is %d", rectangle(a,b));
               break;
        case 2: printf("R:");
                scanf("%d",&r);
                printf("The area of circle is %d", circle(r));
                break;
    
        case 3: printf("Base:\n , Height:");
                scanf("%d%d",&base,&height);
                
                printf("The area of triangle is %d", triangle(base,height));
                break;
        default: printf("YOU entered the wrong figure");}
        return 0;
    
    
    
    }
int rectangle(int a, int b){
    return a*b;
    }
int circle(int r){
    return 3.14*r*r;
    } 
int triangle(int base, int height){
    return 0.5*base*height;
}


