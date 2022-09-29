#include <stdio.h> 

int main(){
    int matrix[2][1] = {
        {0},
        {1}
    };
    for (int i = 0 ; i <= 1 ; i++){
        for (int j = 0 ; j <= 0; j++){
            printf("%d " , matrix[i][j]);
        };
        printf("\n");
    }

    return 0 ;
}
