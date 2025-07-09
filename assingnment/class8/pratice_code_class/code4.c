// 13장 6 page

#include <stdio.h>
#include <stdlib.h>

void print(const int *ptr, int size);

int main()
{
    const int arr[] = {1, 2, 3, 4, 5};
    print(arr, 5);
    return 0;
}

void print(const int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return;
}