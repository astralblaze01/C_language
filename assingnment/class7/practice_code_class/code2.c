// 11장 예제 2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file = fopen("randNum.txt", "w");
    if (!file)
    {
        printf("file is not open");
        exit(1);
    }

    // srand의 s는 seed값으로 seed값에 따라 rand값이 바뀌게 됨
    // 따라서 초기화 안해주면 값 계속 같게 나옴
    srand((unsigned)time(NULL));
    // printf("%x", time(NULL));

    // rand, srand 사용법 찾아보기
    for (int i = 0; i < 10; i++)
    {
        fprintf(file, "%d\n", rand() % 100);
    }

    fclose(file);
    return 0;
}