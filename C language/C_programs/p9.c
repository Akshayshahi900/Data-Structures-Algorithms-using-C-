// wap to nested switch
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    if(number>0){
        printf("The number is positive\n");
        if(number % 2 ==0){
            printf("The Number is Even");

        }else{
            printf("The number is odd\n");

        }
    }else if(number==0) {
        printf("The number is neither positive nor negative");
        }
        else{
            printf("The number is Negative");
        
        }
    return 0;

}