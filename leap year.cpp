#include <stdio.h>

int main()
{
	int a ;
	printf("enter year:");
	scanf("%d",&a);
	if ((a%4==0) && (a%100!=0 || a%400==0)) printf("the year %d is leap year",a);
	else printf("the year %d is not a leap year",a);
	return 0;
}
