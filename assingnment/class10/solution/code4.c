#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10

typedef struct
{
    char fname[100];
    int calories;
} Food;

int scanFood(FILE *f, Food *cal);
int totalCalories(Food ary[], int size);

int main()
{
    FILE *f = fopen("f4.txt", "r");
    if (!f)
    {
        fprintf(stderr, "file is not open");
        exit(1);
    }

    Food *cal = (Food *)malloc(sizeof(Food) * SIZE);
    if (!cal)
    {
        fprintf(stderr, "memory allocation is fail");
        exit(1);
    }

    int size = scanFood(f, cal);
    printf("%d", totalCalories(cal, size));

    return 0;
}

int totalCalories(Food ary[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += ary[i].calories;
    }
    return sum;
}

int scanFood(FILE *f, Food *cal)
{
    int i = 0;
    while (feof(f) == 0)
    {
        fscanf(f, "%s %d", cal[i].fname, &cal[i].calories);
        i++;
    }
    return i;
}