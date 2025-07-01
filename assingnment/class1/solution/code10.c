// getchar(), putchar() 이용하기
#include <stdio.h>

int main(void)
{
    char p;
    printf("Enter a single character: ");
    p = getchar();
    printf("You entered: ");
    putchar(p);
    putchar(p);
    // putchar은 puts와 다르게 개행이 안됀다.
    return 0;
}