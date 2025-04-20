// wap in c to print all english characters in c using pointers
#include<stdio.h>
void chracter(char *c);
int main(){
   char x;
   chracter(&x);
   return 0;

}
void chracter(char *c){
    for(*c = 'A' ; *c <= 'Z' ;(*c)++){
         printf("%c\n",*c);
    }
     for(*c = 'a' ; *c <= 'z' ;(*c)++){
         printf("%c\n",*c);
    }

}