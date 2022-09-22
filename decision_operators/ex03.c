#include <stdio.h> 

int main(){
    int num;
    printf("Digite um numero:");
    scanf("%d" , &num);
    num % 2 == 0 ? printf("Par!") : printf("Impar!");
}