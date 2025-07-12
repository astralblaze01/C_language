#include <stdio.h>
#include <string.h>

int main()
{
    char strings[100];
    fgets(strings, sizeof(strings), stdin);

    char *standard = " ";
    char *words = strtok(strings, standard);

    while (words != NULL)
    {
        if (words[0] >= 97 && words[0] <= 122)
        {
            printf("%c", words[0] - 32);
        }
        else
        {
            printf("%c", words[0]);
        }
        words = strtok(NULL, standard);
    }

    return 0;
}