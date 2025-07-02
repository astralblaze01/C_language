#include <stdio.h>
int main()
{
    int n = 2022111603, cnt = 0, sum = 0;
    double aver;

    puts("Enter numbers.");
    while (1)
    {
        scanf("%d", &n);
        if (n < 0)
        {
            if (cnt == 0)
            {
                printf("none\n");
            }
            break;
        }
        sum += n;
        cnt++;
    }
    if (cnt > 0)
    {
        aver = (double)sum / (double)cnt;
        printf("Average : %0.2lf", aver);
    }

    return 0;
}