#include <stdio.h>
int main(int argc, char const *argv[])
{
    //declare statements
    int  i , j  , k , acimed = 0 , named = 0 , abamed = 0;
    float sum = 0 , med = 0 , notas[20] ; //real vectors 
    //scan vectors a and b
    for (i = 0; i < 20; i++)
    {
        printf("Digite a nota do %d aluno : " , i+1);
        scanf("%f" , &notas[i]);   
    }
   
    for (j = 0; j <= 20; j++)
    {
        sum += notas[j];
    }
    med = sum/20;
    for (k = 0; k <= 20; k++)
    {
        if (notas[k] > med)
        {
            acimed ++;
        }
        if (notas[k] < med)
        {
            abamed ++;
        }
        if (notas[k] == med)
        {
            named ++;
        }
    }
    printf("Media da Turma: %.2f\n" , med);
    printf("Quantidade de alunos acima da media da turma: %d\n", acimed);
    printf("Quantidade de alunos na media da turma: %d\n" , named);
    printf("Quantidade de alunos abaixo da media da turma: %d\n" , abamed);
    
    return 0;
}