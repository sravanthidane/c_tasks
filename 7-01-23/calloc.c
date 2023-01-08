#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, i;
    p = (int *)calloc(5, sizeof(int));
    if (p == NULL)
    {
        printf("memory not available\n");
        exit(1);
    }
    printf("enter integers\n");
    for (i = 0; i < 5; i++)
    {

        scanf("%d", p + i);
    }
    printf("enterred elements:\n");
    for (i = 0; i < 5; i++)
    {

        printf("%d  ", *(p + i));
    }

    p = (int *)realloc(p, 9 * sizeof(int));
    if (p == NULL)
    {
        printf("memory not available\n");
        exit(1);
    }
    printf("enter other 4elements:\n");
    for (i = 5; i < 9; i++)
    {
        scanf("%d", (p + i));
    }
    printf("all elements stored:\n");
    {
        for (i = 0; i < 9; i++)
        {
            printf("%d  ", *(p + i));
        }
    }

    return 0;
}