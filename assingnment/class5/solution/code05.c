#include <stdio.h>

int pulsChecker(int n);
int dight(int n);

int multChecker(int n);

int main()
{
    int n, iter;
    char oper;

    scanf("%d %c %d", &n, &oper, &iter);
    switch (oper)
    {
    case '+':
        for (int i = 0; i < iter; i++)
        {
            n = pulsChecker(n);
        }
        printf("%d", n);
        break;

    case '*':
        for (int i = 0; i < iter; i++)
        {
            n = multChecker(n);
        }
        printf("%d", n);

        break;

    default:
        break;
    }
    return 0;
}

int dight(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

int multChecker(int n)
{
    int size = dight(n);
    int arr[100];
    int cnt = 1;
    int checker;
    int k = 1;
    int next;

    for (int i = 0; i < size; i++)
    {
        arr[i] = n % 10;
        n = n / 10;
    }
    for (int i = size - 1; i > -1; i--)
    {
        cnt = 1;
        for (int j = i; j > 0; j--)
        {
            cnt *= 10;
        }
        next = (arr[i] * cnt);
        if (k == 1)
        {
            checker = next;
        }
        else if (k % 2 == 0)
        {
            checker = checker / next;
        }
        else
        {
            checker = next * checker;
        }
        k++;
    }
    return checker;
}

int pulsChecker(int n)
{
    int checker = 0, cnt = 1, mod10 = 0, num = 1;

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
        return -checker;
    }
    else
    {
        return checker;
    }
}