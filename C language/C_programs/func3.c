// write a fnction that print namaste for indian and bonjour for french
#include<stdio.h>
void french();
void indian();
int main()
{
char n;
printf("Enter Your Nationality\n");
scanf("%c",&n);
if(n=='i'){indian();}
else if(n=='f'){french();}
else {printf("You entered the wrong nationality");}
}
void french()
{
    printf("BONJOUR");
    
}
void indian()
{
    printf("NAMASTE");
}

