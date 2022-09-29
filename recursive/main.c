#include <stdio.h>

int powWithFor(int i , int expo){
    /*
    *receive an integer and your expoent
    *returns i**expo
    */
    for (int count = 0 ; count < expo-1 ; count ++){
        i = i * i;
    }
    printf("%d" , i);
}

int powRecursive(int i , int expo){
    i = i*i;
    expo  = expo - 1 ;
    if(expo > 1){
        powRecursive(i , expo);
    }
    else{
        printf("%d" , i);
    }
}

int main(){
    powRecursive(2,3);
}