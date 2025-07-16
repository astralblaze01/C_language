#include <stdio.h>
#include <stdlib.h>

void print(FILE *file, const char *fileName);
void checkFile(FILE *f, const char *fileName);

int main()
{
    FILE *files[2];

    const char *fileName1 = "f21.txt";
    const char *fileName2 = "f22.txt";

    files[0] = fopen(fileName1, "r");
    checkFile(files[0], fileName1);
    print(files[0], fileName1);
    fclose(files[0]);

    files[1] = fopen(fileName2, "r");
    checkFile(files[1], fileName2);
    print(files[1], fileName2);
    fclose(files[1]);
    return 0;
}

void checkFile(FILE *f, const char *fileName)
{
    if (!f)
    {
        fprintf(stderr, "%s", fileName);
        exit(1);
    }
    return;
}

void print(FILE *file, const char *fileName)
{
    char c;

    printf("%s:\n", fileName);
    while (fscanf(file, "%c", &c) != EOF)
    {
        printf("%c", c);
    }
    puts("");
    return;
}