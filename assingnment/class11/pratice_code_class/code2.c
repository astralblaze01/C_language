// 17장 9p
#include <stdio.h>
#include <stdlib.h>

void printArr(int **arr, int a);

int main()
{
    int **arr = (int **)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * 3);
    }
    printArr(arr, 3);
    return 0;
}

void printArr(int **arr, int a)
{
    printf("1");
}