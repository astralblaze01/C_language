// 17장 35p
#include <stdio.h>

void hello();
void goodbye();
void run(void (*func)());

int main()
{
    void (*pf1)() = hello;
    void (*pf2)() = goodbye;

    void (*arr[2])();
    arr[0] = pf1;
    arr[1] = pf2;

    for (int i = 0; i < 2; i++)
    {
        arr[i]();
    }

    return 0;
}

void hello()
{
    printf("hello\n");
}

void goodbye()
{
    printf("goodbye\n");
}

void run(void (*func)())
{
    func();
}