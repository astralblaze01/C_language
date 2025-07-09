#include <stdio.h>
#include <stdlib.h>

double *makeArr(int size);
void scanArr(FILE *f, double arr[], int size);
void add_array(double source1[], double source2[], double target[], int size);
void printArr(double *target, int size);

int main()
{
    FILE *file = fopen("f1.txt", "r");
    if (!file)
    {
        printf("file is not open");
        exit(1);
    }

    int size;
    fscanf(file, "%d", &size);

    double *arr1, *arr2, *result;
    arr1 = makeArr(size);
    arr2 = makeArr(size);
    result = makeArr(size);

    scanArr(file, arr1, size);
    scanArr(file, arr2, size);

    add_array(arr1, arr2, result, size);
    printArr(result, size);

    free(arr1);
    free(arr2);
    free(result);

    fclose(file);
    return 0;
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

void add_array(double source1[], double source2[], double target[], int size)
{
    for (int i = 0; i < size; i++)
    {
        target[i] = source1[i] + source2[i];
    }
    return;
}

void printArr(double *target, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.2lf ", target[i]);
    }
    return;
}