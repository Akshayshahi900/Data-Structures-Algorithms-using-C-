#include<stdio.h>
int main(){
    FILE *fptr;
     fptr = fopen("a.txt","w");
    fprintf(fptr,"I am JARVIS \n");
    fprintf(fptr,"Iron's Man A.I");
    



    fclose(fptr);
    return 0;
}