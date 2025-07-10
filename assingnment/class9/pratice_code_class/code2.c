#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[] = "C C++\0Java";
    printf("%s %s", c, c + 6);

    char a = getchar();
    printf("%c", a);
    return 0;
}