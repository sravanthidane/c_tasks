#include<stdio.h>
typedef struct
{
    int id;
    char name[36];
    int sal;

} emp;
emp getdata ()
{
    emp te;
    printf ("Enter emp_id:");
    scanf ("%d", &te.id);
    printf ("Enter emp_name:");
    scanf ("%s", te.name);
    printf ("Enter emp_salary:");
    scanf ("%d", &te.sal);
    return te;
}

void showdata (emp te)
{
    printf ("\nID : %d name:%s salary:%d", te.id, te.name, te.sal);
}

int sumsal (int s1, int s2)
{
    return (s1 + s2);
}

int main ()
{
    emp e1, e2;
    int tsal;
    e1 = getdata ();
    e2 = getdata ();
    showdata (e1);
    showdata (e2);
    tsal = sumsal (e1.sal, e2.sal);
    printf ("\nSum Salary + %d", tsal);
}