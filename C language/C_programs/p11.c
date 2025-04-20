// WAP to print pass and grades of student.
#include<stdio.h>
int main()
{   int m;
    printf("Enter the marks: ");
    scanf("%d",&m);
    
   if(m>30){
    printf("PASS\n");
    if(m>=60 && m<=90){ printf("Grade A");}
    else if ( m>90 && m<=100);}
   else {
    printf("Fail");
   } 
return 0;
}