#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 20
#define ROW 20

void sort(char strings[][MAX_LEN], int count);
void output(char strings[][MAX_LEN], int count);

int main()
{
    FILE *file = fopen("f4.txt", "r");
    if (!file)
    {
        printf("file is not open");
        exit(1);
    }
    // int size;
    // fscanf(file, "%d", &size);
    // 입력
    char strings[ROW][MAX_LEN];
    for (int i = 0; i < ROW; i++)
    {
        fscanf(file, "%s", strings[i]);
    }

    sort(strings, ROW);
    output(strings, ROW);
    fclose(file);
    return 0;
}

void sort(char strings[][MAX_LEN], int count)
{
    char temp[20];
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (strcmp(strings[i], strings[j]) > 0)
            {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }
    return;
}

void output(char strings[][MAX_LEN], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s ", strings[i]);
    }
    return;
}