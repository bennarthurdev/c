#include <stdio.h>
int main(){
    //declare statments
    int arr[3][3];
    //reading
    for (int i = 0  ; i <= 2 ; i++) {
        for (int j = 0 ; j <= 2 ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    int i = 0;
    int j = 0;
    //output
     for (i = 0  ; i <= 2 ; i++) {
        for (j = 0 ; j <= 2 ; j++){
            if (j < 2){
                printf("%d - " , arr[i][j]);    
            }
            else{
                printf("%d \n" , arr[i][j]);
            }
            
        }
        
    }
}