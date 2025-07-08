#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("f1.txt", "r");
    if (!f)
    {
        printf("file is not open");
        exit(1);
    }

    char str[100];
    while (fscanf(f, "%s", str) != EOF)
    {
        printf("%s ", str);
    }
    fclose(f);

    return 0;
}