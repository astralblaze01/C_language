#include <stdio.h>
#include <stdlib.h>

double averageArray(double sum, int n);
double sumArray(double *arr, int n);
int scanFile(FILE *f, double *arr, int size);

int main()
{
    FILE *file = fopen("f3.txt", "r");
    if (!file)
    {
        fprintf(stderr, "file is not open");
        exit(1);
    }

    int initSize = 5;
    double *arr = (double *)malloc(sizeof(double) * initSize);
    if (!arr)
    {
        fprintf(stderr, "memory allocation is fail");
        exit(1);
    }

    int num = scanFile(file, arr, initSize);
    double sum = sumArray(arr, num);

    printf("sum = %0.2lf ", sum);
    printf("average = %0.2lf", averageArray(sum, num));

    free(arr);

    return 0;
}

int scanFile(FILE *f, double *arr, int size)
{
    int i = 0;

    while (fscanf(f, "%lf", &arr[i]) != EOF)
    {
        if (++i >= size)
        {
            size *= 2;
            double *temp = (double *)realloc(arr, sizeof(double) * size);
            if (!temp)
            {
                fprintf(stderr, "memory allocation is fail");
                exit(1);
            }
            arr = temp;
        }
    }
    return i;
}

double sumArray(double *arr, int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double averageArray(double sum, int n)
{
    return sum / n;
}