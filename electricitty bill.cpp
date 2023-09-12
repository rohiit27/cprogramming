#include <stdio.h>

int main()
{
	int a,sur,cpu,bill;
	cpu=5;
	sur=10;
	printf("enter number of units:");
	scanf("%d",&a);
	if (a <= 200) 
	bill=a*5;
	else bill=(200*cpu)+(a-200)*sur;
	printf("total bill:%d",bill);
	return 0;
}
