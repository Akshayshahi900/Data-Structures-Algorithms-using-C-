#include<stdio.h>
int main(){
    int *fptr, a, b, c, d;
    fptr = fopen("2.txt","w");
    printf("Enter the value of four integers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    fprintf("%d%d%d%d",a,b,c,d);
    fclose(fptr);
    return 0;
}