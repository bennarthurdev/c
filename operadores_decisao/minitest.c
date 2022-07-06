#include <stdio.h> 
#include <stdbool.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[4];
    bool isolamento = false , PS = false , exame, exame_positivo = false; //bool var control
    int IPS ;
    printf("Digite a quantidade de dias transcorridos desde os primeiros sintomas:");
    scanf("%d" ,&IPS);
    //Analise IPS | Bloco 01
    if (IPS >= 0 && IPS <=4) isolamento = true;
    //Analise PS | BLOCO 02
    else{ 
        //Leitura PS
        printf("Ha presenca de sintomas?R:[Sim/Nao]");
        scanf("%s", &str);
       
        if (strcmp(str , "Sim") == 0) {
            printf("Deve permanecer isolado!");
            return 0;
        }
        if ( strcmp(str , "Sim") != 0 ) {
          if(IPS > 4 && IPS <= 7){ //caso o IPS seja menor que 7, o usuário deverá ser questionado se realizou um exame que deu negativo.
                printf("Realizou um exame recente que tenha dado negativo? R:[Sim/Nao]");
                scanf("%s" , &str);
                if (strcmp(str , "Sim") == 0){
                    printf("Nao permanece isolado!");
                }
                else{
                   printf("Permaneca isolado!"); 
                }
                return 0;
            }

            else if(IPS>7){ //Se o IPS for maior que 7, ele deve ser questionado se realizou exame no 7o dia com resultado positivo
                printf("Realizou exame no 7o dia com resultado positivo?");
                scanf("%s" , &str);
                if (strcmp(str , "Sim") == 0){
                    printf("Permanece isolado!");
                }
                else{
                    printf("Nao permence isolado!");
                }
                return 0;
            }
        }   
    }
    
  
}
