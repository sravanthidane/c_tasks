//c program to multiply corresponding elements of two same size arrays//
#include <stdio.h>
void array_sum(int a[], int b[])

    for (int i = 0; i < 5; i++)
{
    printf("%d*%d=", a[i], b[i]);
    printf("%d\n", a[i] * b[i]);
}
int main()
{

    int a[] = {2, 6, 9, 4, 5};
    int b[] = {4, 8, 1, 7, 3};
    int c[10];

    array_sum(a, b);
    return 0;
}
