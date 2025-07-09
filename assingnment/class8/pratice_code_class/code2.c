// 13장 3 page
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 100;
    int *pi = &i;
    int **dpi = &pi;

    printf("%p %p %p", &i, pi, *dpi);

    return 0;
}