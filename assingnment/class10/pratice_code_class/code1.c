// 15장 56p
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    for (int i = 0; i < argc; i++)
    {
        printf("%d : %s\n", i, argv[i]);
    }

    return 0;
}