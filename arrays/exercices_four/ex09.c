#include <stdio.h>
int main(int argc, char const *argv[])
{
    //reading A
    int i , num = 0 , count = 0, j , array_A[20]; 

    for (i = 1; i <= 20; i++)
    {
        printf("Enter a num: ");
        scanf("%d" , &num);

        if(num >= 10 && num <=100)
        {
            array_A[i] = num;

            for (j = 1; j <= i; j++)
            {
               if (array_A[j] != array_A[i])
               {
                   printf("%d\n" , array_A[j+1]);
               }
            }
        }
        else{
            printf("Valor invalido digitado, digite um numero entre 10 e 100");
            break;
        }
        
    }
    
    
    

    
    return 0;
    }
