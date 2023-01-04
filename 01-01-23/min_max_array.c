#include <stdio.h>

int main()
{
    int minimum, maximum, flag, i, j;
    printf("Enter minimum number: ");
    scanf("%d", &minimum);
    printf("Enter maximum number: ");
    scanf("%d", &maximum);

    for (i = minimum; i <= maximum; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i >= 2)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}