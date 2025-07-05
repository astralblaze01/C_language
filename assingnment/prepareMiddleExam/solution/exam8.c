#include <stdio.h>

int main()
{
    int n, cnt = 0, bit, arr[32] = {0}, index = 0;
    scanf("%d", &n);

    while (n > 0)
    {
        bit = n % 2;
        arr[cnt++] = bit;
        n /= 2;
    }

    for (int i = 0; i < cnt; i++)
    {
        index = cnt - i - 1;
        if (arr[index])
        {
            switch (index)
            {
            case 3:
                printf("save\n");
                break;
            case 2:
                printf("load\n");
                break;
            case 1:
                printf("edit\n");
                break;
            case 0:
                printf("delete\n");
                break;
            default:
                break;
            }
        }
    }

    return 0;
}