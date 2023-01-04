#include <stdio.h>
int main()
{
    int array[6] = {2, 8, 6, 7, 5, 3};
    int i, temp, order, j;
    int *p = array;
    printf("the elements in array are:");
    for (i = 0; i < 6; i++)
    {

        printf("\n%d", *(p + i));
    }
    printf("\nenter 1[ascending] or 2[descending]:");
    scanf("\n%d", &order);
    if (order == 1)
        for (i = 0; i < 6; i++)
        {
            for (j = i + 1; j < 6; j++)
            {

                if (*(p + i) < *(p + j))
                {
                    temp = *(p + i);
                    *(p + i) = *(p + j);
                    *(p + j) = temp;
                }
            }
        }
    if (order == 2)

        for (i = 0; i < 6; i++)
        {
            for (j = i + 1; j < 6; j++)
            {
                if (*(p + i) > *(p + j))
                {
                    temp = *(p + i);
                    *(p + i) = *(p + j);
                    *(p + j) = temp;
                }
            }
        }

    if (order == 1)
        printf("\narray elements in ascending order are:");

    if (order == 2)
        printf("\narray elements in descending order are:");

    for (i = 0; i < 6; i++)
    {
        printf("\n%d", *(p + i));
    }
    printf("\n");
    return 0;
}