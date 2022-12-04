
#include <stdio.h>  
#include <stdlib.h>  
#include<string.h>  

int sum(int a, int b)
{
   return a + b;
}

int mul(int a, int b)
{
   return a * b;
}

int divison(int a, int b)
{
   return a / b;
}

int output(int (*type)(int, int), int a, int b)
{
   return type(a, b);
}

int main()
{

   printf("%d,%d", output(sum, 10, 12), output(divison, 10, 2));
   return 0;
}