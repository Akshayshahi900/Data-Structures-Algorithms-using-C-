#include<stdio.h>
 struct add{
    int houseno;
    int blockno;
    char city[100];
    char state[100];
 };
 void printadd(struct add adds);
 int main(){
    struct add adds[5];
    printf("Enter the house no:");
    scanf("%d",&adds[0].houseno);
    printf("Enter the blockno:");
    scanf("%d",&adds[0].blockno);
    printf("Enter the city:");
    scanf("%s",adds[0].city);
    printf("Enter the state:");
    scanf("%s",adds[0].state);

    printf("Enter the house no:");
    scanf("%d",&adds[1].houseno);
    printf("Enter the blockno:");
    scanf("%d",&adds[1].blockno);
    printf("Enter the city:");
    scanf("%s",adds[1].city);
    printf("Enter the state:");
    scanf("%s",adds[1].state);

    printf("Enter the house no:");
    scanf("%d",&adds[2].houseno);
    printf("Enter the blockno:");
    scanf("%d",&adds[2].blockno);
    printf("Enter the city:");
    scanf("%s",adds[2].city);
    printf("Enter the state:");
    scanf("%s",adds[2].state);

    printf("Enter the house no:");
    scanf("%d",&adds[3].houseno);
    printf("Enter the blockno:");
    scanf("%d",&adds[3].blockno);
    printf("Enter the city:");
    scanf("%s",adds[3].city);
    printf("Enter the state:");
    scanf("%s",adds[3].state);

    printf("Enter the house no:");
    scanf("%d",&adds[4].houseno);
    printf("Enter the blockno:");
    scanf("%d",&adds[4].blockno);
    printf("Enter the city:");
    scanf("%s",adds[4].city);
    printf("Enter the state:");
    scanf("%s",adds[4].state);
    //printing
    printadd(adds[0]);
    printf("\n");
    printadd(adds[1]);
    printf("\n");
    printadd(adds[2]);
    printf("\n");
    printadd(adds[3]);
    printf("\n");
    printadd(adds[4]);
 return 0;
 }
 void printadd(struct add adds){
    printf("Address is : %d , %d , %s , %s",adds.houseno,adds.blockno,adds.city,adds.state);

 }