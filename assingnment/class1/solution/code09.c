// 16,10,8진수 출력하기
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a hexadecimal number (e.g., 1A): ");
    scanf("%x", &n);
    printf("Hexadecimal: %#X\n", n);
    printf("Decimal: %d\n", n);
    printf("Octal: %#o", n);
    return 0;
}