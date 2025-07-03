#include <stdio.h>

int main()
{
    int arr[] = {95, 100, 78, 99, 85, 92};
    int max = arr[0], min = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);
    return 0;
}