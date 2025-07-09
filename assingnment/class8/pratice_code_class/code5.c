// 13장 11 page
#include <stdio.h>

#define SIZE 5

void inputArray(int *arr, int size);
void printArray(int *arr, int size);

int main()
{
    int arr[SIZE];
    inputArray(arr, SIZE);
    printArray(arr, SIZE);

    return 0;
}

void inputArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] input : ", i);
        scanf("%d", &(*(arr + i)));
    }
    return;
}

void printArray(int *arr, int size)
{
    printf("array values : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    return;
}
