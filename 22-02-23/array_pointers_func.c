#include <stdio.h>
// to sorting the given elements in array
void sort(int *array, int size, int *ptr)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[i] > ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
        // printing the after sorting elements in array
        printf("after sort arr[%d]:%d\n", i, ptr[i]);
}
// to print the elements from given array
void simple_array(int *array, int size, int *ptr)
{
    for (int i = 0; i < size; i++)
        // printing array elements
        printf("array[%d]:%d \n", i, ptr[i]);
    printf("\n");
}
// to print the array elements in reverse
void reverse_array(int *array, int size, int *ptr)
{
    for (int i = size - 1; i >= 0; i--)
        // printing reverse elements from array
        printf("array[%d]:%d\n", i, ptr[i]);
}
int main()
{
    int array[] = {1, 2, 3};
    int *ptr;
    int size = sizeof(array) / sizeof(int);
    ptr = array;
    // sorting function calling
    sort(array, size, ptr);
    // simple array function calling
    simple_array(array, size, ptr);
    // reverse array function calling
    reverse_array(array, size, ptr);
}