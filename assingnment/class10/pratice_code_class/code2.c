// 16장 8p
#include <stdio.h>

typedef struct
{
    char name[20];
    int actnum;
    double balance;
} account;

int main()
{
    account bank;
    // account *a;
    // scanf("%s %d %lf", bank.name, &bank.actnum, &bank.balance);
    // printf("%s %d %lf", bank.name, bank.actnum, bank.balance);
    printf("%d", sizeof(bank));
    return 0;
}