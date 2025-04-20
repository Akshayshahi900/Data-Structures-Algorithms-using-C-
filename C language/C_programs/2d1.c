#include<stdio.h>
int main(){
    int a[100][100],b[100][100], mul[100][100], i, j , r,c ,k, sum[100][100];
    printf("Enter the values of row and column");
    scanf("%d%d", &r, &c);
    printf("Enter the values of first matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the value of second matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of the both matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j] = a[i][j] + b[i][j];

        }    
    }
    // printing the sum
     printf("\n Sum is : \n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
     }
     
     printf("Multiplication of both matrix");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            mul[i][j] =0;
            for(k=0;k<c;k++){
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
     }
     
     //printing the product
     printf("\n Multiply is : \n");

     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
     }

return 0;
}