#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3] = {5, 10, 15};
    int *p = &a[2];

    printf("%d\n", *p--);
    printf("%d\n", (*p)--);
    printf("%d", (*p));

    return 0;
}