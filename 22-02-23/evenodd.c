#include <stdio.h>
//to print even numbers in given array elements
void even(int *array, int size, int *ptr)
{
    
    printf("Even numbers in the array are - ");
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            // print even numbers in given array elements
            printf("%d \t", ptr[i]);
        }
    }
}
//to print odd numbers in given array elements
void odd(int *array, int size, int *ptr)
{
    printf("\n Odd numbers in the array are -");
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 != 0)
        {
            // print odd numbers in given array elements
            printf("%d \t ", ptr[i]);
        }
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int *ptr;
    int size = sizeof(array) / sizeof(int);
    ptr = array;
    //even function calling
    even(array, size,ptr);
     //odd function calling
    odd(array, size,ptr);
}