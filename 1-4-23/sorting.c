// c program to join two arrays and create a new sorted array//
#include <stdio.h>
void merging_array(int a1[], int a2[], int a3[])
{
    int i, index = 0;
    // adding array1 to array3//
    for (i = 0; i < 5; i++)
    {
        a3[index] = a1[i];
        index++;
    }
    // adding array2 to array3//
    for (i = 0; i < 5; i++)

    {
        a3[index] = a2[i];
        index++;
    }
}
// sorting array//
void desending_order(int a3[])
{
    int i, j, temp;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {

            if (a3[i] > a3[j])
            {
                temp = a3[i];
                a3[i] = a3[j];
                a3[j] = temp;
            }
        }
    }
}
int main()
{
    int a1[5] = {1, 2, 3, 4, 5};
    int a2[5] = {6, 7, 8, 9, 10};

    int a3[10];

    int i, index = 0;

    merging_array(a1, a2, a3);
    printf("\nthe merged array is:");
    for (i = 0; i < 10; i++)
    {
        printf("%d", a3[i]);
    }
    desending_order(a3);
    printf("\nthe sorted  array is:");
    for (i = 0; i < 10; i++)
    {
        printf("%d", a3[i]);
    }
    printf("\n");
    return 0;
}