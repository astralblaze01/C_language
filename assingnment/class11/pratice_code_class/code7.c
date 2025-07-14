#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b);

int main()
{
    int num[] = {5, 3, 4, 1, 2};

    int size = sizeof(num) / sizeof(num[0]);

    qsort(num, size, sizeof(int), cmp);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}