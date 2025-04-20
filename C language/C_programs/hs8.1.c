#include<stdio.h>
#include<string.h>
int main(){
    char uppercase[100];
    char lowercase[100];
    int i=0;
    memset(uppercase , '\0', 100);
    fgets(lowercase ,100, stdin);

   // if we use two strings we have to use the memset function of c which is not studined till date
    for (i=0 ;lowercase[i] != '\0'; i++){
        if(lowercase[i] >='a' && lowercase[i] <= 'z')
        uppercase[i] = lowercase[i] - 32;
        else{ uppercase[i] = lowercase[i];}
    }
    printf("The upper case is :");
    puts(uppercase);
    // strupr(lowercase);
    // puts(lowercase);
    return 0;


}
