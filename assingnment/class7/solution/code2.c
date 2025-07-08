#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("f2.txt", "r");
    if (!f)
    {
        printf("file is not open");
        exit(1);
    }

    int score, cnt = 0;
    printf("90점 이상:\n");
    while (fscanf(f, "%d", &score) != EOF)
    {
        if (score >= 90)
        {
            printf("%d\n", score);
            cnt++;
        }
    }
    printf("개수:\n%d", cnt);
    fclose(f);
    return 0;
}