// function to find the mean of an array//
#include <stdio.h>
void mean_of_array(int size, int *array)
{
    int sum = 0, mean, i;
    for (i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    printf("\nThe Sum of Array Elements     = %d\n", sum);
    mean = sum / size;
    printf("\nThe mean of Array Elements     = %d\n", mean);
}
int main()
{
    int i, sum;
    float mean;

    int array[] = {1, 2, 3};
    int size = sizeof(array) / sizeof(int);
    mean_of_array(size, array);

    return 0;
}