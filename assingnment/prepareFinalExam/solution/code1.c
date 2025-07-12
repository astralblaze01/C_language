#include <stdio.h>
#include <string.h>

int isPalindrom(char *string, int len);
void changeLower(char *string, int len);

int main()
{
    char strings[100];
    scanf("%s", strings);

    int len = strlen(strings);
    changeLower(strings, len);
    isPalindrom(strings, len) ? printf("Palindrome") : printf("Not a Palindrome");

    return 0;
}

void changeLower(char *string, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (string[i] >= 65 && string[i] <= 90)
        {
            string[i] += 32;
        }
    }
    return;
}

int isPalindrom(char *string, int len)
{
    int i = 0, j = len - 1;

    while (i < j)
    {
        if (string[i++] != string[j--])
        {
            return 0;
        }
    }
    return 1;
}