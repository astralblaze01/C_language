// 15장 14p
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    while ((ch = _getche()) != 'q')
    {
        _putch(ch);
    }

    // while ((ch = _getch()) != 'q')
    // {
    //     _putch(ch);
    // }

    return 0;
}