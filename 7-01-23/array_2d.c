#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows, columns, i, j;
    printf("enter rows and columns:\n");
    scanf("%d %d", &rows, &columns);
    int **p = malloc(rows * sizeof(char *)); // Allocate row pointers
    for (i = 0; i < rows; i++)
        p[i] = malloc(columns * sizeof(int));
    printf("enter array elements\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
    printf("matrix elements are:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}