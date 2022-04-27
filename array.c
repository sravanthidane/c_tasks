#include<stdio.h>
int main(){
    int min=1,max=10;
    int array[9];     //length=max-min=9    
for(int i=0, j=min;
i<(max-min) && j<max;
i++,j++)
array[i]=j;
printf("even numbers in array:\n");
for(int i=0;i<9;i++)
{
    if (array[i]%2==0){
        printf("%d",array[i]);
    }
}
printf("\nodd numbers in array:\n");
for(int i=0;i<9;i++){
    if (array[i]%2 !=0){
        printf("%d",array[i]);
    }
}




    return 0;
}
