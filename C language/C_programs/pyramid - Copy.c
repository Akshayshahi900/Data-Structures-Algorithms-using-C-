#include<stdio.h>
int main(){
    int i,j,rows,space;
    printf("ENter the number");
    scanf("%d",&rows);

    for (i=1;i<=rows;++i)
    {
        for(space=1;space<=rows-i;++space)
        {printf(" ");}
        
    for(j=1;j<=2*i-1;++j){
        printf("*");
    }
    printf("\n");}
    return 0;
}