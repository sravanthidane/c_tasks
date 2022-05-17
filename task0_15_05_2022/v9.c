// function to assign values betweeen a given range to an array including step option//
#include <stdio.h>
void step_range(int array[], int length, int min, int max, int step)
{
    for (int index = 0, val = min; index < length && val < max; index++, val += step)
    {
        array[index] = val;
        printf("%d ", array[index]);
    }
}
int main()
{
    int array[100];
    int length = sizeof(array) / sizeof(int);
    // int min = 7, max = 5, step = 2;
    step_range(array, length, 2, 10, 2);
    printf("\n");
    return 0;
}
