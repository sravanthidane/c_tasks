#include <stdio.h> 
int main(){
    int array[6]={2,8,6,7,5,3};
    int i, temp, order, j;
    printf("the elements in array are:");
    for(i=0;i<6;i++){
        
        printf("\n%d",array[i]);
    }
    printf("\nenter 1[ascending] or 2[descending]:");
    scanf("\n%d",&order);
    if(order == 1)
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
    

if (order==2)

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

if(order == 1)
printf("\narray elements in acsnding order are:");
    
if (order == 2)
    printf("\narray elements in descending order are:");

    for (i=0;i<6;i++){
     printf("\n%d",array[i]);
}
printf("\n");
  return 0;
}  
