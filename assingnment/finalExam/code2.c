#include <stdio.h>
#include <stdlib.h>

int *makeD1Arr(int cols);
int **makeD2Arr(int row);
int **scanFile(FILE *file, int row);
int sumAry1D(int *ary, int size);
void deleteArr(int **arr, int row);

int main()
{
    FILE *file = fopen("f2.txt", "r");
    if (!file)
    {
        fprintf(stderr, "file f11 is not open");
        exit(1);
    }

    int row;
    fscanf(file, "%d", &row);

    int **arr = scanFile(file, row);
    int totalSum = 0;
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        sum = sumAry1D(arr[i], arr[i][0]);
        totalSum += sum;
        printf("Row %d sum : %d\n", i, sum);
    }

    printf("\nTotal sum: %d", totalSum);

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

int sumAry1D(int *ary, int size)
{
    int sum = 0;
    for (int i = 1; i < size + 1; i++)
    {
        sum += ary[i];
    }
    return sum;
}

int **scanFile(FILE *file, int row)
{
    int cols;
    int **arr = makeD2Arr(row);

    for (int i = 0; i < row; i++)
    {
        fscanf(file, "%d", &cols);
        arr[i] = makeD1Arr(cols + 1);

        arr[i][0] = cols;

        for (int j = 1; j < cols + 1; j++)
        {
            fscanf(file, "%d", &arr[i][j]);
        }
    }
    return arr;
}

int **makeD2Arr(int row)
{
    int **arr = (int **)malloc(sizeof(int *) * row);
    if (!arr)
    {
        fprintf(stderr, "memory allocation is fail");
        exit(1);
    }
    return arr;
}

int *makeD1Arr(int cols)
{
    int *arr = (int *)malloc(sizeof(int) * cols);
    if (!arr)
    {
        fprintf(stderr, "memory allocation is fail");
        exit(1);
    }
    return arr;
}
