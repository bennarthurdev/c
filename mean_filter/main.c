#include <stdio.h>

int main() {
  //tests
    //preenche um array
    static int vetor1[3][4] = {
    {1,2,3,4}, // 2.5
    {5,6,7,8}, // 6.5
    {9,10,11,12} };
  float sum = 0;
  
  float average[3];
  
  for(int i = 0; i < 3; i++){
      for (int j = 0; j < 4; j++){
        sum += vetor1[i][j];
      }
      
      average[i] = sum/4; //average line i 
      sum = 0;
  }
  
  for(int k = 0; k < 3; k++){
    printf("%.2f\n" , average[k]);
  }
    return 0;
}
