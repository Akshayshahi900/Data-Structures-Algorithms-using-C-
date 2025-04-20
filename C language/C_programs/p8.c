//rewriting p7.c using char variable
#include<stdio.h>
int main()
{ 
    char day; //m,t,w,T,f,s,S
    
    printf("enter the value of day(m,t,w,T,f,s,S) :");
    scanf("%s", &day);
    switch (day) {
        case 'm' : printf("Monday");
                break;      
        case 't' : printf("Tueday");
                break;
        case 'w': printf("Wednesday");
                break;
        case 'T' : printf("Thursday");
                break;
        case 'f' : printf("Friday");
                break;
        case 's' : printf("Saturday");
                break;
        case 'S' : printf("Sunday");
                break;
        default : printf("oohps !! Enter the correct value of day");

    }
    return 0;
}
