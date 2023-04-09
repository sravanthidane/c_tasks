#include <stdio.h>
struct data
{
    char name[20];
    int acc_num;
    int balance;
} a[3];
void  check_balance(struct data *a,int num){
   for (int i = 0; i < 3; i++)
    {
        if (a[i].balance < 100)
        {
            printf("%s-%d-%d\n", a[i].name, a[i].acc_num, a[i].balance);
        }
    }
}
int main()
{
    printf("enter details");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s%d%d", a[i].name, &a[i].acc_num, &a[i].balance);
    }
     check_balance(a,3);

  
}