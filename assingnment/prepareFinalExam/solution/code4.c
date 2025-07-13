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
    int oriLen = strlen(ori);
    int chanLen = strlen(chan);

    char *temp = NULL;
    char tempCopy[STRING_MAX_SIZE];

    while (1)
    {
        temp = strstr(str, ori);
        if (temp == NULL)
        {
            break;
        }
        
        strcpy(tempCopy, temp + oriLen);
        for (int i = 0; i < chanLen; i++)
        {
            temp[i] = chan[i];
        }
        
        temp += chanLen;
        strcpy(temp, tempCopy);
    }

    return;
}