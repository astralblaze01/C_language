#include <stdio.h>

int main()
{
    int arr[3][4] = {10, 20, 30, 40,
                     5, 15, 25, 35,
                     1, 2, 3, 4};
    int sum1 = 0, sum2 = 0;

    printf("Sum of each row:\n");
    for (int i = 0; i < 3; i++)
    {
        sum1 = 0;
        for (int j = 0; j < 4; j++)
        {
            sum1 += arr[i][j];
        }
        printf("Row %d: %d\n", i, sum1);
    }

    printf("\nSum of each column:\n");
    for (int i = 0; i < 4; i++)
    {
        sum2 = 0;
        for (int j = 0; j < 3; j++)
        {
            sum2 += arr[j][i];
        }
        printf("Column %d: %d\n", i, sum2);
    }
    return 0;
}