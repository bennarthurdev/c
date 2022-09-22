/*
*
Escreva um programa em C para ler uma frase do usuário. Calcular e exibir a quantidade de palavras que formam essa frase. Por exemplo, se a frase informada pelo usuário foi: “Boa prova queridos alunos”, o programa deve exibir:  4;
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* str;//pointer to string
int MAX_SIZE = 256 , words = 1;

int main(){
  
  //read a sentence dynamically
  str = calloc(MAX_SIZE, sizeof(char));
  printf("Type a setence: [max: 256 characters] ");
  fgets(str, MAX_SIZE , stdin);
  int lenghtOfString = strlen(str); 
  str = realloc(str, lenghtOfString* sizeof(char));
  for(int i = 0 ; i < lenghtOfString; ++i){
    if(str[i] == ' ' && i != 0) {words += 1;}
    else continue;
  }
  printf("Words quantity is equal to : %d\n" , words);
  return 0;
}