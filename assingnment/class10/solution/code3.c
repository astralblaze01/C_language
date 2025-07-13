#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

// 사번 이름 주소 월급 인센티브
typedef struct
{
    int id;
    char name[20];
    char home[50];
    int salary;
    double incen;
    double result;
} Employee;

int scanFile(FILE *f, Employee *e);
void print(Employee e[], int count);

int main()
{
    FILE *f = fopen("f3.txt", "r");
    if (!f)
    {
        printf("file is not open");
        exit(1);
    }

    Employee *e = (Employee *)malloc(sizeof(Employee) * SIZE);
    if (!e)
    {
        printf("memory allocation is fail");
        exit(1);
    }

    int sizeStruct = scanFile(f, e);
    print(e, sizeStruct);
    return 0;
}

int scanFile(FILE *f, Employee *e)
{
    int i = 0;
    double result;
    while (feof(f) == 0)
    {
        fscanf(f, "%d\n", &e[i].id);

        fgets(e[i].name, sizeof(e[i].name), f);
        e[i].name[strcspn(e[i].name, "\n\r")] = '\0';

        fgets(e[i].home, sizeof(e[i].home), f);
        e[i].home[strcspn(e[i].home, "\n\r")] = '\0';

        fscanf(f, "%d", &e[i].salary);
        fscanf(f, "%lf", &e[i].incen);

        result = e[i].salary * (e[i].incen + 12);
        e[i].result = result;
        i++;
    }

    return i;
}

void print(Employee e[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d %s %s %d %.f%c %.1lf\n", e[i].id, e[i].name, e[i].home, e[i].salary, e[i].incen * 100, '%', e[i].result);
    }
    return;
}