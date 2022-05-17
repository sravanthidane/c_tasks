/* C program to count the number of even and odd elements in an array */
#include <stdio.h>
void count_odd_even_numbers(int array[], int size)
{
    int count_odd = 0, count_even = 0;
    for (int i = 0; i < size; i++)
    {
        {
            if (array[i] % 2 == 1)
                count_odd++;
            else
                count_even++;
        }
    }
    printf("Odd: %d", count_odd);
    printf("\nEven: %d", count_even);
}
int main()
{

    int array[] = {4, 7, 3, 9, 5, 6};
    int size = sizeof(array) / sizeof(int);

    count_odd_even_numbers(array, size);

    printf("\n");
    return 0;
}
