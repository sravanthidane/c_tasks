// function to count the number of prime numbers in an array//
#include <stdio.h>
#include <stdbool.h>
bool prime(int array[], int size, int i, int j, int number)
{
    int count = 0;
    if (array == NULL || size == 0)
        return false;
    else
    {
        for (i = 0; i < size; i++)
        {
            number = array[i];
            for (j = 2; j <= number / 2; j++)
            {
                if (number % j == 0)
                    break;
            }
            if (j > number / 2)
            {
                printf("%d ", number);
                count++;
            }
        }
        printf("\nnumber of prime numbers in array:%d\n", count);
        return true;
    }
}
int main()
{
    int i, j, number;
    int array[] = {1,9, 11, 13, 15, 16};
    int size = sizeof(array) / sizeof(int);
    int count_prime = prime(array, size, i, j, number);
}