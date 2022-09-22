#include <stdio.h>
#include <stdlib.h>

//read array function
float * getArrayElements(int size , float arr[])
{
  /*Read an array and return
   <float>   
   */
    int x;
    for(x = 0 ; x < size ; x++){
        printf("Element [%d]: " , x);
        scanf("%f" , &arr[x]);
    }
    return arr;
}

float totalValueOfInterval(int firstIndexReference ,int lastIndexReference , float arr[]){
  int y; float sum;
  for(y=firstIndexReference;y<=lastIndexReference;y++){
    sum += arr[y];
  }
  return sum;
}
float avarageOfSum(float sumInterval, int intervalSize){
  /*receive a sum and dived by order reference and return the avarage in this interval*/
  float avarage;
  avarage = sumInterval/intervalSize;
  return avarage;
}
//debbuging functions
void printArray(int sizeArray , float arr[]){
  for(int i = 0 ; i < sizeArray; i++){
    printf("Array[%d] : %.2f\n " , i , arr[i]);
  }
}
main(){
  //define inicial array
  int size, order , interval_size;//size of user array can be defined by own user
  printf("Inicial Array Size: <integer>: \n");
  scanf("%d", &size);
  //scan incial array elements
  float userArray[size];
  getArrayElements(size , userArray);
  //scan order
  printf("Please choose a order \n:");
  scanf("%d", &order);
  //display array for debbuging
 

  interval_size = (size/order);

  //now we need a loop to generate a array of avarages
  float avg[order], sum[order];//this array contain the avgs based on order chosed by user
  int first = 0 , last = first + interval_size;
  for(int i = 0; i < order ; i++){
    sum[i] += totalValueOfInterval(first , last , userArray);
    avg[i] = avarageOfSum(sum[i] , order);
    first += interval_size;
    last += interval_size; 
  }
    printArray(2, avg);

  return 0;
}
