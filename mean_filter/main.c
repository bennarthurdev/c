#include <stdio.h>
#include <stdlib.h>


float * getArrayElements(int size , float arr[]){
    int x , y;
    for(x = 0 ; x < size ; x++){
        scanf("%f" , &arr[x]);
    }
    return arr;
}

float * calculateAverage(int order , int size , float arr2[]){
    int j = order, i; float sum[order] , avg[order];
    
        //avg[i] = arr2[j] + arr2[j+1] + arr2[order+2] ... + [order+order]/order; i++
        for (i = order; i < (size/order) ; i++)
        {
            for (j = order; (order + order); j++)
            {
                sum[i] += arr2[j];
            }
            avg[i] = sum[i]/order;
        }
   
    return avg;
}

int main()
{
   int size = 15 , 
   order ,
   i //Change size value to manipulate the size of array
   ;
   float array[size];
   //get data from array
   getArrayElements(size , array);
   
   //get a order
   printf("Type a order: ");
   scanf("%d", &order);
  
   //CalculateAvarege
   float *avarage;
   avarage = calculateAverage(order , size , array);
   //PrintAvarage
   for (int i = 0; i <= size/order; i++)
   {
    printf("Media [%d] : %f" , i , *avarage);
   }

   return 0;
}


