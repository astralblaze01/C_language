// 홀수만 받았을때 마름모 피라미드, 역 피라미드 출력

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0 || n <= 0)
    {
        printf("again");
        exit(1);
    }

    int middle = n / 2;

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= middle - i && j <= middle + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        puts("");
    }

    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    puts("");

    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= middle - i && j <= middle + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        if (i == 0)
        {
            continue;
        }
        puts("");
    }

    return 0;
}