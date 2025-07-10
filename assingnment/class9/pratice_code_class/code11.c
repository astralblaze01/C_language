// 15장 42p
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "C and C++\t languages are best!";
    char *delimiter = " !\t";

    char *ptoken = strtok(str, delimiter);
    while (ptoken != NULL)
    {
        printf("%s\n", ptoken);
        ptoken = strtok(NULL, delimiter);
    }

    return 0;
}