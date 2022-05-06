//c program to print factors of number with pointers//
#include <stdio.h>
int factor(int num)
{
    int i;
    for (i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int num = 5, i;
    int *p;
    p = &num;
    printf("Factors of %d are: ", num);

    factor(num);
    return 0;
}
