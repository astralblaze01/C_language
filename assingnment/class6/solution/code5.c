#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100] = {0};

    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = i + 2;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > 1)
            {
                if (arr[j] % arr[i] == 0)
                {
                    arr[j] = 0;
                }
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != 0)
        {
            cnt++;
            if (cnt % 2 != 0)
            {
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}