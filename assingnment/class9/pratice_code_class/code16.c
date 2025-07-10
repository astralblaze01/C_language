#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **make2DArr(int size);
char *make1DArr(int size);
void printArr(char **arr, int row);

int main()
{
    const char *temp_strs[] = {"Hello", "World", "Wolcome", "To", "C programming"};
    int rowSize = sizeof(temp_strs) / sizeof(temp_strs[0]);

    char **strs = make2DArr(rowSize);
    for (int i = 0; i < rowSize; i++)
    {
        strs[i] = make1DArr(strlen(temp_strs[i]) + 1);
        strcpy(strs[i], temp_strs[i]);
    }
    printArr(strs, rowSize);
}

void printArr(char **arr, int row)
{
    for (int i = 0; i < row; i++)
    {
        printf("%s\n", arr[i]);
    }
}

char *make1DArr(int size)
{
    char *arr = (char *)malloc(sizeof(char) * size);
    if(!arr)
    {
        fprintf(stderr, "memory allocation is fail");
        exit(1);
    }
    return arr;
}

char **make2DArr(int size)
{
    char **arr = (char **)malloc(sizeof(char) * size);
    if (!arr)
    {
        fprintf(stderr, "memory allocation is fail");
        exit(1);
    }
    return arr;
}
