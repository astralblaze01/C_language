// 15장 7p
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *java = "java";
    char test[5] = "test";
    test[0] = 'k';
    // java[1] = 'A';
    // printf("%c", java[1]);
    printf("%c", test[0]);
    return 0;
}