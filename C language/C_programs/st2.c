#include <stdio.h>
struct complex{
    int r;
    int i;
};
int calcsum(struct complex c1 , struct complex c2 , struct complex sum);
int main(){
    struct complex c1 ={ 5,4};
    struct complex c2 ={ 7,9};
    struct complex sum={0};

     calcsum( c1 ,c2, sum);
    

return 0;
}
int calcsum(struct complex c1 , struct complex c2 , struct complex sum){
 sum.r =c1.r + c2.r ;
 sum.i = c1.i +c2.i ;

printf(" The sum of complex no  is (%d+%di)",sum.r , sum.i);

}