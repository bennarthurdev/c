#include <stdio.h>
int main(int argc, char const *argv[])
{
    //declare statements
    int num = 0 , i , array[4];
    //reading
    printf("Enter a num: ");
    scanf("%d" , &num);
    //loop
    for (i = 0; i <= 4; i++) 
    {
        array[i] = num;
        printf("Array element at index %d : %d\n", i, array[i]);
    }
    return 0;
}
