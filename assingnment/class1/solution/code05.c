// 한국식 나이
#include <stdio.h>

int main(void)
{
        int birth, currYear;
        printf("Please enter your year of birth: ");
        scanf("%d", &birth);
        printf("Please enter the current year: ");
        scanf("%d", &currYear);
        printf("Your age is %d years old.", currYear - birth + 1);
        return 0;
}