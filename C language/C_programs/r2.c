#include<stdio.h>
void recurtion(int count);
int main()
{
    recurtion(5);
    return 0;
}
void recurtion(int count){
if(count==0)
{
    return;
}
printf("hi\n");
recurtion(count--);}