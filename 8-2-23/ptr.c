#include<stdio.h>
int main(){
    int a=5;
    int *p;
    p=&a;
    printf("%d\n",*p);
    printf("%p\n",p);
    printf("%p\n",p);
    printf("%p\n",&a);
    printf("%d\n",a);

    return 0;
}