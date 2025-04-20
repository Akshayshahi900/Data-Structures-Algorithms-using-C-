#include <stdio.h>





int main() 
{
    int a, b, i;
    scanf("%d\n%d", &a, &b);
  	   i=a; 
      
          for(i=a;i<10 && i<b;i++){
          switch(i){
              case 1: printf("one\n");
              break;
              case 2: printf("two\n");
              break;
              case 3: printf("three\n");
              break;
              case 4: printf("four\n");
              break;
              case 5: printf("five\n");
              break;
              case 6: printf("six\n");
              break;
              case 7: printf("seven\n");
              break;
              case 8: printf("eight\n");
              break;
              
              
              default: printf("nine\n");
          }}
    if(b>9){      
    // checking the conditon of even and odd for a
    
    if(a%2==0){printf("even\n");}
    else{printf("odd\n");}
    //checking the condition of even odd for b
    if(b%2==0){printf("even\n");}
    else{printf("odd");}}
      

    return 0;
}

