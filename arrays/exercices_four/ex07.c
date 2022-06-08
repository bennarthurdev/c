#include <stdio.h>
int main(int argc, char const *argv[])
{
    //reading A
    int i , array_A[10]; //length = 10
    for (i = 0; i <= 9; i++)
    {
        printf("Enter a num:");
        scanf("%d" , &array_A[i]);
    }
    //reading B
    int j, array_B[10]; //length = 10
    for (j = 0; j <= 9; j++)
    {
        printf("Enter a num:");
        scanf("%d" , &array_B[j]);
    }
    //C
    int k, posA = 0 , posB = 0 , array_C[20];
    for (k = 0; k <= 19 ; k++)
    {
        if (k % 2 == 0) //pares
        {
            array_C[k] == array_B[posB];
            posB++;            
        }
        else{ //impares
            array_C[k] == array_A[posA];
            posA++;
        }        
    }
    //print c
    int z;
    for(z = 0; z <= 19 ; z++){
        printf("%d " , array_C[z]);
    }

    

    
    return 0;
    }
