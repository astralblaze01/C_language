// 15장 34p
#include <stdio.h>
#include <string.h>

int validate(char *str1, char *str2);

int main()
{
    char password[50];
    char check[50];

    while (1)
    {
        fgets(password, 50, stdin);
        if (password[strlen(password) - 1] == '\n')
        {
            password[strlen(password) - 1] = '\0';
        }
        if (strlen(password) < 5 || strlen(password) > 10)
        {
            printf("Retry\n");
            continue;
        }


        fgets(check, 50, stdin);
        if (check[strlen(password) - 1] == '\n')
        {
            check[strlen(check) - 1] = '\0';
        }
        if (strlen(check) < 5 || strlen(check) > 10)
        {
            printf("Retry\n");
            continue;
        }


        if (validate(password, check))
        {
            printf("Done\n");
            break;
        }
        else
        {
            printf("Retry\n");
        }
    }
    return 0;
}

int validate(char *str1, char *str2)
{
    if (strcmp(str1, str2) == 0)
    {
        return 1;
    }
    return 0;
}