#include <stdio.h>
void simple_array(int *array, int size, int *ptr)
{
    for (int i = 0; i < size; i++)
        printf("array[%d]:%d\n", i, ptr[i]);
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr;
    int size = sizeof(array) / sizeof(int);
    ptr = array;
    simple_array(array, size, ptr);
}