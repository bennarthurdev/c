#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j,k,
    array_1[6] , //corresponds to a vector that contains the responses of the "mega-sena"
    array_2[10], //corresponds to a vector containing the bet responses
    score = 0; //gambler hits
    for (i = 0; i <= 5; i++)
    {
       printf("%d Digito da mega-sena : " , (i+1));
       scanf("%d", &array_1[i]);
    }
    for (j = 0; j <= 9; j++)
    {
        printf("%d Digito da aposta : " , (j+1));
        scanf("%d" , &array_2[j]);
        for (k = 0; k < 6; k++)
        {
            if (array_2[j] == array_1[k])
            {
                score++;
            }
        }
    }
    printf("Acertos: %d " , score);
    return 0;
    }


