// 16장 11p
#include <stdio.h>
#include <math.h>

typedef struct
{
    int x, y;
} Point;

double getDistance(Point p1, Point p2);

int main()
{
    Point first, end;
    printf("first : ");
    scanf("%d %d", &first.x, &first.y);

    printf("end : ");
    scanf("%d %d", &end.x, &end.y);

    printf("point 1 : (%d %d)\n", first.x, first.y);
    printf("point 2 : (%d %d)\n", end.x, end.y);
    printf("distance : %0.2lf", getDistance(first, end));
    
    return 0;
}

double getDistance(Point p1, Point p2)
{
    Point result;
    result.x = p1.x - p2.x;
    result.y = p1.y - p2.y;

    double destance = sqrt(result.x * result.x + result.y * result.y);
    return destance;
}