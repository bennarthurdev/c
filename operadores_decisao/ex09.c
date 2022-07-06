#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    char sinal[1];
    float reais[3] ;
    printf("Escolha uma operacao:\n");
    scanf("%c" , sinal);
    for(i=0;i<2;i++){
        printf("Digite um numero:");
        scanf("%f" , &reais[i]);
    }
    if(sinal == "+")
    {
        reais[2] = reais[0]+reais[1];
    } 
    else if(sinal =="-")
     {
         reais[2] = reais[0]-reais[1];
    }  
    else if (sinal == "*") 
    {
    reais[2] = reais[0]*reais[1];
    }
    else
    {
    reais[2]=reais[0]/reais[1];
    }
    printf("O resultado da operecao e:%f" , reais[2]);
    return 0;
}
