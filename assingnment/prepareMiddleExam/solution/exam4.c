#include <stdio.h>

int main()
{
    int n, cnt = 0, mark = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        cnt++;
        if (cnt % 2 == 0)
        {
            mark += cnt - 1;
            int temp = mark;
            for (int j = 0; j < cnt; j++)
            {
                printf("%d ", mark--);
            }
            mark = temp + 1;
        }
        else
        {
            for (int j = 0; j < cnt; j++)
            {
                printf("%d", mark++);
            }
        }
        puts("");
    }

    return 0;
}
// 6:40