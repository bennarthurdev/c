//Leia hora inicial e hora final

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int hora_inicial, hora_final , duracao, duracao_maxima = 24, duracao_minima = 1 ;
    printf("Digite a hora inicial:\n");
    scanf("%d" , &hora_inicial);
    printf("Digite a hora final:\n");
    scanf("%d", &hora_final);
    if (hora_inicial > hora_final)
    {
        duracao = (duracao_maxima - hora_inicial) + hora_final;
        printf("O jogo durou %d horas" , duracao);
    }
    else if(hora_final - hora_inicial >= 1 && hora_final - hora_inicial <=24){
        duracao = hora_final - hora_inicial; 
        printf("O jogo durou %d horas" , duracao);
    }
    else{
        printf("Tempo de jogo invalido");
    }
    
    return 0;
}
