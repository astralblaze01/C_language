#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 31; i >= 0; i--)
    {
        if ((n >> i) & 1)
        {
            switch (i)
            {
            case 0:
                printf("save\n");
                break;
            case 1:
                printf("load\n");
                break;
            case 2:
                printf("edit\n");
                break;
            case 3:
                printf("delete\n");
                break;
            default:
                break;
            }
        }
    }

    return 0;
}
