#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input_strings(FILE *f, char **p, int n);
void print_strings(char **p, int n);

int main()
{

    FILE *file = fopen("f2.txt", "r");
    if (!file)
    {
        printf("file is not open");
        exit(1);
    }

    int size;
    fscanf(file, "%d", &size);

    char **p = (char **)malloc(sizeof(char *) * size);
    if (!p)
    {
        printf("memory allocation is fail");
        exit(1);
    }

    input_strings(file, p, size);
    print_strings(p, size);

    for (int i = 0; i < 20; i++)
    {
        free(p[i]);
    }
    free(p);
    fclose(file);
    return 0;
}

void input_strings(FILE *f, char **p, int n)
{
    char temp[20];
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%s", temp);
        p[i] = (char *)malloc(sizeof(char) * (strlen(temp) + 1));
        strcpy(p[i], temp);
    }
    return;
}

void print_strings(char **p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s ", p[i]);
    }
    return;
}