#include <stdio.h>

int main()
{
    char arr[100] = {'\0'};
    scanf("%s", arr);

    int cnt = 0, val = arr[0] - '0';
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (val != arr[i] - '0')
        {
            printf("%dx%d ", val, cnt);
            val = arr[i] - '0';
            cnt = 0;
        }
        cnt++;
    }
    printf("%dx%d ", val, cnt);

    return 0;
}