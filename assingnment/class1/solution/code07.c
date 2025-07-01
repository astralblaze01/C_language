// 영수증 출력
#include <stdio.h>

int main(void)
{
        int id, price;
        printf("Enter item code (integer): ");
        scanf("%d", &id);
        printf("Enter price (integer): ");
        scanf("%d", &price);

        printf("=======================\n");
        printf("RECEIPT\n");
        printf("=======================\n");
        printf("ITEM_CD      PRICE\n");
        printf("%-8d%010d\n", id, price);
        printf("=======================");
        return 0;
}