#include<stdio.h>
void add(int a , int b){
    
    printf("%d + %d = %d\n", a ,b , a+b);
}
void sub(int a , int b){
    
    printf("%d - %d = %d\n", a ,b , a-b);
}

int main(){
add(20,10);
sub(20,10);
return 0;
}