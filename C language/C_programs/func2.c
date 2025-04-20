// write two  functions to print hello and second one to print goodbye.
#include<stdio.h>
void hello();
void goodbye();
int main()
{
    hello();
    goodbye();
    return 0;
}
void hello(){printf("Hello\n");}
void goodbye(){printf("Good bye");}