#include <stdio.h>
int main(){
    int n,first =0, second =1,next,count =0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Fibbonanci series\n");
    while(count <n ){
        if(count <=1){
            next =count;
        }
        else{
            next = first + second;
            first  = second;
            second =next;

            }
    printf("%d \t",next);
    count++;
    }
    printf("\n");
    return 0;
}
