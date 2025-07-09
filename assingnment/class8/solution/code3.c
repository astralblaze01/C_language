// 소수점 첫째자리까지 출력
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b);
double *makeArr(int size);
void scanArr(FILE *f, double arr[], int size);
void printArr(double *arr, int size);

int main()
{
    FILE *file = fopen("f3.txt", "r");
    if (!file)
    {
        printf("file is not open");
        exit(1);
    }

    int size;
    fscanf(file, "%d", &size);

    double *arr = makeArr(size);
    scanArr(file, arr, size);

    qsort(arr, size, sizeof(double), cmp);
    printArr(arr, size);

    free(arr);
    fclose(file);
    return 0;
}

int cmp(const void *a, const void *b)
{
    if (*(double *)a < *(double *)b)
        return -1;
    else
        return *(double *)a != *(double *)b;
}

double *makeArr(int size)
{
    double *array = (double *)malloc(sizeof(double) * size);
    if (!array)
    {
        printf("arr1 memory allocation is fail");
        exit(1);
    }
    return array;
}

void scanArr(FILE *f, double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        fscanf(f, "%lf", &arr[i]);
    }
    return;
}

void printArr(double *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.1lf ", arr[i]);
    }
    return;
}