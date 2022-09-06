#include <stdio.h>

int main(){
    float n1 , n2 , n3 , mean;

    printf("Type the notes:");
    scanf("%f %f %f" , &n1 , &n2 , &n3);

    mean = (n1+n2+n3)/3;

    if (mean >= 7) {
        puts("approved!");
    }
    else if(mean >=4 ){
        puts("Retake!");
    }else{
        puts("Disapproved!");
    }

    return 0;
}
