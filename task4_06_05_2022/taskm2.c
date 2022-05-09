//c program to merge two arrays of same size//
#include <stdio.h>
void merging_array(int a1[], int a2[], int a3[])
{
    int i, index = 0;

    for (i = 0; i < 5; i++)
    {
        a3[index] = a1[i];
        index++;
    }

    for (i = 0; i < 5; i++)
    {
        a3[index] = a2[i];
        index++;
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
    printf("\n");
    return 0;
}
