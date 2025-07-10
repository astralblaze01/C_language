// 15장 44p
#include <stdio.h>
#include <string.h>
void reverse(char *arr);
void swap(char *a, char *b);

int main()
{
    char test[] = "python!";
    // printf("%s", test);
    reverse(test);
    printf("%s", test);
    return 0;
}

void reverse(char *arr)
{
    int size = strlen(arr) - 1;
    for (int i = 0; i < size / 2 + 1; i++)
    {
        swap(&arr[i], &arr[size - i]);
    }
}

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}