#include <stdio.h>

int func(int a, int b, int cnt);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = a;

    printf("%d", func(a, b, cnt));

    return 0;
}

int func(int a, int b, int cnt)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b < 2)
    {
        return a;
    }
    else
    {
        func((a * cnt) % 10000, b - 1, cnt);
    }
}