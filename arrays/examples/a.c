#include <stdio.h>
#define SIZE 20
int main(){
     //Declaring array
    int arr[SIZE] = {0};
    int i , sum;//the sum of integers will result in integers

    //Initialize array with first 20 even numbers with a for loop
    for(i = 0 ; i <= SIZE-1 ; i++){
        arr[i] = arr[i] + 2 * i;
        if (i < 19){
            printf("%d + " , arr[i]);
        }
        else{
            printf("%d " , arr[i]);
        }
    }
    
    //Calculate the sum of the array elements
    sum = 0 ;
    for(i = 0 ; i <= SIZE-1 ; i++){
        sum += arr[i];
        
    }
    //Display the value of the variable "sum
    printf("The sum of the first 20 even elements is equal to  = %d" , sum);
    return 0;
}