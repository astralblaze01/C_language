// 16장 44
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char name[100];
    float score;
} Student;

int main()
{
    Student *student;
    int n, i;

    scanf("%d", &n);

    student = (Student *)malloc(sizeof(Student) * n);
    if (!student)
    {
        fprintf(stderr, "memory allocation is fail");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %lf", &student[i].id, student[i].name, &student[i].score);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %lf\n", student[i].id, student[i].name, student[i].score);
    }

    free(student);
    return 0;
}