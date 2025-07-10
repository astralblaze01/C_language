// 15장 31p
#include <stdio.h>
#include <string.h>

int cmp(char *s1, char *s2);


int main()
{
    char *a = "a";
    char *b = "ab";
    // printf("%d ", cmp(a, b));
    printf("%d", strcmp(a, b));

    return 0;
}

int cmp(char *s1, char *s2)
{
    
}