#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Numbers in reverse order: ");
    for (int i = 4; i > -1; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}