#include <stdio.h>
int main(int argc, char const *argv[])
{
    //declare statements
    int  i , j  , k;
    int a[20] ; //real vectors 
    //scan vectors a and b
    for (i = 0; i <= 9; i++)
    {
        printf("Type element a[%d] : " , i);
        scanf("%d" , &a[i]);   
    }
    
    printf("%s%13s%17s\n" , "Elemento" , "Valor" , "Histograma");
   
    for (j = 0; j <= 9; j++)
    {
        printf("%7d%13d" , j , a[j]);
        int actual_value = a[j];
        printf("            ");
        for (k = 0; k < actual_value ; k++)
        {
            printf("*"); 
        }
        printf("\n");
    }

    
    return 0;
}