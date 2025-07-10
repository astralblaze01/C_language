// 11장 예제 14 page
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5] = {10, 20, 30, 40, 50};
    FILE *f = fopen("out.txt", "w");
    if (!f)
    {
        printf("file is not open");
        exit(1);
    }

    for (int i = 0; i < 5; i++)
    {
        fprintf(f, "%d\n", n[i]);
    }

    if (fclose(f) != 0)
    {
        printf("file is not close");
        exit(1);
    }
}