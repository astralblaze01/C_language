#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int size, result;
    scanf("%d", &size);

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {
        result = arr[i] - arr[i + 1];
        if (result >= 3 || result <= -3)
        {
            swap(&arr[i], &arr[i + 1]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 6:07 실패