#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    double x, y;
} Point;

typedef struct
{
    double slope;
    double yintercept;
} Line;

Line calcuate(Point a, Point b);

int main()
{
    Point cor1;
    Point cor2;

    scanf("%lf %lf", &cor1.x, &cor1.y);
    scanf("%lf %lf", &cor2.x, &cor2.y);

    Line result = calcuate(cor1, cor2);
    printf("%.1lf %.1lf", result.slope, result.yintercept);

    return 0;
}

Line calcuate(Point a, Point b)
{
    Line result;
    result.slope = (b.y - a.y) / (b.x - a.x);
    result.yintercept = a.y - result.slope * a.x;
    return result;
}