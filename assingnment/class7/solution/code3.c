#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *f1 = fopen("f3.txt", "r");
    if (!f1)
    {
        printf("in file is not open");
        exit(1);
    }
    FILE *f2 = fopen("f3out.txt", "w");
    if (!f2)
    {
        printf("out file is not open");
        exit(1);
    }

    // char ch;
    int ch, sum = 0;

    // getc 찾아보기
    while ((ch = getc(f1)) != EOF)
    {
        if (isdigit(ch))
        {
            putc(ch, f2);
            sum += ch - '0';
        }
    }
    printf("%d", sum);

    fclose(f1);
    fclose(f2);

    return 0;
}