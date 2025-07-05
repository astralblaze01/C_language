// 이거 만약에 0과 0 사이에 1 말고 다른 수 나오면 못셈
// 입력값 0이랑 1만 들어올수 있다고 가정한다음에 푼거임
#include <stdio.h>

int main()
{
    int n, zero, stack[100], top = 0;
    int notOne[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &zero);
        if (zero == 0)
        {
            stack[top++] = i;
        }
    }

    for (int i = 0; i < top - 1; i++)
    {
        if (stack[i + 1] - stack[i] - 1 > 0)
        {
            printf("%d ", stack[i + 1] - stack[i] - 1);
        }
    }

    return 0;
}