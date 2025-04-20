// // write the program in c to convert all lower case letter to the upper case
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>


// int main(){
//     char lowercase[100];
//     char uppercase[100];
//     char ch ='A';
//     int size, i =0;
//     gets(lowercase);
// while(lowercase[i] != '\0'){
//     uppercase[i] = lowercase[i] -32;
//     i++;
// }
    
    
//     puts(uppercase);
//     return 0;
    

// }
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string:");
    fgets(str,100,stdin);
    strupr(str);
puts(str);
return 0;
}