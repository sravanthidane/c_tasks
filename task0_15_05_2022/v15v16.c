// C program to find the count of positive
// and negative integers in an array

#include <stdio.h>

// Function to find the count of positive integers in an array
int count_Positive_Numbers(int array[], int size)
{
    int positive_count = 0;
    int i;
    for (i = 0; i < size; i++)
    {
        if (array[i] > 0)
            positive_count++;
    }
    return positive_count;
}

// Function to find the count of negative integers in an array
int count_Negative_Numbers(int array[], int size)
{
    int i;
    int negitive_count = 0;
    for (i = 0; i < size; i++)
    {
        if (array[i] < 0)
            negitive_count++;
    }
    return negitive_count;
}

int main()
{
    int array[] = {2, -1, 5, 6, 0, -3};

    int size = sizeof(array) / sizeof(array[0]);

    printf("Count of Positive elements:");
    int positive = count_Positive_Numbers(array, size);
    printf("%d\n", positive);
    printf("Count of Negative elements:");

    int negative = count_Negative_Numbers(array, size);
    printf("%d\n", negative);
    printf("\n");
    return 0;
}
