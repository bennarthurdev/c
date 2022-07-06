#include <stdio.h>

int printAlphabet(int argc, char const *argv[])
{
    char c;

    for (c = 'a'; c <= 'z' ; ++c)
    {
       putchar(c);
    }

    return 0;
}
void infiniteLoopGetandPutOn(){
    while (1)
    {
        putchar(getchar());
    }
    
}

int main(){
    infiniteLoopGetandPutOn();
    return 0;
}
