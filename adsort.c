#include <stdio.h> 
int main(){
    int array[6]={2,8,6,7,5,3};
    int i, temp, order, j;
    printf("the elements in array are:");
    for(i=0;i<6;i++){
        
        printf("\n%d",array[i]);
    }
    
    
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {

            if (array[i] < array [j])
            {
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;

            }
        }
    }
    printf("\narray elements in descending order are:");
    for(i=0;i<6;i++){
    printf("\n%d",array[i]);
}


for(i=0;i<6;i++)
{
    for(j=i+1;j<6;j++)
    {
        if (array[i] > array [j])
         {
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;

            }
        }
    }


    printf("\narray elements in descending order are:");
    for (i=0;i<6;i++){
     printf("\n%d",array[i]);
}

  return 0;
}  
