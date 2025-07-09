// 12장 19 page
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 0x44434241;
    char *pc = (char *)&value;

    // test출력
    printf("val : %d\n", (char)value);
    printf("pc :%d\n", *pc);

    for (int i = 0; i <= 3; i++)
    {
        // char ch = *(pc + i);
        printf("%d\n", *(pc + i));
        // printf("*(pc+%d) %#x %3c %p %p\n", i, ch, ch, (void *)(pc + i), &ch);
    }
    return 0;
}

// 사이트에 나와있는 결과값 캡쳐하고
// 각 문제 핵심코드 생각해서 리뷰작성해서 lms에 올리기