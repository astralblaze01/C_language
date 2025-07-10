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
        fgets(str, 80, stdin);
        // if (str[strlen(str) - 1] == '\n')
        // {
        //     str[strlen(str) - 1] = '\0';
        // }
        if (strcmp(str, "q") == 0)
        {
            break;
        }
        reverse(str);
        printf("\n");
    }
    return 0;
}

void reverse(char *arr)
{
    int size = strlen(arr) - 1;
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    return;
}
