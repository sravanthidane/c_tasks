#include <stdio.h>
// to find the mean from the given array
float mean_func(int *arr, int size)
{
    int sum = 0, i;
    float mean = 0;
    while (i < size)
    {
        sum = sum + arr[i];
        i++;
    }
    mean = sum / size;
    return mean;
}
// to find the median from given array
float median_func(int *arr, int size)
{
    float median = 0;
    if (size % 2 == 0)
        median = (arr[size / 2] + arr[size / 2 - 1]) / 2.0;
    else
        median = arr[size / 2];
    return median;
}
int main()
{
    int sum = 0, temp;
    float mean = 0, median = 0;
    // intializing the array elements
    int arr[] = {1, 3, 5, 6, 7, 2, 8, 4.9, 11, 12, 10, 13};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
        sum = sum + arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
        // printing arraybelments after sorting
        printf("after sort arr[%d]:%d\n", i, arr[i]);
    // calling the mean function
    mean = mean_func(arr, size);
    // calling the median function
    median = median_func(arr, size);
    // printing the sum of given array
    printf("\nSum of given array is :%d\n", sum);
    // printing the mean from the array
    printf("\nmean of array is %lf\n", mean);
    //  printing the median from the array
    printf("\nMedian is %f\n", median);
    return 0;
}