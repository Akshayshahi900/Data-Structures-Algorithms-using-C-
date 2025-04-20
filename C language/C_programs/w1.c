// writea program to find number of digits in a program
#include<stdio.h>
int main()
{
int num, count=0;
printf("Enter the number\n");
scanf("%d",&num);
while(num!= 0){num/=10;
++count;}
printf("\n\nThe number of digits is %d",count);
return 0;

}

// output:
// let take a input 121.
// input number is greater than 0 so it enters the while loop.
// *num=num/10;
// num =121/10;
// which is equal to 12;
// and count is 1;
// now num is equal to 12 which is greater than 0 so 12/10 is the new value;
// which is equal to 1;
// and the count is now 2.
// again new num value is greater than 0 i.e is 1 so agin, num=1/10;
// which is now 0 and count is 3 so now it will not enter the loop bcaouse num is equal to 0 so loops ends
// and the value of count will be printed.
