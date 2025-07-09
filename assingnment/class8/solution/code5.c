#include <stdio.h>
#include <stdlib.h>

int sumAry1D(int ary[], int size);
int **makeArr(int row, int cols);
void scanArr(FILE *f, int **arr, int row, int cols);
void deleteArr(int **arr, int row);

int main()
{
    FILE *file = fopen("f5.txt", "r");
    if (!file)
    {
        printf("file is not open");
        exit(1);
    }

    int row, cols;
    fscanf(file, "%d %d", &row, &cols);

    int **arr = makeArr(row, cols);
    scanArr(file, arr, row, cols);

    int resultSum = 0;
    for (int i = 0; i < row; i++)
    {
        printf("row %d ", i);
        resultSum += sumAry1D(arr[i], cols);
    }
    printf("total %d", resultSum);

    deleteArr(arr, row);
    fclose(file);
    return 0;
}

void deleteArr(int **arr, int row)
{
    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return;
}

int sumAry1D(int ary[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += ary[i];
    }
    printf("sum = %d\n", sum);
    return sum;
}

int **makeArr(int row, int cols)
{
    int **array = (int **)malloc(sizeof(int *) * row);
    if (!array)
    {
        printf("memory allocation is fail");
        exit(1);
    }

    for (int i = 0; i < row; i++)
    {
        array[i] = (int *)malloc(sizeof(int) * cols);
        if (!array[i])
        {
            printf("memory allocation is fail");
            exit(1);
        }
    }

    return array;
}

void scanArr(FILE *f, int **arr, int row, int cols)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            fscanf(f, "%d", &arr[i][j]);
        }
    }
    return;
}