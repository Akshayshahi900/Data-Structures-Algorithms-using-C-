#include<stdio.H>
int main(){
    float price;
    printf("Enter the price of item in rupees:\n");
    scanf("%f",&price);
    printf("Price in paisa is : %.0f", (price *100));
    return 0;
}