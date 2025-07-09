//  13장 21p
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *days[7]; // 각각에 대한 주소값은 안바뀐다는거임

    // char a = "1234";
    for (int i = 0; i < 7; i++)
    {
        days[i] = (char *)malloc(sizeof(char));
        scanf("%s", days[i]);
        // days[i] = &a; // 따라서 여기서 오류남
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", days[i]);
    }

    return 0;
}