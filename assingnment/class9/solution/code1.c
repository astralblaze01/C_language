#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 80
#define COLS 3

void input(char strings[][MAX_LEN], int count);
void output(char strings[][MAX_LEN], int count);

int main()
{
    char str[COLS][MAX_LEN];
    input(str, COLS);
    output(str, COLS);

    return 0;
}

void input(char strings[][MAX_LEN], int count)
{
    for (int i = 0; i < COLS; i++)
    {
        scanf("%s", strings[i]);
    }
    return;
}

void output(char strings[][MAX_LEN], int count)
{
    for (int i = 0; i < COLS; i++)
    {
        printf("%s\n", strings[i]);
    }
}