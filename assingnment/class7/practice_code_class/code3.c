// 11장 예제 22 page
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *numFile = fopen("randNum.txt", "r");
    if (!numFile)
    {

        printf("file is not open");
        exit(1);
    }

    int n, sum = 0;
    // fscanf 반환값 찾아보기
    while (fscanf(numFile, "%d", &n) != -1) // 얘는 정수 값 반환 따라서 EOF해도 됌
    {
        sum += n;
    }
    printf("%d", sum);

    fclose(numFile);

    return 0;
}