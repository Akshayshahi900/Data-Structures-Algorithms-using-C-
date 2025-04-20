#include<stdio.h>
int main(){
    FILE *book;
    book = fopen("b.txt", "w");
    fprintf(book,"akshay");
    fprintf(book,"\n shahi");
    


    fclose(book);
}