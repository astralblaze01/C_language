// 17 : 51분 시작
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    int cnt = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 3 == 0 && i % 5 != 0)
        {
            arr[cnt++] = i;
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        if (i < cnt - 1)
        {
            printf("%d,", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }
    return 0;
}
// 18:00종료