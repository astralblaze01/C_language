// 15장 20p
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 5;

    char *name = (char *)malloc(sizeof(char) * size);
    fgets(name, size, stdin);
    
    gets(name);
    // gets_s();
    printf("%s", name);
    return 0;
}