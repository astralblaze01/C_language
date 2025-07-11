// 16장 10p
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    char id[15];
    char *test;
} Student;

int main()
{
    Student s;
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    scanf("%d", &s.age);
    // getchar(); // 이거 없으면 실행 여기서 끊김

    fgets(s.id, sizeof(s.id), stdin);
    s.id[strcspn(s.id, "\n")] = '\0';

    printf("%s %d %s", s.name, s.age, s.id);

    return 0;
}