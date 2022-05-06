#include <stdio.h>
//factors of an array without using pointer//

int factors( int number)
{
    printf("Factors of %d are :", number);
    
    
    for ( int i=1;i <= number;i++)
    {
        
        if (number % i == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("\n\n");
}

int main()
{
    int arr[]={1,2,3,4,5};
    int i,number;
    number=arr[i];
    for (i = 0; i < 5; i++)
    {
        factors(arr[i]);
    }
    return 0;
}

