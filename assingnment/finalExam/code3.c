#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char name[100];
    int score;
} Student;

void scanFile(FILE *file, Student *arr, int size);
void sortById(Student *arr, int size);
int compareId(const void *a, const void *b);
void sortByName(Student *arr, int size);
int compareName(const void *a, const void *b);
void sortBySocre(Student *arr, int size);
int compareSocre(const void *a, const void *b);
void printStruct(Student *arr, int size);
void isInArr(Student *arr, int size);
int search(Student *s, int n, char *name);

int main()
{
    FILE *file = fopen("f3.txt", "r");
    if (!file)
    {
        fprintf(stderr, "file f3.txt is not open");
        exit(1);
    }

    int size;
    fscanf(file, "%d", &size);

    Student *arr = (Student *)malloc(sizeof(Student) * size);
    if (!arr)
    {
        fprintf(stderr, "memory allocation is fail");
        exit(1);
    }

    scanFile(file, arr, size);

    sortById(arr, size);
    printStruct(arr, size);
    puts("");

    sortByName(arr, size);
    printStruct(arr, size);
    puts("");

    sortBySocre(arr, size);
    printStruct(arr, size);
    puts("");

    isInArr(arr, size);

    free(arr);
    fclose(file);
    return 0;
}

void printStruct(Student *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d %s %d\n", arr[i].id, arr[i].name, arr[i].score);
    }

    return;
}

void scanFile(FILE *file, Student *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        fscanf(file, "%d %s %d", &arr[i].id, arr[i].name, &arr[i].score);
    }
    return;
}

int compareId(const void *a, const void *b)
{
    return (*(Student *)a).id - (*(Student *)b).id;
}

void sortById(Student *arr, int size)
{
    qsort(arr, size, sizeof(Student), compareId);
    return;
}

int compareName(const void *a, const void *b)
{
    return strcmp((*(Student *)a).name, (*(Student *)b).name);
}

void sortByName(Student *arr, int size)
{
    qsort(arr, size, sizeof(Student), compareName);
    return;
}

void isInArr(Student *arr, int size)
{
    char name[100];
    while (1)
    {
        scanf("%s", name);
        if (strcmp(name, "quit") == 0)
        {
            break;
        }
        else
        {
            int key = search(arr, size, name);
            if (key < 0)
            {
                printf("not found\n");
            }
            else
            {
                printf("%d\n", arr[key].id);
            }
        }
    }
    return;
}

int search(Student *s, int n, char *name)
{
    int cnt = -1;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(s[i].name, name) == 0)
        {
            cnt = i;
            break;
        }
    }

    return cnt;
}

int compareSocre(const void *a, const void *b)
{
    return (*(Student *)b).score - (*(Student *)a).score;
}

void sortBySocre(Student *arr, int size)
{
    qsort(arr, size, sizeof(Student), compareSocre);
    return;
}