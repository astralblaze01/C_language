#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: <program_name> <operation> <num1> <num2>");
        return 0;
    }

    int a = *argv[2] - '0';
    int b = *argv[3] - '0';
    double result;

    switch (*argv[1])
    {
    case '+':
        result = (double)a + b;
        break;

    case '-':
        result = (double)a - b;
        break;

    case '*':
        result = (double)a * b;
        break;

    case '/':
        result = (double)a / b;
        break;

    default:
        break;
    }

    printf("Result = %0.1lf", result);

    return 0;
}