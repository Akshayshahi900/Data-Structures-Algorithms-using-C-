// wap with functions to print the percentage of maths , science and english
#include<stdio.h>
int percentage(int m, int s , int e);
int main(){
    int m,s,e;
    printf("Enter the marks of subject math , science , english");
    scanf("%d%d%d",&m ,&s,&e);
    printf("the percentage is %d",percentage(m ,s ,e ));
    return 0;

}
int percentage(int m, int s, int e){
    return ((( m + s + e)*100)/300);
}