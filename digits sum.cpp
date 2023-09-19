#include <stdio.h>
int main()
{
	int n,r,t ;
	printf("enter number");
	scanf("%d",&n);
	while (n>0)
	{
		t=n%10;
		r=t+r;
		n=n/10;
	}
	printf("sum of all the digits:%d",r);
	return 0;
}
