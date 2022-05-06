//program on array sorting in ascending and descending order using functions with pointers//

#include <stdio.h>
//function declaration//
void ord_des(int *array, int size)
{
    int i, j, temp;
    int *p = array;
    //logic for swapping numbers
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {

            if (*(p + i) < *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    // for (i = 0; i < size; i++)
    // {
    //     printf("\n%d ", array[i]);
    // }
}
//function declaration for ascending order//
void ord_asc(int *array, int size)
{
    int i, j, temp;
    int *p = array;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    // for (i = 0; i < size; i++)
    // {
    //     printf("\n%d ", array[i]);
    // }
}

int main()
{
    int array[6] = {2, 8, 6, 7, 5, 3};
    int order, i, size;
    size = sizeof(array) / sizeof(int);
    int *p = array;
    printf("the elements in array are:");
    for (i = 0; i < size; i++)
    {

        printf("\n%d", *(p + i));
    }

    printf("\n 1:ascending \n 2:descending");
    printf("\nchoose your order: ");
    scanf("%d", &order);

    switch (order)
    {
    case 1:
        printf("acsending order: ");
        ord_asc(array, size);
        for (i = 0; i < size; i++){
        printf("%d",array[i]);
    }
        break;

    case 2:
        printf("descending order: ");
    
        ord_des(array, size);
        for (i = 0; i < size; i++){
        printf("%d",array[i]);
        }
        break;
    }

    printf("\n");
    return 0;
}
