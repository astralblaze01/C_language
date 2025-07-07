// n이 0일때 종료, 양수 갯수 출력, 양수 평균 구하기.
#include <stdio.h>

int main(void)
{
    int n, cnt = 0;
    double sum = 0;
    double aver = 0;

    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        if (n > 0)
        {
            sum += n;
            cnt++;
        }
    }
    if (cnt == 0)
    {
        printf("%d %0.2lf", 0, 0);
    }
    else
    {
        aver = sum / cnt;
        printf("%d %0.2lf", cnt, aver);
    }
    return 0;
}