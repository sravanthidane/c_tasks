#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *p, i;
    printf("enter number of integers :\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("memory not available\n");
        exit(1);
    }
    printf("enter integers\n");
    for (i = 0; i < n; i++)
    {

        scanf("%d", p + i);
    }
    printf("enterred elements:\n");
    for (i = 0; i < n; i++)
    {

        printf("%d  ", *(p + i));
    }

    return 0;
}