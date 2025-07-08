// 11장 예제 2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 100000

double mean(int arr[], int n);
double variance(int arr[], int n, double mean); /* 분산 */
double stddev(double variance);

int main()
{
    int arr[SIZE];

    // 파일
    FILE *f1 = fopen("f5.txt", "w");
    if (!f1)
    {
        printf("f1 is not open");
        exit(1);
    }

    // 랜덤값
    srand((unsigned)time(NULL));
    int randNum = 0;

    // 입력
    for (int i = 0; i < SIZE; i++)
    {
        randNum = (rand() % 100) + 1;
        if (randNum >= 1)
        {
            arr[i] = randNum;
            fprintf(f1, "%d ", randNum);
        }
    }

    // 닫기
    fclose(f1);
    double average = mean(arr, SIZE);
    double var = variance(arr, SIZE, average);
    double std = stddev(var);

    printf("aver : %0.2lf\n std : %0.2lf", average, std);
    return 0;
}

// 평균
double mean(int arr[], int n)
{

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / SIZE;
}

// 분산
double variance(int arr[], int n, double mean)
{
    double var;

    for (int i = 0; i < n; i++)
    {
        var += ((arr[i] - mean) * (arr[i] - mean));
    }

    return var / n;
}

// 표준편차
double stddev(double variance)
{
    return sqrt(variance);
}