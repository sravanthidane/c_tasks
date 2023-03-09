#include <stdio.h>
// Add two arrays of same size
void sum_array(int array1[],int array2[],int sumarray[],int size1)
{
    int i;
   for ( i = 0; i < size1; i++)
    {
        sumarray[i] = array1[i] + array2[i];
        // printing sum of two arrays
        printf("sumarry[%d]:%d\n", i, sumarray[i]);
    }
}
int main()
{
    int i;
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int size1= sizeof(array1) / sizeof(int);
    int sumarray[size1];
    // function calling
    sum_array(array1,array2,sumarray,size1);
   
}
