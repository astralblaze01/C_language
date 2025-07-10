#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "java 2022 python c";
    // 문자열에 값이 있으면 그 포인터 반환
    printf("%s\n", strstr(str, "2"));
    return 0;
}