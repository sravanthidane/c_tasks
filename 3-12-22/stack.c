#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int main()
{
    int item, choice, i;
    int array[MAX_SIZE];
    int top = 0;
    int exit = 1;

    do
    {
        printf("\n1.Push \n2.Pop \n3.Display\n");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (top == MAX_SIZE)
                printf("\nstack full\n");
            else
            {
                printf("\nenter value : ");
                scanf("%d", &item);
                top++;
                array[top] = item;
            }
            break;
        case 2:
            if (top == 0)
                printf("\n stack empty");
            else
            {
                --top;
                printf("\nPopped Value  : %d ", array[top]);
            }
            break;
        case 3:
            printf("\nelements in stack:");
            for (i = (top - 1); i >= 0; i--)
            {
                printf("\nvalue  : %d ", array[i]);
            }
            break;
        default:
            exit = 0;
            break;
        }
    } while (exit);

    return 0;
}
