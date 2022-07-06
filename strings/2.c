#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char **name;
    int numCharacters;

    printf("Type the size of string:");
    scanf("%d" , &numCharacters);

    name = malloc(numCharacters * sizeof(char *));

    printf("Enter a name: ");
    scanf("%s", &name);

    for (int i = 0; i < 10 ; i+=2)
    {
        if(name[i] == '\0'){break;} // remove null element
        printf("%c" , name[i]);
    }
    
    return 0;
}
