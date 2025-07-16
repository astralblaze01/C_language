#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COLS 4

void scanFile(FILE *f, int arr[ROW][COLS]);
void addMatrix(int arr1[ROW][COLS], int arr2[ROW][COLS], int res[ROW][COLS]);
void printMatrix(int arr[ROW][COLS]);

int main()
{
    FILE *f1 = fopen("f11.txt", "r");
    if (!f1)
    {
        fprintf(stderr, "file f11 is not open");
        exit(1);
    }

    FILE *f2 = fopen("f12.txt", "r");
    if (!f1)
    {
        fprintf(stderr, "file f12 is not open");
        exit(1);
    }

    int arr1[ROW][COLS];
    int arr2[ROW][COLS];
    int res[ROW][COLS];

    scanFile(f1, arr1);
    scanFile(f2, arr2);

    addMatrix(arr1, arr2, res);
    printMatrix(res);

    fclose(f1);
    fclose(f2);
    return 0;
}

void scanFile(FILE *f, int arr[ROW][COLS])
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

void addMatrix(int arr1[ROW][COLS], int arr2[ROW][COLS], int res[ROW][COLS])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    return;
}

void printMatrix(int arr[ROW][COLS])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", arr[i][j]);
        }
        if (i != ROW - 1)
            puts("");
    }
    return;
}