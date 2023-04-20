#include <stdio.h>
int add(int a, int b)
{
    return a + b;
};
int sub(int a, int b)
{
    return a - b;
};
int mul(int a, int b)
{
    return a * b;
};
int div(int a, int b)
{
    return a % b;
};
int main()
{
    int (*ptr[4])(int, int);
    ptr[0] = &add;
    ptr[1] = &sub;
    ptr[2] = &mul;
    ptr[3] = &div;
    int choice;
    printf("Enter 0 to sum, 1 to subtract, 2 to multiply, or 3 to divide: ");
    scanf("%d", &choice);
    int result;
    result = (*ptr[choice])(3, 6);
    printf("sum=%d", result);
    return 0;
}