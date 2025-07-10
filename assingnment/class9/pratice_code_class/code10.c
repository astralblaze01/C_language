// 15장 40p?이거 왜 안됌?
#include <stdio.h>
#include <string.h>

int main()
{
    char dest[] = "test";
    printf("%s", strncmp(dest, "C#", 2));
    printf("%s", dest);
    return 0;
}