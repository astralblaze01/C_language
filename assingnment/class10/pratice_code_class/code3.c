// 16장 9p
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    fgets(str, 20, stdin);
    size_t pos = strcspn(str, "\n"); // size_t 시스템이 가독성 높이기 위해서 만든 데이터 타입
    // size_t이건 정수로 보면 됌
    str[pos] = 'z';
    printf("%s", str);

    return 0;
}