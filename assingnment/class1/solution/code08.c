// 특정형식 날짜 입력받기
#include <stdio.h>

int main(void)
{
        int y, m, d;
        printf("Enter a date (YYYY-MM-DD): ");
        scanf("%d - %d - %d", &y, &m, &d);
        printf("Year: %d, Month: %d, Day: %d", y, m, d);
        return 0;
}