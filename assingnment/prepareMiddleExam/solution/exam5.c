#include <stdio.h>

int main()
{
    int n, val, max = 0, size = -1, index = 0;
    scanf("%d", &n);

    int mark[100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        mark[val] += 1;
        if (size < val)
        {
            size = val;
        }
    }

    for (int i = 0; i < size + 1; i++)
    {
        if (mark[i] > max)
        {
            index = i;
            max = mark[i];
        }
    }
    printf("%d ", index);

    return 0;
}