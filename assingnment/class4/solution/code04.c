#include <stdio.h>

int main()
{
    double arr[] = {10.1, 20.2, 30.3, 40.4, 50.5, 60.6};
    printf("Total size of the array: %d bytes\n", sizeof(arr));
    printf("Size of one element: %d bytes\n", sizeof(arr) / 6);
    printf("Number of elements: %d", sizeof(arr) / 8);
    return 0;
}