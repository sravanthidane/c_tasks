// function to assign values betweeen a given range to an array//
#include <stdio.h>
void range(int array[], int length, int min, int max)
{
    for (int index = 0, val = min; index < length && val < max; index++, val++)
    {
        array[index] = val;
        printf("%d ", array[index]);
    }
}
int main()
{
    int array[100];
    int length = sizeof(array) / sizeof(int);
    range(array, length, 2, 10);
    printf("\n");
    return 0;
}
