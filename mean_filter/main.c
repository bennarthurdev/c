#include <stdio.h>

int main() {
    //define a ordem.
    int order = 0 , numElements = 0; float sum = 0;
  //Matrizes e vetores
    int vetor1[500][500] ; float average[500]; 
   /* Aloca espaço suficiente para armazenar uma matriz de 500x500 elementos, para evitar o uso de ponteiros
    * um segundo vetor para armazena a media dos intervalos definidos pela ordem
    * Os elementos digitados pelos usuarios deve ser inteiro
*/
  
    printf("Escolha uma ordem:");
    scanf("%d" , &order);
    //define a quantidade de elementos que o usuário desaja digitar
    printf("Quantidade de Elementos: ");
    scanf("%d" , &numElements);
    int columns = order;
    int rows = numElements / columns;
    
    //ler um vetor bidimensional
    for(int x = 0 ; x < rows ; x++){
      for (int y = 0 ; y < columns ; y++){
        printf("Digite o elemento[%d][%d] da matriz: " , x , y);
        scanf("%d", &vetor1[x][y]);
      }
    }
   

  //Calcula as medias dentro de cada vetor
  for(int i = 0; i < rows; i++){ //
    
      for (int j = 0; j < columns ; j++){
        sum += vetor1[i][j]; //recebe a soma de uma linha
      }//order representa a quantidade de colunas da matrix que foi abstraída
    
      average[i] = sum/order; //average line i 
      sum = 0;
  }/*
 A quantidade de linhas é a quantidade de elementos indicada pelo usario dividido por ordem
*/
  
  for(int k = 0; k < rows; k++){
    printf("%.2f\n" , average[k]);
  }
    return 0;
}
