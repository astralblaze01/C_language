#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int mask = ~(1 << 7);

    a = a & mask;
    b = b & mask;

    (a > b) ? printf("%d", a) : printf("%d", b);

    return 0;
}