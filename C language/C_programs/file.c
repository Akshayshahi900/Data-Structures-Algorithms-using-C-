#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    FILE*P;
    P=fopen("demo.txt","r");
    fscanf(P,"%d",&i);
    printf("value of i=%d",i);
    fclose(P);
    return 0;
}