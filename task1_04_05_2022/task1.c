

#include <stdio.h>
// function declaration for printing reverse array//
void array_reverse(int *array, int size)
{
    int *p;

    printf("\nElements of array in reverse order are :");

    for (int i = size - 1; i >= 0; i--)
    {
        printf("\n%d",array[i]);
    
    }
}
// function declaration for printing even numbers from array//
void array_even(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d ", array[i]);
        }
    }
}
// function declaration for printing odd numbers from array//
// void array_odd(int *array, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] % 2 != 0)
//             printf("%d ", array[i]);
//     }
// }

int main()
{
    // initializing an array//
    int array[6] = {2, 8, 6, 7, 5, 3};
    int i, size;
    size = sizeof(array) / sizeof(int);
    int *p = array;
    // printing elements of an array//
    printf("the elements in array are:");
    // for (i = 0; i < size; i++)
    {

        printf("\n%d", *(p + i));
    }

    

        array_reverse(array, size);

    // even numbers will print if arrayelement divided by 2//
    printf("\neven numbers from an array");
    for (int i = 0; i < size; i++)
    {

        array_even(array, size);
    
    }
    // // odd numbers will print if arrayelement not divided by 2//
    // printf("odd numbers from an array");
    // for (int i = 0; i < size; i++)
    // {

    //     array_odd(array, size);
        
    // }
    return 0;
}
