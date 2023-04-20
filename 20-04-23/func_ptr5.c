#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr=arr;
    printf("entering");
// for(int i=0;i<5;i++){
//     scanf("%d",&ptr[i]);
  
// }
// while(ptr<&arr[5]){
//    scanf("%d",ptr); 
//    ptr++;
// }
printf("printing");
while(ptr<arr[5]){
    printf("pting");
   printf("%d",*ptr); 
   ptr++;
}
// printf("printing");
// for(int i=0;i<5;i++){
//     printf("%d",*(ptr+i));
   
// }

}