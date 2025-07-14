#include <stdio.h>

int add(int a, int b);
int mult(int a, int b);
int subt(int a, int b);

int main()
{
    int (*pf[3])(int, int);

    pf[0] = add;
    pf[1] = mult;
    pf[2] = subt;

    char *ops = "+-*";
    char op;
    int a = 10, b = 20;

    while (op = *(ops++))
    {
        switch (op)
        {

        case '+':
            printf("%d\n", pf[0](a, b));
            break;
        case '-':
            printf("%d\n", pf[2](a, b));
            break;
        case '*':
            printf("%d\n", pf[1](a, b));
            break;
        }
    }

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
int mult(int a, int b)
{
    return a / b;
}
int subt(int a, int b)
{
    return a - b;
}