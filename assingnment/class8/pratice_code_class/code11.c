#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 1;
    int *arr = (int *)malloc(sizeof(int) * size);
    if (!arr)
    {
        printf("memory allocation fail");
        exit(1);
    }

    int n, cnt = 0;
    printf("exit with -1\n");
    while (1)
    {
        printf("Input: ");
        scanf("%d", &n);
        if (n == -1)
        {
            break;
        }
        else
        {
            arr[cnt++] = n;
            if (size == cnt)
            {
                int newSize = size * 2;
                size = newSize;

                int *temp = realloc(arr, sizeof(int) * size);
                if (!temp)
                {
                    printf("memory allocation fail");
                    exit(1);
                }
                arr = temp;

                // 아래처럼 하면 메모리 공간이 없어서 만약 할당이 되지않는경우 기존 arr값은
                // null로 바뀜 따라서 arr의 원래 값음 날아감 그래서 temp 이용해서 realloc해줘야함
                // arr = realloc(arr, sizeof(int) * size);
                // if (!arr)
                // {
                //     printf("memory allocation fail");
                //     exit(1);
                // }
                // 아니 그럼 realloc은 free가 자동으로 되는거임?
                printf("new size : %d\n", newSize);
            }
        }
    }

    return 0;
}