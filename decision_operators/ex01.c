#include <stdio.h> // stantard input-output module
int main(int argc, char const *argv[])
{
    //Variáveis 
    int num1, num2;
    //Leia dois numeros
   
    printf("Digite um inteiro:");
    scanf("%d", &num1);
    printf("Digite outro inteiro:");
    scanf("%d" , &num2);

    num1 > num2 ? printf("%d" , num1) : printf("%d" , num2);
    
    //Exibir o maior deles
    return 0;
}

