#include <stdio.h>

int main()
{
    int n, checker = 0, cnt = 1, mod10 = 0, num = 1;
    scanf("%d", &n);

    while (n > 0)
    {
        mod10 = n % 10;
        if (cnt % 2 != 0)
        {
            checker = checker + mod10 * num;
        }
        else
        {
            checker = checker - mod10 * num;
        }
        n = n / 10;
        num *= 10;
        cnt++;
    }
    if (checker < 0)
    {
        printf("%d", -checker);
    }
    else
    {
        printf("%d", checker);
    }

    return 0;
}
