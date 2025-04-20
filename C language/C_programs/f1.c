#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("test.txt","r");
    fclose(ptr);
    return 0;

}