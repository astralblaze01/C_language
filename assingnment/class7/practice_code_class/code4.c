// 11장 page24

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("code1.c", "r");
    char *line;

    if (!fp)
    {
        perror("file is not open");
        return 1;
    }

    // fgets 반환값 파라미터 값 찾아보기
    while (fgets(line, sizeof(line), fp) != NULL) // 얘는 포인터 값 반환
    {
        printf("%s", line); // 개행 포함됌 -> 줄바꿈 자동 처리
    }

    // // fseek(fp, 0, 0);
    // while (fscanf(fp, "%s", line) != EOF)
    // {
    //     printf("%s\n", line);
    // }

    fclose(fp);
}