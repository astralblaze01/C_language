#include <stdio.h>
#include <stdlib.h>

void minMax(int data[], int n, int *min, int *max);

int main()
{
    int min, max, size;

    FILE *f = fopen("f4.txt", "r");
    if (!f)
    {
        printf("file is not open");
        exit(1);
    }

    fscanf(f, "%d", &size);
    int *data = (int *)malloc(sizeof(int) * size);
    if (!data)
    {
        printf("memory allocation is fail");
        exit(1);
    }

    for (int i = 0; fscanf(f, "%d", &data[i]) != EOF; i++)
        ;
    minMax(data, size, &min, &max);
    printf("%d %d", max, min);
    
    fclose(f);
    return 0;
}

void minMax(int data[], int n, int *min, int *max)
{
    *min = data[0];
    *max = data[0];
    for (int i = 1; i < n; i++)
    {
        if (*min > data[i])
        {
            *min = data[i];
        }
        if (*max < data[i])
        {
            *max = data[i];
        }
    }
    return;
}