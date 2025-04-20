// make a 2d array to store the tables of 2 and 3;
#include<stdio.h>
void storestable(int arr[][10], int n, int m, int number);
int main(){
    int table[2][10];
    storestable( table , 0, 10, 2);
    storestable( table , 1, 10 , 3 );
     for(int i=0 ; i<10 ; i++){ 
        printf("%d \t", table [0][i]);
    
 } printf("\n\n");
 for(int i=0 ; i<10 ; i++){
    printf("%d \t", table [1][i]);
    
 }


    return 0;
}
void storestable(int arr[][10], int n, int m, int number){
 for(int i=0 ; i<m ; i++){
    arr[n][i]= number * (i+1);
 }
}