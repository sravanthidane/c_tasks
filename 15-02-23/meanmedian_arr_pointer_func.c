#include <stdio.h>
// to find the mean from the given array
float mean_func(int *arr, int size, int *ptr)
{
    int sum = 0, i;
    float mean = 0;
    while (i < size)
    {
        sum = sum + ptr[i];
        i++;
    }
    mean = sum / size;
    return mean;
}
// to find the median from given array
float median_func(int *arr, int size, int *ptr)
{
    float median = 0;
    if (size % 2 == 0)
        median = (ptr[size / 2] + ptr[size / 2 - 1]) / 2.0;
    else
        median = ptr[size / 2];
    return median;
}
int main()
{
    int sum = 0, temp;
    float mean = 0, median = 0;
    // intializing the array elements
    int array[] = {1, 3, 5, 6, 7, 2, 8, 4.9, 11, 12, 10, 13};
    int *ptr;
    int size = sizeof(array) / sizeof(int);
    ptr = array;
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", ptr[i]);
        sum = sum + ptr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[i] > ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        // printing array elments after sorting
        printf("after sort arr[%d]:%d\n", i, ptr[i]);
    }
    // calling the mean function
    mean = mean_func(array, size, ptr);

    // calling the median function
    median = median_func(array, size, ptr);

    // printing the sum of given array
    printf("\nSum of given array is :%d\n", sum);

    // printing the mean from the array
    printf("\nmean of array is %lf\n", mean);

    //  printing the median from the array
    printf("\nMedian is %f\n", median);

    return 0;
}