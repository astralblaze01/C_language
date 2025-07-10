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
    // 이럼 개행문자 전까지 출력임
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    return;
}
