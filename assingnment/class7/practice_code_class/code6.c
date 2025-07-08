// 11장 34page
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1 = fopen("code4.c", "r");
    if (!f1)
    {
        printf("f1 file is not open");
    }

    FILE *f2 = fopen("copy.c", "w");
    if (!f2)
    {
        printf("f1 file is not open");
    }

    // char ch;
    int ch;

    // getc 찾아보기
    while ((ch = getc(f1)) != EOF)
    {
        // putc랑 putchar 찾아보기
        // 오늘 찾아볼꺼 많노
        // putchar(ch);
        
        putc(ch, f2);
        // fputc(ch, f2);
        // 아니 이거 뭐냐 fputc안해도 파일에 그냥 출력 되노
    }

    fclose(f1);
    fclose(f2);
    return 0;
}