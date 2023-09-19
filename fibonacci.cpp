#include <stdio.h>

int main()
{
	int n,l ;
	printf("enter number");
	scanf("%d",&n);
	int a=0;
	int b=1;
	if (n==1) 
	printf("%d ",a);
	else if (n==2)
	printf("%d ",b);
	else 
	{
		int i=2;
		while (i<n)
		{
		
			l=a+b;
			a=b;
			b=l;
			i=i+1;
		}
		printf("the %dth fibbonacci no:%d",n,l);
	}
	return 0;
}
	
