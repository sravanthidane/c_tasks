
// C code to delete an element from array at specified position

#include <stdio.h>
#define MAX_SIZE 10

int main()
{
    int arr[MAX_SIZE];
    int i, size = 10, pos;

    printf("Enter elements in array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element position to delete : ");
    scanf("%d", &pos);

    if (pos < 0 || pos > size)
    {
        printf("invalid operation");
    }
    else
    {
        /* Copy next element value to current element */
        for (i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("\nelements of array after delete are : ");
        for (i = 0; i < size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
