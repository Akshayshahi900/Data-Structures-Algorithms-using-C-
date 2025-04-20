#include<stdio.h>
int main(){
    int a[100][100],b[100][100],i,j,mul[100][100],r,c,k;
    printf("Enter the no of rows and columns");
    scanf("%d %d",&r ,&c);
    printf("Enter the values of first matrix");
    for(i=0;i<r;i++){
        for(j=0 ;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    } 
    printf("Enter the values of second matrix");
        for(i=0;i<r;i++){
        for(j=0 ;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //product
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){mul[i][j]=0;
            for(k=0;k<c;k++){
                
                mul[i][j] += a[i][k] * b[k][j];
            
            }
        }
    }
    
    // print
        for(i=0;i<r;i++){
        for(j=0 ;j<c;j++){
            printf("%d\t",mul[i][j]);
        }
    printf("\n");
    }
    return 0;
}