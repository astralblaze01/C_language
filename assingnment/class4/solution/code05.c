#include <stdio.h>
#define ROWS 2
#define COLS 3

int main()
{
    int res;
    int matrix_A[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}};

    int matrix_B[ROWS][COLS] = {
        {10, 20, 30},
        {40, 50, 60}};

    printf("Result of Matrix Addition: \n");

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            res = matrix_A[i][j] + matrix_B[i][j];
            printf("%d\t", res);
        }
        printf("\n");
    }
    return 0;
}