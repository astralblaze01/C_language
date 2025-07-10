#include <stdio.h>
#include <string.h>

void reverse(char *arr);
void swap(char *a, char *b);

int main()
{
    char str[80];
    while (1)
    {
        printf("문자열 입력(종료 q) : ");
        fgets(str, sizeof(str), stdin);
        int size = strlen(str);
        // printf("%d ", size);

        if (str[size - 1] == '\n')
        {
            str[size - 1] = '\0';
        }
        if (strcmp(str, "q") == 0)
        {
            break;
        }

        reverse(str);
        printf("%s\n", str);
    }

    return 0;
}

void reverse(char *arr)
{
    int size = strlen(arr);
    for (int i = 0; i < size / 2; i++)
    {
        swap(&arr[i], &arr[size - i - 1]);
    }
    return;
}

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
    return;
}