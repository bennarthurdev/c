#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    char arr[3][3] = {"a" , "b" , "c"};
    int i;
    float coeficiente[3], delta;
    for (i = 0; i < 3; i++)
    {
        printf("Digite o coeficiente %s: " , arr[i]);
        scanf("%f" , &coeficiente[i]);
    }
    delta = pow(coeficiente[1],2) - 4 * coeficiente[0] *coeficiente[2];  
    if (delta<0){
        printf("Sistema criticamente sub-amortecido! \nDelta = %f", delta);
    }
    else if (delta > 0){
        printf("Sistema sobre-amortecido!\nDelta = %f", delta);
    }
    else printf("Sistema criticamente amortecido!\nDelta = %f", delta);
    return 0;
}
