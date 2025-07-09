#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COLS 5

void print1DArray(int *arr[COLS], int n); // n은 p의 size겠지?
void scanFile(FILE *f, int arr[][COLS]);
void mapping(int arr1[][COLS], int *arr2[COLS]);

int main()
{
    FILE *file = fopen("f4.txt", "r");
    if (!file)
    {
        printf("file is not open");
        exit(1);
    }

    int arr[ROW][COLS];
    int *p[COLS];

    scanFile(file, arr);
    mapping(arr, p);
    print1DArray(p, COLS);

    fclose(file);
    return 0;
}

void mapping(int arr1[][COLS], int *arr2[COLS])
{
    arr2[0] = arr1[1];
    arr2[1] = arr1[3];
    arr2[2] = arr1[0];
    arr2[3] = arr1[2];
    return;
}

void scanFile(FILE *f, int arr[][COLS])
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

void print1DArray(int *arr[COLS], int n)
{

    // n이용해서 풀었을때
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("%d ", *(arr[i] + j));
            printf("%d ", *(*(arr + i) + j));
        }
        if (i != ROW - 1)
            puts("");
    }

    // n말고 그냥 매크로 이용해서 풀었을떄
    // for (int i = 0; i < ROW; i++)
    // {
    //     for (int j = 0; j < COLS; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     if (i != ROW - 1)
    //         puts("");
    // }
    return;
}