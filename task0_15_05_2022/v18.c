// function to assign an array to the same number//
#include <stdio.h>
#include <stdbool.h>
bool array_to_number(int number, int array[], int len)
{
    int i;
    if (array == NULL || len == 0)
        return false;
    for (i = 0; i < len; i++)
    {
        array[i] = number;
        printf("\n%d", array[i]);
    }
    return true;
}

int main()
{
    int number;
    int array[] = {4, 7, 3, 9, 5, 6};
    int len = sizeof(array) / sizeof(int);
    printf("\n Elements in the number are :\n");
    array_to_number(number, array, len);

    printf("\n");
    return 0;
}
