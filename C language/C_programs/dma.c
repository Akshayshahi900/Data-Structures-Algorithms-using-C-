#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr; int n,r;
    // ptr =(int*) calloc(5,sizeof(int));
    ptr =(int*)calloc(n,sizeof(int));
    printf("enter the value n");
   scanf("%d",&n);
       for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("enter the value of r");
    scanf("%d",&r);
    ptr =  (int*) realloc(ptr,r*sizeof(int));
    printf("new memory alloated ");
    
    for(int i=0 ;i<r;i++){
        printf("%d\n",ptr[i]);}
        free(ptr);
    return 0;

}