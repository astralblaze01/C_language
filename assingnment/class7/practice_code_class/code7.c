#include <stdio.h>
int main()
{
    int i = 100;
    char c = 'A';

    int *pi = &i;
    char *pc = &c;
    printf("간접 참조 출력: %d %c\n", *pi, *pc);

    *pi = 200;
    *pc = 'B';
    printf("직접 참조 출력: %d %c", i, c);

    return 0;
}