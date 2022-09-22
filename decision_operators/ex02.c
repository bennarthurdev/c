#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero:");
    scanf("%d", &num);
    if (num>0) printf("Maior que zero!");
    else if (num<0) printf("Menor que zero!");
    else printf("Igual a zero!");
   
   return 0;
}
