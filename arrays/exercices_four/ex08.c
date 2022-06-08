#include <stdio.h>
int main(int argc, char const *argv[])
{
    //reading A
    int i , array_A[10]; //length = 10
    for (i = 0; i <= 9; i++)
    {
        printf("Enter a num: ");
        scanf("%d" , &array_A[i]);

    }
    //scan to remove
    int j;
    printf("Escolha um elemento para eliminar do Array: {");
    for (j = 0; j <= 9; j++)
    { 
        if (j == 9)
        {
            printf("%d", array_A[j]);
        }
        else{
            printf("%d , " , array_A[j]);
        }   
    }
    printf("}");
    int num = 0, pos = 0;
    scanf("%d" , &num);
    
    for (j = 0; j <= 9; j++)
    {
        if (array_A[j] == num)
        {
            pos = j;
        }
    }
    
    
    

    
    return 0;
    }
