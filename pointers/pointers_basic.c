#include <stdio.h>
int main(){
  int x = 5;
  int * xPtr = &x;
  printf("%d\n" , &x);//the adress of x
  printf ("%d\n"  , xPtr);//the "arrow" that points to x
  printf ("%d"  , *xPtr);// the value of the variable who Xptr pointer arrow to
  return 0;
}