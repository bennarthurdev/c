#include <stdio.h>
int main(int argc, char const *argv[])
{
    //declare statements
    int num = 0 , i , array[9];
    //reading
    printf("Enter a num: ");
    scanf("%d" , &num);
    //loop
    for (i = 0; i <= 9; i++) 
    {
        array[i] = num* (i+1);
        printf("Array element at index %d : %d\n", i, array[i]);
    }
    return 0;
}