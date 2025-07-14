// 17장 44p
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
} Person;

int compareByName(const void *a, const void *b);

int main()
{
    Person people[] = {
        {"Davide", 20},
        {"Alice", 30},
        {"Bob", 25},
        {"Charlie", 35}};

    int size = sizeof(people) / sizeof(people[0]);
    qsort(people, size, sizeof(Person), compareByName);

    for (int i = 0; i < size; i++)
    {
        printf("%s %d\n", people[i].name, people[i].age);
    }
    return 0;
}

int compareByName(const void *a, const void *b)
{
    Person *peopleA = (Person *)a;
    Person *peopleB = (Person *)b;
    return strcmp(peopleA->name, peopleB->name);
    // return strcmp((Person*)a->name, (Person*)b->name); // 이거 안됌
}
