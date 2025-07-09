// 14장 7p
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 1;
    scanf("%d", &size);
    int *p = (int *)malloc(sizeof(int) * size);
    if (!p)
    {
        printf("memory allocation is fail");
        exit(1);
    }

    for (int i = 0; i < size; i++)
    {
        *(p + i) = (i + 1) * 10;
    }

    for (int i = 0; i < size; i++)
    {
        printf("p[%d] : %d\n", i, *(p + i));
    }
    return 0;
}