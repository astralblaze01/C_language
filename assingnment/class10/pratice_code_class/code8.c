// 16장 31p
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[30];
    int floor;
} Dept;

typedef struct
{
    char name[20];
    int pay;
    Dept dept;
} Emp;

int main()
{
    Emp user;
    scanf("%s\n%d\n%s\n%d", user.name, &user.pay, user.dept.name, &user.dept.floor);
    printf("%s\n%d\n%s (%d)", user.name, user.pay, user.dept.name, user.dept.floor);
    return 0;
}