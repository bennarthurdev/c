#include <stdio.h>
int main(int argc, char const *argv[])
{
    char arr[3][25] = {"passagem", "hospedagem" , "alimentacao"};
    float  orcamento = 8000.00 , gastos[3] ,soma_gastos = 0;
    int i;  
    //leitura dos gastos
    for ( i = 0; i < 3; i++)
    {
        printf("Digite o gasto com %s: " , arr[i]);
        scanf("%f" , &gastos[i]);
        soma_gastos += gastos[i];
    }
    printf("Gasto total previsto: R$%.2f\n" , soma_gastos);
    soma_gastos <= orcamento ? printf("E possivel viajar!") : printf("Nao e possivel viajar!");
    return 0;
}
