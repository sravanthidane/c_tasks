//c program to print factors of array with pointers//
#include <stdio.h>

int factors(int number)
{
    printf("Factors of %d are :", number);

    for (int i = 1; i <= number; i++)
    {

        if (number % i == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("\n\n");
}

int main()
{int* ptr;
    int arr[] = {1, 2, 3, 4, 5};
    ptr=arr;
    int i;
    for (i = 0; i < 5; i++)
    {
        factors(arr[i]);
    }
    return 0;
}
