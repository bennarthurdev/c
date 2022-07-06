#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[4];
    scanf("%s" , &str);
    for (int i = 0; i < 4; i++)
    {
        printf("c[%d] = %c\n" , i , str[i]);
    }
    
    return 0;
}
