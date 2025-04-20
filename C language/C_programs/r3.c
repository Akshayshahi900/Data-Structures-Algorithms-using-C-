/*write a recursive function to convert celcius for farheinheit*/
#include<stdio.h>
float converttemp(float celsius);

int main(){
    
    printf(" The temperature in farheight is %.2f", converttemp(0));
    return 0;
}
float converttemp(float celcius){
    float far = celcius*(9.0/5.0) +32;
    return far;
}