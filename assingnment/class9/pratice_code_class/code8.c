// 15장 32p
#include <stdio.h>
#include <string.h>

int main()
{
    // char src[5] = "test";
    // char dst[1];

    int src[5] = {1, 2, 3, 4, 5};
    int dst[6];

    // memcpy(dst, src, strlen(src) + 1);
    memcpy(dst, src, sizeof(src));
    for (int i = 0; i < 5; i++)
        printf("%d ", dst[i]);
    return 0;
}