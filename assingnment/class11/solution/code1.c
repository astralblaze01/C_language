#include <stdio.h>
#include <stdlib.h>

double *colmnAverages(int **array, int rows, int cols);
void printAver(double *aver, int size);
int **makeArr(int row, int cols);
void arrFree(int **arr, int row);
void scanFile(FILE *f, int **arr, int row, int cols);

int main()
{
    FILE *file = fopen("f1.txt", "r");
    if (!file)
    {
        fprintf(stderr, "file is not open");
        exit(1);
    }

    int row, cols;
    fscanf(file, "%d %d", &row, &cols);

    int **arr = makeArr(row, cols);
    scanFile(file, arr, row, cols);

    double *aver = colmnAverages(arr, row, cols);
    printAver(aver, cols);

    arrFree(arr, row);

    fclose(file);
    return 0;
}

void printAver(double *aver, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d: %0.2lf\n", i, aver[i]);
    }
    return;
}

int **makeArr(int row, int cols)
{
    int **arr = (int **)malloc(sizeof(int *) * row);
    for (int i = 0; i < row; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * cols);
        if (!arr[i])
        {
            fprintf(stderr, "memory allocation is fail");
            exit(1);
        }
    }
    return arr;
}

void arrFree(int **arr, int row)
{
    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return;
}

void scanFile(FILE *f, int **arr, int row, int cols)
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

double *colmnAverages(int **array, int rows, int cols)
{
    int sum = 0;
    double *result = (double *)malloc(sizeof(double) * cols);
    if (!result)
    {
        fprintf(stderr, "memory allocation is fail");
        exit(1);
    }

    for (int i = 0; i < cols; i++)
    {
        sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += array[j][i];
        }
        result[i] = sum / rows;
    }
    return result;
}