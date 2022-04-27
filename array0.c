//change value of array and add value
#include<stdio.h>
int main(){
    int i=0;
   float marks[6]={2.3,77.8,55.3,77.2};
   //change value to 33.3 at index3

marks[3]=33.3; //changing value
marks[4]=99.9; //adding value

for(i=0;i<6;i++){
printf("%f\n",marks[i]);
}
return 0;

}