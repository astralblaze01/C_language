#include <stdio.h>
#include <stdlib.h>

int *buildArray(int *size);
int findMin(int *ary, int size);
void scanArr(FILE *f, int arr[], int size);
int main()
{
    FILE *file = fopen("f2.txt", "r");
    if (!file)
    {
        printf("file is not open");
        exit(1);
    }

    int size, min;
    fscanf(file, "%d", &size);

    int *arr = buildArray(&size);
    scanArr(file, arr, size);

    min = findMin(arr, size);
    printf("%d", min);

    free(arr);
    fclose(file);
    return 0;
}

void scanArr(FILE *f, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        fscanf(f, "%d", &arr[i]);
    }
    return;
}

int *buildArray(int *size)
{
    int temp = *size;
    int *array = (int *)malloc(sizeof(int) * temp);
    if (!array)
    {
        printf("arr1 memory allocation is fail");
        exit(1);
    }
    return array;
}

int findMin(int *ary, int size)
{
    int min = ary[0];
    for (int i = 1; i < size; i++)
    {
        if (min > ary[i])
        {
            min = ary[i];
        }
    }
    return min;
}