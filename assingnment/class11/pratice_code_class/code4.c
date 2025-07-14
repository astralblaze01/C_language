// 17장 34p
#include <stdio.h>

void add(double *z, double a, double b);

int main()
{
    void (*pf)(double *, double, double);
    pf = add;
    double x;
    double a = 10, b = 20;

    pf(&x, 10, 2);

    printf("%lf", x);
    return 0;
}

void add(double *z, double a, double b)
{
    *z = a + b;
}