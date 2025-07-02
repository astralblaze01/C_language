// 2진수 1 갯수 구하기
#include <stdio.h>

int main(void)
{
    int demecial, cnt1 = 0, cnt2 = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &demecial);
    int temp = demecial;

    // x & 1 = x
    while (demecial != 0)
    {

        if (demecial & 1)
        {
            cnt1++;
        }
        demecial = demecial >> 1;
        cnt2++;
    }
    printf("Number of 1s in binary: %d\n", cnt1);
    printf("Binary digit count: %d", cnt2);

    return 0;
}