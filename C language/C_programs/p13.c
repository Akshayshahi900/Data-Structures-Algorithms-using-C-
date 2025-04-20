// Wap to give grades to students 30-70 b , 70-90 a , 90+ a+.
#include<stdio.h>
int main ()
{
    int m;
    printf("Enter the marks of student");
    scanf("%d",&m);
    if(m>30 && m<=70){
        printf("You are pass");
        printf(" Grade:B");
    }
    else if (m<70 && m<90) {
        printf("Grade : A");}
    else{
        printf("Grade : A+");
    }
    return 0;

}