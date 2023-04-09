#include <stdio.h>
struct EmpAddress
{
char *ename;
char stname[20];
int pincode;
}
employee={"John Alter","Court Street \n",654134},*pt=&employee;

int main()
{
	printf(" %s from %s \n\n",pt->ename,pt->stname);//(*pt).stname
	return 0;
}