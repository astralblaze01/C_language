// 12장14page
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p1 = &arr[1];
    int *p2 = &arr[4];
    printf("%d", p2 - p1);
    return 0;
}