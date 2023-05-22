#include <stdio.h>

void add(int a,int b){
  
	int sum;
    sum = a + b;      
    
    printf("addition : %d",sum);
    }
void sub(int num1,int num2){
  
     int result;
     result=num1-num2;
    
    printf("\nsubtraction : %d\n",result);
    }
   void mul(int num1,int num2){
  
     int result;
     result=num1*num2;
    
    printf("multiplication : %d\n",result);
    }
  void div(int num1,int num2){
  
     float result;
     result=num1/num2;
    
    printf("division : %f\n",result);
    }


int main() {    

    int number1, number2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    add(number1,number2);
    sub(number1,number2);
    mul(number1,number2);
  div(number1,number2);
  
    return 0;
}

