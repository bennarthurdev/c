#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[10];
    scanf("%s", &name);
    for (int i = 0; i < 10 ; i+=2)
    {
        if(name[i] == '\0'){break;} // remove null element
        printf("%c" , name[i]);
    }
    
    return 0;
}
