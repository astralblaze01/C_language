// 13장 5 page
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const *p;
    int a = 10;
    int b = 20;

    int *const p1;
    
    p = &a;
    printf("%d ", *p);
    p = &b;
    // *p = 10; //이럼 오류남
    printf("%d", *p);

    return 0;
}