// function to reverse the elements of an array//
#include <stdio.h>
void reverse_array(int *array, int size)
{

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d\t", array[i]);
    }
}
int main()
{
    int array[] = {4, 7, 3, 9, 5, 6};
    int size = sizeof(array) / sizeof(int);
    printf("\n Elemenst in this Array are :\n");
    reverse_array(array, size);
    printf("\n");
    return 0;
}
