#include <stdio.h>

int main()
{
	int n,l ;
	printf("enter number");
	scanf("%d",&n);
	l=0;
	while (n>0)
	{
		l=l+1;
		n=n/10 ;
	}
	printf("lenth of nummber:%d",l);
	return 0 ;
}
