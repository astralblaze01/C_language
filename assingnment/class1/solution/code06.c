// 원 넓이 && 둘레 계산
#include <stdio.h>
#define PI 3.141592

int main(void)
{
        double r, result1, result2;
        printf("Enter the radius of the circle: ");
        scanf("%lf", &r);
        printf("Area: %0.4lf\n", PI * r * r);
        printf("Circumference: %0.4lf", PI * 2 * r);
        return 0;
}