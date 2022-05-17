// function to print all the elements of an array//
#include <stdio.h>
void print_array(int *array, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}
int main()
{
    int array[] = {4, 7, 3, 9, 5, 6};
    int size = sizeof(array) / sizeof(int);
    printf("\n Elemenst in this Array are :\n");
    print_array(array, size);
    return 0;
}
