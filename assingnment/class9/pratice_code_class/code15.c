#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char **arr = (char **)malloc(sizeof(char *) * 5);
    char arr[5][100];
    
    for (int i = 0; i < 5; i++)
    {
        // arr[i] = (char *)malloc(sizeof(char) * 100);
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}