#include <stdio.h>
#include <stdlib.h>

void scanFile(FILE *f, int *arr, int size);
int *squareArray(const int *arr, int size);
void printArray(int *arr, int size, char const *name);

int main()
{
    FILE *file = fopen("f4.txt", "r");
    if (!file)
    {
        fprintf(stderr, "file is not open");
        exit(1);
    }

    int size;
    fscanf(file, "%d", &size);

    int *arr1 = (int *)malloc(sizeof(int) * size);
    if (!arr1)
    {
        fprintf(stderr, "file is not open");
        exit(1);
    }

    scanFile(file, arr1, size);
    int *arr2 = squareArray(arr1, size);

    printArray(arr1, size, "arr1");
    printArray(arr2, size, "arr2");
    return 0;
}

void scanFile(FILE *f, int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        fscanf(f, "%d", &arr[i]);
    }
    return;
}

int *squareArray(const int *arr, int size)
{
    int *arr2 = (int *)malloc(sizeof(int) * size);
    if (!arr2)
    {
        fprintf(stderr, "memory allocation is fail");
        exit(1);
    }

    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i] * arr[i];
    }
    return arr2;
}

void printArray(int *arr, int size, char const *name)
{
    printf("%s: ", name);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");
    return;
}