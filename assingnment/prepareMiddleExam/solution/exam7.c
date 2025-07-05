#include <stdio.h>
int isRange(int n);

int main()
{
    int mon, price;
    scanf("%d", &mon);
    if (!isRange(mon))
    {
        printf("input again\n");
        return 1;
    }
    scanf("%d", &price);
    if (!isRange(price))
    {
        printf("input again\n");
        return 1;
    }
    int sub = mon - price;
    int mod500 = 0, mod100 = 0, mod50 = 0, mod10 = 0;

    while (sub > 0)
    {
        if (sub >= 500)
        {
            mod500 = sub / 500;
            sub = sub % 500;
        }
        else if (sub >= 100)
        {
            mod100 = sub / 100;
            sub = sub % 100;
        }
        else if (sub >= 50)
        {
            mod50 = sub / 50;
            sub = sub % 50;
        }
        else
        {
            mod10 = sub / 10;
            sub = sub % 10;
        }
    }
    // 이거 while문 없이 그냥 돌려도 상관 없음. if문을 좀 수정 해야겠지만

    printf("%d%d%d%d", mod500, mod100, mod50, mod10);

    return 0;
}

int isRange(int n)
{
    if (n < 100 || n > 10000)
    {
        // printf("you can input range of 100 ~ 1000");
        return 0;
    }
    else
    {
        return 1;
    }
}