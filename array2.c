//c program to read and print elements

#include<stdio.h>
void main()
{
    int arr[9];
    int i;
    //read and print the elements
    printf("the elements in the aray:\n");
    for(i=0; i<9; i++)
    {
        printf("elements%d:",i);
        scanf("%d", &arr[i]);

    }
     printf("\nElements in array are: ");  
    for(i=0; i<9; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    	

    
}