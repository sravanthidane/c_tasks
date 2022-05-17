// function to get the index of a given element in a given range of an array//
#include <stdio.h>
#include <stdbool.h>
void find_index_range(int array[], int size, int from, int until)
{
    int i, number;
    for (i = 0; i < size; i++)
    {
        if (until > array[i] && from < array[i])
        {
            if (number == array[i])
            {
                printf("\nINDEX of the element:%d\n", i);
            }
            else
                printf("\ngiven number not in the range");
            break;
        }
    }
}
int main()
{
    int array[] = {4, 7, 3, 9, 5, 6};
    int size = sizeof(array) / sizeof(int);
    int number = 9, from = 3, until = 5;
    printf("\n Elements in this Array are :\n");
    find_index_range(number, array, from, until);
    printf("\n");
    return 0;
}