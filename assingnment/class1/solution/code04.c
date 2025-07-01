// 세 과목평균 점수 구하기
#include <stdio.h>

int main(void)
{
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int total = a + b + c;
        double aver = (double)total / 3;

        printf("Total: %d\n", total);
        printf("Average: %0.2f", aver);
        return 0;
}