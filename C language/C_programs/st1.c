//write a structure in c to store two vectors and  make a function to return its sum.
#include <stdio.h>
struct vector{
    int x;
    int y;
};
int calcsum(struct  vector v1 , struct  vector v2, struct vector sum);
int main(){
    struct vector v1 ={ 5,4};
    struct vector v2 ={ 7,9};
    struct vector sum={0};

     calcsum( v1 ,v2, sum);
    

return 0;
}
int calcsum(struct  vector v1 , struct  vector v2, struct vector sum){
 sum.x = v1.x + v2.x;
 sum.y = v2.x + v2.y;

printf(" The resultant vector is (%d,%d)",sum.x,sum.y);

}