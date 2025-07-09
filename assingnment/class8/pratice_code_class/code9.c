// 13장 23p
#include <stdio.h>

int main()
{
    int a[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = a[1];

    printf("%d", *(p + 4));
    return 0;
}