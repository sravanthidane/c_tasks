#include <stdio.h>
// to join the two arrya elements
void join_array(int array1[], int array2[], int array3[], int size1, int size2, int size3)
{
    int i, j;
    for (i = 0; i < size1; i++)
    {
        // passing the array1 elements to the array3
        array3[i] = array1[i];
        // printing array1 elements into array3
        printf("passing array1 elements to arrar3[%d]:%d\n", i, array3[i]);
    }
    for (i = 0, j = size1; j < size3 && i < size2; i++, j++)
    {
        //  passing the array2 elements to the array3
        array3[j] = array2[i];
        // printing array2 elements into array3
        printf("passing array2 elements to arrar3[%d]:%d\n", i, array3[j]);
    }
    for (i = 0; i < size3; i++)
    {
        // merging array1 and array2 elements to the array3
        printf("after merging array3[%d]:%d\n", i, array3[i]);
    }
    printf("\nAfter sorting array3 elements:\n");
    // sorting the array3 elements after merging
    for (int i = 0; i < size3; i++)
    {
        int temp;
        for (int j = i + 1; j < size3; j++)
        {
            if (array3[i] > array3[j])
            {
                temp = array3[i];
                array3[i] = array3[j];
                array3[j] = temp;
            }
        }
    }

    for (int i = 0; i < size3; i++)
    {
        // printing After sorting array3 elements
        printf(" %d ", array3[i]);
    }
}
int main()
{
    int j, i;
    int array1[] = {1, 3, 5, 7, 9};
    int array2[] = {2, 4, 6, 8, 10,11};
    int size1 = sizeof(array1) / sizeof(int);
    int size2 = sizeof(array2) / sizeof(int);
    int size3 = size1 + size2;
    int array3[size3];
    // function calling
    join_array(array1, array2, array3, size1, size2, size3);
}