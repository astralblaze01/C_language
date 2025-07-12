#include <stdio.h>
#include <string.h>

int changeToNum(char *args[], int index);

int main(int argc, char *args[])
{

    int a = changeToNum(args, 1);
    int b = changeToNum(args, 3);

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

int changeToNum(char *args[], int index)
{
    int len = strlen(args[index]);
    int num = 0;

    if (args[index][0] == '-')
    {
        for (int i = 1; i < len; i++)
        {
            num = (num + args[index][i] - '0') * 10;
        }
        num *= -1;
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            num = (num + args[index][i] - '0') * 10;
        }
    }
    return num / 10;
}