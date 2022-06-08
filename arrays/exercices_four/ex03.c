#include <stdio.h>
int main(int argc, char const *argv[])
{
    //declare statements
    int  i , j  , k;
    float  a[20] , b[20] , c[20]; //real vectors 
    //scan vectors a and b
    for (i = 0; i <= 20; i++)
    {
        printf("Type element a[%d] : " , i);
        scanf("%f" , &a[i]);   
    }
    for (j = 0; j <= 20 ; j++)
    {
        printf("Type element b[%d] : " , j);
        scanf("%f" , &b[j]);   
    }

    //sum a + b and print vector c
    for (k = 0; k <= 20 ; k++)
    {
       c[k] = a[k] + b[k];
       printf("a[%d] + b[%d] = %f\n" , k , k , c[k]);
    }
    
    return 0;
}