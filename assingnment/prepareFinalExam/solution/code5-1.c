#include <stdio.h>
#include <stdlib.h>

int changeToNum(char *args[], int index);

int main(int argc, char *args[])
{

    int a = atoi(args[1]);
    int b = atoi(args[3]);

    switch (*args[2])
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    }
    return 0;
}
