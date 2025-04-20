#include<stdio.h>
int main(){
    int a[100][100],b[100][100],j,i,k,r,c,mul[100][100];
    printf("Enter the value of row and column:\n");
    scanf("%d %d ",&r, &c);
    printf("Enter the value of first matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
          scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the value of second matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
          scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
          mul[i][j] =0;
          {
            for(k=0;k<c;k++){
                mul[i][j] += a[i][k] * b[k][j];
            }
          }
        }
    }
    printf("reultant matrix:");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
          printf("%d\t",mul[i][j]);
        }
    }
return 0;
}