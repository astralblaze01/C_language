// 15장 24p
#include <stdio.h>
#include <string.h>

int main()
{
    char line[100];

    while (fgets(line, 8, stdin) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        printf("%s ", line);
    }

    return 0;
}