/*
Ler um nome e imprimir o nome somente se a primeira letra do nome for “a” (maiúscula ou minúscula).
*/
#include <stdio.h>
#include <ctype.h>


int compBtwChars(char c1, char c2){
  if(c1 == c2) return 1;
  else return 0;
}
int main(){
  char name[100];
  char cComp = 'A';
  int comp;
  
  printf("Enter a name : ");
  scanf("%s" , name);
  comp = compBtwChars(toupper(name[0]) , cComp);
  if(comp == 1){
    printf("Return : %s\n" , name);
  }
  

  return 0;
}