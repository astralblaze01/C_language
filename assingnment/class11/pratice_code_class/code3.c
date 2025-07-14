// 17장 17p
#include <stdio.h>

int *acc(int val);

int main()
{

    int *result;
    acc(5);
    acc(10);
    acc(15);
    result = acc(20);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}

int *acc(int val)
{
    static int data[10];
    static int index = 0;

    if (index < 10)
    {
        data[index++] = val;
    }
    return data;
}