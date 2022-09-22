#include <stdio.h>
int main(int argc, char const *argv[])
{
    int lados[3] , i;
    //Leitura dos lados do triangulo
    for (i = 0; i < 3; i++)
    {
       printf("Digite os lados do triangulo:");
       scanf("%d" , &lados[i]);
    }
    printf("l1:%d \nl2:%d \nl3:%d\n", lados[0], lados[1], lados[2]);
    if ((lados[0] < (lados[1] + lados[2])) && (lados[1] < (lados[0] +lados[2])) && (lados[2] < (lados[1] +lados[0])) ){
        
        if(lados[0] == lados[1] && lados[1] == lados[2] && lados[0] == lados[2]){
            printf("Equilatero");
        }

        else if(lados[0] == lados[1] || lados[1] == lados[2] || lados[0] == lados[2]){
            printf("Isosceles!");
        }

        else {
            printf("Escaleno");
        }
    
    }
    else printf("Nao e um triangulo valido!");
    
    return 0;
}
