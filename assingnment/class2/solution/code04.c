#include <stdio.h>

int main()
{
    char a;

    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf(" %c", &a);
        // printf("%c ", a);
        if (a == 'F')
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}