#include <stdio.h>
void reverse_array(int *array, int size,int *ptr)
{
    for (int i = size - 1; i >= 0; i--)
        printf("array[]:%d\n", ptr[i]);
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr;
    int size = sizeof(array) / sizeof(int);
    ptr=array;
    for(int i =0;i<size;i++)
        printf("before reverse array[]:%d\n",ptr[i]);
    reverse_array(array, size,ptr);
}
