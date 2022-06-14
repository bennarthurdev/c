#include <stdio.h>
int main(int argc, char const *argv[])
{
    int lenght_array = 10;        
    int array[lenght_array];
    int i;
    //save array
    for (i = 0 ; i <= 10 ; i++){
        printf("Elemento[%d] : " , i);
        scanf("%d" , &array[i]); 
    }

    //read the input
    int order = 0;
    printf("Digite a ordem do filtro: ");
    scanf("%d" , &order);

    int j , k , sum[lenght_array/order];
    float mean[lenght_array/order];
    
    for (k = 0 ; k <= lenght_array/order ; k++){

        while (j <= order)
        {
            sum[k] += array[j];
            j++;
        }
    mean[k] = sum[k]/order;
    }

    //exibir array
    printf("Array: "); 
    int z;
    for (z = 0 ; z <= lenght_array/order; z++)
    {
        printf("%f ", mean[z]);
    }

}