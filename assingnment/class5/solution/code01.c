#include <stdio.h>
int fibo(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));

    return 0;
}

int fibo(int n)
{
    if (n < 2)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}