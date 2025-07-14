#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char fname[100];
    int calories;
} Food;

int compareName(const void *a, const void *b);
int compareCal(const void *a, const void *b);
void scanFile(FILE *f, Food *arr, int size);
void printFoods(const Food *arr, int size);

int main()
{
    FILE *file = fopen("f5.txt", "r");
    if (!file)
    {
        fprintf(stderr, "file is not open");
        exit(1);
    }

    int size;
    fscanf(file, "%d", &size);

    Food *arr = (Food *)malloc(sizeof(Food) * size);
    if (!arr)
    {
        fprintf(stderr, "memory allocation is fail");
        exit(1);
    }

    scanFile(file, arr, size);

    printf("Sorting by fname :\n");
    qsort(arr, size, sizeof(Food), compareName);
    printFoods(arr, size);

    puts("");

    printf("Sorting by calories :\n");
    qsort(arr, size, sizeof(Food), compareCal);
    printFoods(arr, size);

    free(arr);
    return 0;
}

void scanFile(FILE *f, Food *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        fscanf(f, "%s %d", arr[i].fname, &arr[i].calories);
    }
    return;
}

int compareName(const void *a, const void *b)
{
    Food *c1 = (Food *)a;
    Food *c2 = (Food *)b;
    return strcmp(c1->fname, c2->fname);
}

int compareCal(const void *a, const void *b)
{
    Food *c1 = (Food *)a;
    Food *c2 = (Food *)b;
    return c1->calories - c2->calories;
}

void printFoods(const Food *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s %d\n", arr[i].fname, arr[i].calories);
    }
    return;
}