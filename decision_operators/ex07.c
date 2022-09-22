#include <stdio.h>
int main(int argc, char const *argv[])
{
    int minutos_1 , segundos_1 , minutos_2 , segundos_2 , tempo_1 , tempo_2;
    printf("Digite o tempo do 1 piloto: \nminutos\nsegundos\n");
    scanf("%d%d",&minutos_1,&segundos_1);
    printf("Digite o tempo do 2 piloto:\nminutos\nsegundos\n");
    scanf("%d%d",&minutos_2,&segundos_2);
    //tempo piloto 1
    tempo_1 = minutos_1*60 + segundos_1;
    //tempo piloto 2
    tempo_2 = minutos_2*60 + segundos_2;
    if (tempo_1 != tempo_2){
        tempo_1 > tempo_2 ? printf("O piloto 1 foi mais rapido") : printf("O piloto 2 foi mais rapido");
    }
    else{
        printf("Empate!");
    }
    return 0;
}
