
#include <stdio.h>

int main()
{
    int * yPtr , y ; 
    
    yPtr = &y;
    
    y = 2;
    
    *yPtr = 3; // Ponteiro desreferenciado é um lvalue
    printf("\n %d" , y);

    return 0;
}
