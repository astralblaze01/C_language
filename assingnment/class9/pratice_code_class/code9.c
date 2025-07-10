// 15장 34p
#include <stdio.h>
#include <string.h>

int main()
{
    char *password = "secure";
    char input[50];

    scanf("%49s", input);

    if (strlen(input) > 10)
    {
        printf("password is too long!\n");
    }
    else if (strcmp(password, input) == 0)
    {
        printf("Access granted.\n");
    }
    else
    {
        printf("Access denied");
    }
    return 0;
}