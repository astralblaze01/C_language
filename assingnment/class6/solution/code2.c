#include <stdio.h>

int main()
{
    int f, h;
    scanf("%d %d", &f, &h);

    int sub = f - h;
    int div = sub / 1000;

    printf("%d %d", div, (sub % 1000) / 100);
    return 0;
}