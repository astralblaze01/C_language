// 16장 42p
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    int id;
    double score;
} Student;

void input_student(Student s[], int size);
void print_student(Student s[], int size);

int main()
{
    Student *gp = (Student *)malloc(sizeof(Student) * 3);
    if (!gp)
    {
        printf("memory allocation is fail");
        exit(1);
    }

    input_student(gp, 3);
    print_student(gp, 3);
    return 0;
}

void input_student(Student s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("[%d번째 학생]\n", i + 1);

        printf("이름 : ");
        // fgets(s[i].name, sizeof(s->name), stdin);
        // s[i].name[strcspn(s[i].name, "\n")] = '\0';
        scanf("%s", s[i].name);
    
        printf("학번 : ");
        scanf("%d", &s[i].id);

        printf("점수 : ");
        scanf("%lf", &s[i].score);
    }
}

void print_student(Student s[], int size)
{
    puts("[학생 목록]");
    printf("이름\t학번\t점수\n");
    for (int i = 0; i < size; i++)
    {
        printf("%-10s\t%-6d\t%-0.2lf\n", s[i].name, s[i].id, s[i].score);
    }
}
