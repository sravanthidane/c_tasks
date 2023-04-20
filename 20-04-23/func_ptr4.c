#include <stdio.h>
int main()
{

    int a = 10,b=5;

    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &b;

    printf("Pointer ptr1 before Addition: ");
    printf("%d \n", *ptr1);

    *ptr1 = (*ptr2) + 2;
    printf("Pointer ptr1 after Addition: ");
    printf("%d \n", *ptr1);

    printf("Pointer ptr2 before Subtraction : ");
    printf("%d \n", *ptr2);

    *ptr1 = (*ptr2) - 2;
    printf("Pointer ptr1 after Subtraction : ");
    printf("%d \n", *ptr2);
    return 0;
}