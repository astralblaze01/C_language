// 16장 18p
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct
{
    char *name;
} s;

int main()
{
    s s1, s2;
    s1.name = "asdf";
    s2.name = "asdf";
    char *test;
    // test = (char *)malloc(sizeof(char) * 10);

    fgets(test, 10, stdin);
    printf("%s", test);
    // s1.name[0] = 'k';
    // if (memcmp(&s1, &s2, sizeof(s)) == 0)
    // {
    //     printf("1");
    // }
    // else
    // {
    //     printf("0");
    // }
}
