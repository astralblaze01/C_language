#include <stdio.h>
#include <string.h>

int main()
{
    char ca[][5] = {"java", "c#", "c++"};
    char *pa[] = {
        "1234", "5678", "9123"};

    pa[0] = "4567";
    printf("%s", pa[0]);
    // printf("%c", *(ca[0] + 5));
    // printf("%c", *(pa[0] + 5));
    return 0;
}