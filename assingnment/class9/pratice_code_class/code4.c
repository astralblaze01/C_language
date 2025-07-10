// 15장 16p
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    char pwd[10];
    int i = 0;

    while ((ch = _getch()) != 'q')
    {
        if (i < 10)
        {
            pwd[i++] = ch;
            printf("*");
        }
    }

    return 0;
}