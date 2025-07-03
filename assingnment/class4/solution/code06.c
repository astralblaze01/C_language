#include <stdio.h>

int calculater(int a, int b, char oper);

int main()
{
    int a, b;
    char oper;
    scanf("%d %c %d", &a, &oper, &b);
    int res = calculater(a, b, oper);
    printf("%d", res);
}

int calculater(int a, int b, char oper)
{
    switch (oper)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
        break;
    default:
        return -1;
    }
}