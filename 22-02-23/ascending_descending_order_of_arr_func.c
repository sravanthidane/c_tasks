#include <stdio.h>
// to print the elements in ascending order from array
int ascending(int *arr, int size, int *ptr)
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
        // printing array elements ascending order
        printf("ascending order [%d]:%d\n", i, ptr[i]);
}
void descending(int *arr, int size, int *ptr)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[i] < ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
        //   printing array elements after dscending order
        printf("descending[%d]:%d\n", i, arr[i]);
}
int main()
{
    int i, size;
    int *ptr;
    // sorting array in ascending order
    int arry[] = {2, 4, 1, 55, 43, 22, 23, 19, 11, 3};
    size = sizeof(arry) / sizeof(int);
    ptr = arry;
    for (int i = 0; i < size; i++)
        // printing array elements before sorting
        printf("before sort arr[%d]:%d\n", i, ptr[i]);
    // ascending order function calling
    ascending(arry, size, ptr);
    // descending order function calling
    descending(arry, size, ptr);
    return 0;
}
