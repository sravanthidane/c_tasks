// function to find maximum and minimum number of an array//
#include <stdio.h>
int max_min_number_array(int array[], int len)
{
    int i, n, min, max;

    min = max = array[0];
    for (i = 1; i < len; i++)
    {
        if (min > array[i])
            min = array[i];
        if (max < array[i])
            max = array[i];
    }
    printf("minimum of array is : %d", min);
    printf("\nmaximum of array is : %d", max);
}

int main()
{
    int array[] = {1, 6, 55, 49};
    int len = sizeof(array) / sizeof(int);
    max_min_number_array(array, len);
    printf("\n");
    return 0;
}