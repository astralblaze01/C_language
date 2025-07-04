#include <stdio.h>

int main()
{
    char a;
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf(" %c", &a);

        if (a == 'A')
        {
            sum += 4;
        }
        else if (a == 'B')
        {
            sum += 3;
        }
        else if (a == 'C')
        {
            sum += 2;
        }
        else if (a == 'D')
        {
            sum += 1;
        }
        else
        {
            sum += 0;
        }
    }

    double r = sum / 4.0;
    if (r < 1.7)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}