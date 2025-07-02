#include <stdio.h>

int main()
{
    int cnt = 0, i, j, n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (cnt > 2)
            {
                break;
            }
            if (i % j == 0)
            {
                cnt += 1;
            }
        }
        if (cnt == 2)
        {
            printf("%d ", i);
        }
        cnt = 0;
    }

    printf("\n");
}