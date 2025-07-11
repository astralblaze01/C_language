#include <stdio.h>

typedef enum
{
    INT,
    FLOAT,
    CHAR
} Type;

typedef union
{
    int i;
    float f;
    char c;
} Value;

typedef struct
{
    Type type;
    Value val;
} Sensor;

void printSensor(Sensor s)
{
    switch (s.type)
    {
    case INT:
        printf("%d\n", s.val.i);
        break;
    case FLOAT:
        printf("%.2f\n", s.val.f);
        break;
    case CHAR:
        printf("%c\n", s.val.c);
        break;
    }
}

int main()
{
    Sensor s1 = {INT, .val.i = 100};
    Sensor s2 = {FLOAT, .val.f = 36.5f};
    Sensor s3 = {CHAR, .val.c = 'N'};
    printSensor(s1);
    printSensor(s2);
    printSensor(s3);
    return 0;
}