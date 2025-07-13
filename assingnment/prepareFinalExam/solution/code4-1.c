#include <stdio.h>
#include <string.h>
#define STRING_MAX_SIZE 100
#define WORD_MAX_SIZE 20

void changeWord(char *str, char *ori, char *chan);

int main()
{
    char string[STRING_MAX_SIZE];
    char oriWord[WORD_MAX_SIZE], chWord[WORD_MAX_SIZE];

    fgets(string, sizeof(string), stdin);
    scanf("%s %s", oriWord, chWord);

    int len = strlen(string);
    if (string[len - 1] == '\n')
    {
        string[len - 1] = '\0';
    }

    changeWord(string, oriWord, chWord);

    printf("%s", string);
    return 0;
}

void changeWord(char *str, char *ori, char *chan)
{
    char result[STRING_MAX_SIZE] = "";
    char *pos = str;
    int oriLen = strlen(ori);
    int chanLen = strlen(chan);

    while (*pos)
    {
        if (strncmp(pos, ori, oriLen) == 0)
        {
            strcat(result, chan);
            pos += oriLen;
        }
        else
        {
            int len = strlen(result);
            result[len] = *pos;
            result[len + 1] = '\0';
            pos++;
        }
    }
    strcpy(str, result);
}
