#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 80

char *changeLower(char *str, int len);
int myStrCmp(char *str1, char *str2);
void printOrder(char *str1, char *str2, char *reStr1, char *reStr2);

int main()
{
    char str1[LEN], str2[LEN];
    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char *temp1 = changeLower(str1, len1);
    char *temp2 = changeLower(str2, len2);

    printOrder(temp1, temp2, str1, str2);

    // free를 빼먹음
    free(temp1);
    free(temp2);
    return 0;
}

void printOrder(char *str1, char *str2, char *reStr1, char *reStr2)
{
    if (myStrCmp(str1, str2) > 0)
    {
        printf("%s comes after %s", reStr1, reStr2);
    }
    else if (myStrCmp(str1, str2) < 0)
    {
        printf("%s comes before %s", reStr1, reStr2);
    }
    else
    {
        printf("Equal");
    }
    return;
}

char *changeLower(char *str, int len)
{
    char *temp = (char *)malloc(sizeof(char) * LEN);
    strcpy(temp, str);

    for (int i = 0; i < len; i++)
    {
        if (temp[i] >= 65 && temp[i] <= 90)
        {
            temp[i] += 32;
        }
    }
    return temp;
}

int myStrCmp(char *str1, char *str2)
{
    while (*str1 && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}