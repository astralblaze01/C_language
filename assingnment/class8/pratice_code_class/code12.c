#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COLS 5

void printArr(int **arr);
void scanFile(FILE *f, int **arr);
void swap(int **arr1, int *arr2[COLS]);

int main()
{
    // 파일
    FILE *file = fopen("f4.txt", "r");
    if (!file)
    {
        printf("file is not open");
        exit(1);
    }

    int arr[ROW][COLS];
    int *p[COLS];

    scanFile(file, arr);
    swap(arr, p);
    printArr(p);

    fclose(file);
    return 0;
}

void swap(int **arr1, int *arr2[COLS])
{
    arr2[0] = arr1[1];
    arr2[1] = arr1[3];
    arr2[2] = arr1[0];
    arr2[3] = arr1[2];
    return;
}

void scanFile(FILE *f, int **arr)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            fscanf(f, "%d", &arr[i][j]);
        }
    }
    return;
}

void printArr(int **arr)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
    return;
}