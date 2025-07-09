// 13장 19 page
#include <stdio.h>
#include <stdlib.h>
#define COLS 3
void doubleElement(int (*ptr)[COLS], int row);

int main()
{
    int arr[2][COLS] = {1, 2, 3, 4, 5, 6};
    doubleElement(arr, 2);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
    return 0;
}

void doubleElement(int (*ptr)[COLS], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            ptr[i][j] *= 2;
        }
    }
    return;
}
