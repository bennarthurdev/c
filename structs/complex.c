//start program
#include <stdio.h>


//Declaring s.t.r.u.c.t


typedef struct {
  double real;
  double imaginary;
}ComplexNum;



int main(){
    
    //Num1
    ComplexNum Num1 = {.real = 210 , .imaginary = 10.5};//short way 
    
    //Num2
    ComplexNum Num2 = {.real = 190 , .imaginary = 7.5};
    
    //Num3
    ComplexNum Num3 = {.real = 19 , .imaginary = 1.5};
    
    //Difference
    
    ComplexNum Difference;
    
    Difference.real = Num1.real - Num2.real - Num3.real;
    Difference.imaginary = Num1.imaginary - Num2.imaginary - Num3.imaginary;
    
    //Show result
    printf("Complex Number is : %.2lf + %.2lfi" , Difference.imaginary);
 
    
    
   return 0;

}