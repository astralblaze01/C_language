#include <stdio.h>

typedef struct
{
    char title[100];
    char dir[50];
    int y;
    int t;
} Movie;

void print(Movie *m);

int main()
{
    Movie data;

    fgets(data.title, 100, stdin);
    fgets(data.dir, 50, stdin);
    scanf("%d", &data.y);
    scanf("%d", &data.t);

    print(&data);
    return 0;
}

void print(Movie *m)
{
    printf("Title : %s", m->title);
    printf("Director : %s", m->dir);
    printf("Year : %d\n", m->y);
    printf("RunningTime : %d\n", m->t);
    return;
}