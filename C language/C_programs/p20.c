#include<stdio.h>
int main()
{
    int x,i;
    do{printf("Enter the number");
    scanf("%d",&x);
    if(x%2 !=0){break;
     }
    }while(x%2==0);
    printf("You entered an odd number");
    return 0;
}