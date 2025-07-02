// 
#include <stdio.h>
int main()
{
    int n = 5;

    while (n > 3 || n < 1)
    {
        printf("==============\n");
        printf("1. chicken\n");
        printf("2. pizza\n");
        printf("3. burger\n");
        printf("==============\n");
        scanf("%d", &n);
    }
    printf("Selected: %d", n);
}