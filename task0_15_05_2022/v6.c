// function to get the index of given elementin an array//
#include <stdio.h>
void find_index(int *array, int number, int size)
{
    int index;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == number)
            index = i;
    }
    printf("%d", index);
}

int main()
{
    int array[] = {4, 7, 3, 9, 5, 6};
    int size = sizeof(array) / sizeof(int);
    int number = 3, index;

    find_index(array, number, size);
    // printf("%d\t", index);
    printf("\n");
    return 0;
}
