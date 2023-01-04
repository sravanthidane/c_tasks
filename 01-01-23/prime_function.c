

#include <stdio.h>

int main()
{
    int min = 10, max = 20, i, j, t = 0, c = 0, prime[t];
    int len = max - min;
    int array[len];

    printf("values from min to max: ");
    for (i = 0, j = min; i < len && j < max; i++, j++)
    {
        array[i] = j;
        printf("\n%d ", array[i]);
    }

    for (i = 0; i < (len); i++)
    {
        c = 0;

        for (j = 2; j < array[i]; j++)
        {
            if (array[i] % j == 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
        {

            prime[t] = array[i];
            t++;
        }
    }
    printf("\nprime numbers in array:");
    for (i = 0; i < t; i++)
    {
        printf("\n%d", prime[i]);
    }
    return 0;
}