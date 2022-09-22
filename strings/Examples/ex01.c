#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]){

    while(1){
    //read a sentence
    char string[50];
    //CLEAR BUFF
    fflush(stdin);

    //reading...
    printf("Enter sentence:[type 0 to end the program]: ");

    fgets(string , sizeof(string) , stdin);

    if (string[0] == '0')
    {
        break;
    }
    
    //count digits and letters
    int i, count_letters = 0 , count_digit = 0; 

    for (i = 0; string[i] != '\0'; i++)
    {

        //is digit? if <0-9> -> 1 , else -> 0
        if(isdigit(string[i])){ 
            count_digit++ ; }
        else{
        //is alpha?
        if(isalpha(string[i])){ 
            count_letters++;
            }//fim do if
        }//fim do else
    }//fim do for
    
    printf("Letters in message: %d \nDigits in message: %d \n" , count_letters , count_digit);
    
    }
    return 0;
}
