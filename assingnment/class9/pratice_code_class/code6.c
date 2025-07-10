// 15장 24p
#include <stdio.h>
#include <string.h>

int main()
{
    char line[100];
    


    while (fgets(line, 8, stdin) != NULL)
    {

        line[strlen(line) - 1] = '\0'; // 이거 때문에 값 잘려서 나옴
        printf("%s\n", line);
    }


    return 0;
}