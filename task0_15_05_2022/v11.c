#include <stdio.h>
// function to generate and assign n length fibonacci series //
void fibonacci(int first_num, int second_num, int size, int array[])
{
    // int first_num = array[0];
    // int second_num = array[1];
    int fibonacci_num;
    for (int i = 2; i < size; i++)
    {
        fibonacci_num = first_num + second_num;
        first_num = second_num;
        second_num = fibonacci_num;
        // printng fibonacci series
        printf("%d ", fibonacci_num);
    }
}
int main()
{
    int i;
    // Initialize array
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Calculate length of array
    int size = sizeof(array) / sizeof(int);
    // function calling
    fibonacci(1, 2, 10, array);
}