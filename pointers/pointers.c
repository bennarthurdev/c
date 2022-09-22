#include <stdio.h>

int main(void){
    int a = 10; //declaring and inicializate a
    int *p = &a;//create a pointer to a

    printf("The value of a: %d \n" , a );//out:10
    printf("The value of p (is the location of a in memory): %d \n" , p );
    printf("The value of a by using *p %d\n" , *p);//out:10
    printf("The size of a int %d" , sizeof(int));
    return 0;
}
