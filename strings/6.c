/* Escreva um programa para ler uma frase do usuário. O programa deverá substituir o caractere ‘espaço em branco’ por ‘#’. Exiba a nova frase formada.*/
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
    if(str[i] == ' ' && i != 0) str[i] = '#' ;
    else continue;
  }

  for(int  j  = 0 ; j < lenghtOfString ; ++j){
    printf("%c" , str[j]);
  }
  
  return 0;
}